/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/iot/model/BatchCheckDeviceNamesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

BatchCheckDeviceNamesResult::BatchCheckDeviceNamesResult() :
	ServiceResult()
{}

BatchCheckDeviceNamesResult::BatchCheckDeviceNamesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchCheckDeviceNamesResult::~BatchCheckDeviceNamesResult()
{}

void BatchCheckDeviceNamesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ApplyId"].isNull())
		data_.applyId = std::stol(dataNode["ApplyId"].asString());
	auto allInvalidDetailListNode = dataNode["InvalidDetailList"]["InvalidDetailListItem"];
	for (auto dataNodeInvalidDetailListInvalidDetailListItem : allInvalidDetailListNode)
	{
		Data::InvalidDetailListItem invalidDetailListItemObject;
		if(!dataNodeInvalidDetailListInvalidDetailListItem["DeviceName"].isNull())
			invalidDetailListItemObject.deviceName = dataNodeInvalidDetailListInvalidDetailListItem["DeviceName"].asString();
		if(!dataNodeInvalidDetailListInvalidDetailListItem["NickName"].isNull())
			invalidDetailListItemObject.nickName = dataNodeInvalidDetailListInvalidDetailListItem["NickName"].asString();
		if(!dataNodeInvalidDetailListInvalidDetailListItem["ErrorMsg"].isNull())
			invalidDetailListItemObject.errorMsg = dataNodeInvalidDetailListInvalidDetailListItem["ErrorMsg"].asString();
		data_.invalidDetailList.push_back(invalidDetailListItemObject);
	}
		auto allInvalidDeviceNameList = dataNode["InvalidDeviceNameList"]["InvalidDeviceName"];
		for (auto value : allInvalidDeviceNameList)
			data_.invalidDeviceNameList.push_back(value.asString());
		auto allInvalidDeviceNicknameList = dataNode["InvalidDeviceNicknameList"]["InvalidDeviceNickname"];
		for (auto value : allInvalidDeviceNicknameList)
			data_.invalidDeviceNicknameList.push_back(value.asString());
		auto allRepeatedDeviceNameList = dataNode["RepeatedDeviceNameList"]["RepeatDevieNameList"];
		for (auto value : allRepeatedDeviceNameList)
			data_.repeatedDeviceNameList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

BatchCheckDeviceNamesResult::Data BatchCheckDeviceNamesResult::getData()const
{
	return data_;
}

std::string BatchCheckDeviceNamesResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchCheckDeviceNamesResult::getCode()const
{
	return code_;
}

bool BatchCheckDeviceNamesResult::getSuccess()const
{
	return success_;
}


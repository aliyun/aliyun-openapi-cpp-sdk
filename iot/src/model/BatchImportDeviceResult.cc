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

#include <alibabacloud/iot/model/BatchImportDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

BatchImportDeviceResult::BatchImportDeviceResult() :
	ServiceResult()
{}

BatchImportDeviceResult::BatchImportDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchImportDeviceResult::~BatchImportDeviceResult()
{}

void BatchImportDeviceResult::parse(const std::string &payload)
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
		if(!dataNodeInvalidDetailListInvalidDetailListItem["DeviceSecret"].isNull())
			invalidDetailListItemObject.deviceSecret = dataNodeInvalidDetailListInvalidDetailListItem["DeviceSecret"].asString();
		if(!dataNodeInvalidDetailListInvalidDetailListItem["Sn"].isNull())
			invalidDetailListItemObject.sn = dataNodeInvalidDetailListInvalidDetailListItem["Sn"].asString();
		if(!dataNodeInvalidDetailListInvalidDetailListItem["ErrorMsg"].isNull())
			invalidDetailListItemObject.errorMsg = dataNodeInvalidDetailListInvalidDetailListItem["ErrorMsg"].asString();
		data_.invalidDetailList.push_back(invalidDetailListItemObject);
	}
		auto allRepeatedDeviceNameList = dataNode["RepeatedDeviceNameList"]["repeatedDeviceName"];
		for (auto value : allRepeatedDeviceNameList)
			data_.repeatedDeviceNameList.push_back(value.asString());
		auto allInvalidDeviceNameList = dataNode["InvalidDeviceNameList"]["invalidDeviceName"];
		for (auto value : allInvalidDeviceNameList)
			data_.invalidDeviceNameList.push_back(value.asString());
		auto allInvalidDeviceSecretList = dataNode["InvalidDeviceSecretList"]["invalidDeviceSecret"];
		for (auto value : allInvalidDeviceSecretList)
			data_.invalidDeviceSecretList.push_back(value.asString());
		auto allInvalidSnList = dataNode["InvalidSnList"]["invalidSn"];
		for (auto value : allInvalidSnList)
			data_.invalidSnList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

BatchImportDeviceResult::Data BatchImportDeviceResult::getData()const
{
	return data_;
}

std::string BatchImportDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchImportDeviceResult::getCode()const
{
	return code_;
}

bool BatchImportDeviceResult::getSuccess()const
{
	return success_;
}


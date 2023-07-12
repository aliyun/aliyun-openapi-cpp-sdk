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

#include <alibabacloud/iot/model/AddDeviceToSharePromotionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

AddDeviceToSharePromotionResult::AddDeviceToSharePromotionResult() :
	ServiceResult()
{}

AddDeviceToSharePromotionResult::AddDeviceToSharePromotionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddDeviceToSharePromotionResult::~AddDeviceToSharePromotionResult()
{}

void AddDeviceToSharePromotionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allFailDeviceSimpleInfoListNode = dataNode["FailDeviceSimpleInfoList"]["item"];
	for (auto dataNodeFailDeviceSimpleInfoListitem : allFailDeviceSimpleInfoListNode)
	{
		Data::Item itemObject;
		if(!dataNodeFailDeviceSimpleInfoListitem["ProductKey"].isNull())
			itemObject.productKey = dataNodeFailDeviceSimpleInfoListitem["ProductKey"].asString();
		if(!dataNodeFailDeviceSimpleInfoListitem["DeviceName"].isNull())
			itemObject.deviceName = dataNodeFailDeviceSimpleInfoListitem["DeviceName"].asString();
		if(!dataNodeFailDeviceSimpleInfoListitem["FailCode"].isNull())
			itemObject.failCode = std::stoi(dataNodeFailDeviceSimpleInfoListitem["FailCode"].asString());
		if(!dataNodeFailDeviceSimpleInfoListitem["FailReason"].isNull())
			itemObject.failReason = dataNodeFailDeviceSimpleInfoListitem["FailReason"].asString();
		data_.failDeviceSimpleInfoList.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

AddDeviceToSharePromotionResult::Data AddDeviceToSharePromotionResult::getData()const
{
	return data_;
}

std::string AddDeviceToSharePromotionResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string AddDeviceToSharePromotionResult::getCode()const
{
	return code_;
}

bool AddDeviceToSharePromotionResult::getSuccess()const
{
	return success_;
}


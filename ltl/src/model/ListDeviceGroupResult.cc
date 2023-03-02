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

#include <alibabacloud/ltl/model/ListDeviceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

ListDeviceGroupResult::ListDeviceGroupResult() :
	ServiceResult()
{}

ListDeviceGroupResult::ListDeviceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeviceGroupResult::~ListDeviceGroupResult()
{}

void ListDeviceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Num"].isNull())
		data_.num = std::stoi(dataNode["Num"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Size"].isNull())
		data_.size = std::stoi(dataNode["Size"].asString());
	auto allPageDataNode = dataNode["PageData"]["DeviceGroupInfo"];
	for (auto dataNodePageDataDeviceGroupInfo : allPageDataNode)
	{
		Data::DeviceGroupInfo deviceGroupInfoObject;
		if(!dataNodePageDataDeviceGroupInfo["Status"].isNull())
			deviceGroupInfoObject.status = dataNodePageDataDeviceGroupInfo["Status"].asString();
		if(!dataNodePageDataDeviceGroupInfo["DeviceGroupId"].isNull())
			deviceGroupInfoObject.deviceGroupId = dataNodePageDataDeviceGroupInfo["DeviceGroupId"].asString();
		if(!dataNodePageDataDeviceGroupInfo["ProductKey"].isNull())
			deviceGroupInfoObject.productKey = dataNodePageDataDeviceGroupInfo["ProductKey"].asString();
		if(!dataNodePageDataDeviceGroupInfo["Remark"].isNull())
			deviceGroupInfoObject.remark = dataNodePageDataDeviceGroupInfo["Remark"].asString();
		if(!dataNodePageDataDeviceGroupInfo["AuthorizeType"].isNull())
			deviceGroupInfoObject.authorizeType = dataNodePageDataDeviceGroupInfo["AuthorizeType"].asString();
		if(!dataNodePageDataDeviceGroupInfo["OwnerName"].isNull())
			deviceGroupInfoObject.ownerName = dataNodePageDataDeviceGroupInfo["OwnerName"].asString();
		if(!dataNodePageDataDeviceGroupInfo["OwnerUid"].isNull())
			deviceGroupInfoObject.ownerUid = dataNodePageDataDeviceGroupInfo["OwnerUid"].asString();
		data_.pageData.push_back(deviceGroupInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListDeviceGroupResult::getMessage()const
{
	return message_;
}

ListDeviceGroupResult::Data ListDeviceGroupResult::getData()const
{
	return data_;
}

int ListDeviceGroupResult::getCode()const
{
	return code_;
}

bool ListDeviceGroupResult::getSuccess()const
{
	return success_;
}


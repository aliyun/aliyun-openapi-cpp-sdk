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

#include <alibabacloud/lto/model/ListAllDeviceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListAllDeviceGroupResult::ListAllDeviceGroupResult() :
	ServiceResult()
{}

ListAllDeviceGroupResult::ListAllDeviceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAllDeviceGroupResult::~ListAllDeviceGroupResult()
{}

void ListAllDeviceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DeviceGroupInfo"];
	for (auto valueDataDeviceGroupInfo : allDataNode)
	{
		DeviceGroupInfo dataObject;
		if(!valueDataDeviceGroupInfo["Name"].isNull())
			dataObject.name = valueDataDeviceGroupInfo["Name"].asString();
		if(!valueDataDeviceGroupInfo["DeviceGroupId"].isNull())
			dataObject.deviceGroupId = valueDataDeviceGroupInfo["DeviceGroupId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAllDeviceGroupResult::getMessage()const
{
	return message_;
}

int ListAllDeviceGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListAllDeviceGroupResult::DeviceGroupInfo> ListAllDeviceGroupResult::getData()const
{
	return data_;
}

std::string ListAllDeviceGroupResult::getCode()const
{
	return code_;
}

bool ListAllDeviceGroupResult::getSuccess()const
{
	return success_;
}


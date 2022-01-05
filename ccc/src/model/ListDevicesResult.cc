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

#include <alibabacloud/ccc/model/ListDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListDevicesResult::ListDevicesResult() :
	ServiceResult()
{}

ListDevicesResult::ListDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDevicesResult::~ListDevicesResult()
{}

void ListDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Device"];
	for (auto valueDataDevice : allDataNode)
	{
		Device dataObject;
		if(!valueDataDevice["Extension"].isNull())
			dataObject.extension = valueDataDevice["Extension"].asString();
		if(!valueDataDevice["Expires"].isNull())
			dataObject.expires = std::stol(valueDataDevice["Expires"].asString());
		if(!valueDataDevice["Contact"].isNull())
			dataObject.contact = valueDataDevice["Contact"].asString();
		if(!valueDataDevice["DeviceId"].isNull())
			dataObject.deviceId = valueDataDevice["DeviceId"].asString();
		if(!valueDataDevice["UserId"].isNull())
			dataObject.userId = valueDataDevice["UserId"].asString();
		if(!valueDataDevice["CallId"].isNull())
			dataObject.callId = valueDataDevice["CallId"].asString();
		if(!valueDataDevice["InstanceId"].isNull())
			dataObject.instanceId = valueDataDevice["InstanceId"].asString();
		data_.push_back(dataObject);
	}
	auto allParams = value["Params"]["Param"];
	for (const auto &item : allParams)
		params_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDevicesResult::getMessage()const
{
	return message_;
}

int ListDevicesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> ListDevicesResult::getParams()const
{
	return params_;
}

std::vector<ListDevicesResult::Device> ListDevicesResult::getData()const
{
	return data_;
}

std::string ListDevicesResult::getCode()const
{
	return code_;
}


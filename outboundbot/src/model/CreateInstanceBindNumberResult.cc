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

#include <alibabacloud/outboundbot/model/CreateInstanceBindNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

CreateInstanceBindNumberResult::CreateInstanceBindNumberResult() :
	ServiceResult()
{}

CreateInstanceBindNumberResult::CreateInstanceBindNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateInstanceBindNumberResult::~CreateInstanceBindNumberResult()
{}

void CreateInstanceBindNumberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allListNode = dataNode["List"]["ListItem"];
	for (auto dataNodeListListItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListListItem["InstanceId"].isNull())
			listItemObject.instanceId = dataNodeListListItem["InstanceId"].asString();
		if(!dataNodeListListItem["Success"].isNull())
			listItemObject.success = dataNodeListListItem["Success"].asString() == "true";
		data_.list.push_back(listItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateInstanceBindNumberResult::getMessage()const
{
	return message_;
}

int CreateInstanceBindNumberResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateInstanceBindNumberResult::Data CreateInstanceBindNumberResult::getData()const
{
	return data_;
}

std::string CreateInstanceBindNumberResult::getCode()const
{
	return code_;
}

bool CreateInstanceBindNumberResult::getSuccess()const
{
	return success_;
}


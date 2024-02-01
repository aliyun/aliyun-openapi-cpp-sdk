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

#include <alibabacloud/eventbridge/model/ListEventBusesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

ListEventBusesResult::ListEventBusesResult() :
	ServiceResult()
{}

ListEventBusesResult::ListEventBusesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventBusesResult::~ListEventBusesResult()
{}

void ListEventBusesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allEventBusesNode = dataNode["EventBuses"]["EventBusesItem"];
	for (auto dataNodeEventBusesEventBusesItem : allEventBusesNode)
	{
		Data::EventBusesItem eventBusesItemObject;
		if(!dataNodeEventBusesEventBusesItem["EventBusARN"].isNull())
			eventBusesItemObject.eventBusARN = dataNodeEventBusesEventBusesItem["EventBusARN"].asString();
		if(!dataNodeEventBusesEventBusesItem["EventBusName"].isNull())
			eventBusesItemObject.eventBusName = dataNodeEventBusesEventBusesItem["EventBusName"].asString();
		if(!dataNodeEventBusesEventBusesItem["Description"].isNull())
			eventBusesItemObject.description = dataNodeEventBusesEventBusesItem["Description"].asString();
		if(!dataNodeEventBusesEventBusesItem["CreateTimestamp"].isNull())
			eventBusesItemObject.createTimestamp = std::stol(dataNodeEventBusesEventBusesItem["CreateTimestamp"].asString());
		data_.eventBuses.push_back(eventBusesItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListEventBusesResult::getMessage()const
{
	return message_;
}

ListEventBusesResult::Data ListEventBusesResult::getData()const
{
	return data_;
}

std::string ListEventBusesResult::getCode()const
{
	return code_;
}

bool ListEventBusesResult::getSuccess()const
{
	return success_;
}


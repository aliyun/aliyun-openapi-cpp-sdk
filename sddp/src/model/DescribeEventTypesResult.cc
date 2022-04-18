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

#include <alibabacloud/sddp/model/DescribeEventTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeEventTypesResult::DescribeEventTypesResult() :
	ServiceResult()
{}

DescribeEventTypesResult::DescribeEventTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventTypesResult::~DescribeEventTypesResult()
{}

void DescribeEventTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventTypeListNode = value["EventTypeList"]["EventType"];
	for (auto valueEventTypeListEventType : allEventTypeListNode)
	{
		EventType eventTypeListObject;
		if(!valueEventTypeListEventType["Code"].isNull())
			eventTypeListObject.code = valueEventTypeListEventType["Code"].asString();
		if(!valueEventTypeListEventType["Description"].isNull())
			eventTypeListObject.description = valueEventTypeListEventType["Description"].asString();
		if(!valueEventTypeListEventType["Name"].isNull())
			eventTypeListObject.name = valueEventTypeListEventType["Name"].asString();
		if(!valueEventTypeListEventType["Id"].isNull())
			eventTypeListObject.id = std::stol(valueEventTypeListEventType["Id"].asString());
		auto allSubTypeListNode = valueEventTypeListEventType["SubTypeList"]["SubType"];
		for (auto valueEventTypeListEventTypeSubTypeListSubType : allSubTypeListNode)
		{
			EventType::SubType subTypeListObject;
			if(!valueEventTypeListEventTypeSubTypeListSubType["Status"].isNull())
				subTypeListObject.status = std::stoi(valueEventTypeListEventTypeSubTypeListSubType["Status"].asString());
			if(!valueEventTypeListEventTypeSubTypeListSubType["Description"].isNull())
				subTypeListObject.description = valueEventTypeListEventTypeSubTypeListSubType["Description"].asString();
			if(!valueEventTypeListEventTypeSubTypeListSubType["ConfigContentType"].isNull())
				subTypeListObject.configContentType = std::stoi(valueEventTypeListEventTypeSubTypeListSubType["ConfigContentType"].asString());
			if(!valueEventTypeListEventTypeSubTypeListSubType["EventHitCount"].isNull())
				subTypeListObject.eventHitCount = std::stoi(valueEventTypeListEventTypeSubTypeListSubType["EventHitCount"].asString());
			if(!valueEventTypeListEventTypeSubTypeListSubType["ConfigValue"].isNull())
				subTypeListObject.configValue = valueEventTypeListEventTypeSubTypeListSubType["ConfigValue"].asString();
			if(!valueEventTypeListEventTypeSubTypeListSubType["ConfigCode"].isNull())
				subTypeListObject.configCode = valueEventTypeListEventTypeSubTypeListSubType["ConfigCode"].asString();
			if(!valueEventTypeListEventTypeSubTypeListSubType["Code"].isNull())
				subTypeListObject.code = valueEventTypeListEventTypeSubTypeListSubType["Code"].asString();
			if(!valueEventTypeListEventTypeSubTypeListSubType["ConfigDescription"].isNull())
				subTypeListObject.configDescription = valueEventTypeListEventTypeSubTypeListSubType["ConfigDescription"].asString();
			if(!valueEventTypeListEventTypeSubTypeListSubType["Name"].isNull())
				subTypeListObject.name = valueEventTypeListEventTypeSubTypeListSubType["Name"].asString();
			if(!valueEventTypeListEventTypeSubTypeListSubType["AdaptedProduct"].isNull())
				subTypeListObject.adaptedProduct = valueEventTypeListEventTypeSubTypeListSubType["AdaptedProduct"].asString();
			if(!valueEventTypeListEventTypeSubTypeListSubType["Id"].isNull())
				subTypeListObject.id = std::stol(valueEventTypeListEventTypeSubTypeListSubType["Id"].asString());
			eventTypeListObject.subTypeList.push_back(subTypeListObject);
		}
		eventTypeList_.push_back(eventTypeListObject);
	}

}

std::vector<DescribeEventTypesResult::EventType> DescribeEventTypesResult::getEventTypeList()const
{
	return eventTypeList_;
}


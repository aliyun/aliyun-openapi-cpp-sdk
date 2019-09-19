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

#include <alibabacloud/yundun-ds/model/DescribeEventTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

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
		if(!valueEventTypeListEventType["Id"].isNull())
			eventTypeListObject.id = std::stol(valueEventTypeListEventType["Id"].asString());
		if(!valueEventTypeListEventType["Name"].isNull())
			eventTypeListObject.name = valueEventTypeListEventType["Name"].asString();
		if(!valueEventTypeListEventType["Code"].isNull())
			eventTypeListObject.code = valueEventTypeListEventType["Code"].asString();
		if(!valueEventTypeListEventType["Description"].isNull())
			eventTypeListObject.description = valueEventTypeListEventType["Description"].asString();
		auto allSubTypeListNode = allEventTypeListNode["SubTypeList"]["SubType"];
		for (auto allEventTypeListNodeSubTypeListSubType : allSubTypeListNode)
		{
			EventType::SubType subTypeListObject;
			if(!allEventTypeListNodeSubTypeListSubType["Id"].isNull())
				subTypeListObject.id = std::stol(allEventTypeListNodeSubTypeListSubType["Id"].asString());
			if(!allEventTypeListNodeSubTypeListSubType["Name"].isNull())
				subTypeListObject.name = allEventTypeListNodeSubTypeListSubType["Name"].asString();
			if(!allEventTypeListNodeSubTypeListSubType["Code"].isNull())
				subTypeListObject.code = allEventTypeListNodeSubTypeListSubType["Code"].asString();
			if(!allEventTypeListNodeSubTypeListSubType["Description"].isNull())
				subTypeListObject.description = allEventTypeListNodeSubTypeListSubType["Description"].asString();
			if(!allEventTypeListNodeSubTypeListSubType["Status"].isNull())
				subTypeListObject.status = std::stoi(allEventTypeListNodeSubTypeListSubType["Status"].asString());
			eventTypeListObject.subTypeList.push_back(subTypeListObject);
		}
		eventTypeList_.push_back(eventTypeListObject);
	}

}

std::vector<DescribeEventTypesResult::EventType> DescribeEventTypesResult::getEventTypeList()const
{
	return eventTypeList_;
}


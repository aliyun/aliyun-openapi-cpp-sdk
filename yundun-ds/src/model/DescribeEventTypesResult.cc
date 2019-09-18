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
	auto allEventTypeList = value["EventTypeList"]["EventType"];
	for (auto value : allEventTypeList)
	{
		EventType eventTypeListObject;
		if(!value["Id"].isNull())
			eventTypeListObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			eventTypeListObject.name = value["Name"].asString();
		if(!value["Code"].isNull())
			eventTypeListObject.code = value["Code"].asString();
		if(!value["Description"].isNull())
			eventTypeListObject.description = value["Description"].asString();
		auto allSubTypeList = value["SubTypeList"]["SubType"];
		for (auto value : allSubTypeList)
		{
			EventType::SubType subTypeListObject;
			if(!value["Id"].isNull())
				subTypeListObject.id = std::stol(value["Id"].asString());
			if(!value["Name"].isNull())
				subTypeListObject.name = value["Name"].asString();
			if(!value["Code"].isNull())
				subTypeListObject.code = value["Code"].asString();
			if(!value["Description"].isNull())
				subTypeListObject.description = value["Description"].asString();
			if(!value["Status"].isNull())
				subTypeListObject.status = std::stoi(value["Status"].asString());
			eventTypeListObject.subTypeList.push_back(subTypeListObject);
		}
		eventTypeList_.push_back(eventTypeListObject);
	}

}

std::vector<DescribeEventTypesResult::EventType> DescribeEventTypesResult::getEventTypeList()const
{
	return eventTypeList_;
}


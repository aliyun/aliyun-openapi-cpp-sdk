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

#include <alibabacloud/eas/model/DescribeServiceEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeServiceEventResult::DescribeServiceEventResult() :
	ServiceResult()
{}

DescribeServiceEventResult::DescribeServiceEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServiceEventResult::~DescribeServiceEventResult()
{}

void DescribeServiceEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventsNode = value["Events"]["eventsItem"];
	for (auto valueEventseventsItem : allEventsNode)
	{
		EventsItem eventsObject;
		if(!valueEventseventsItem["Type"].isNull())
			eventsObject.type = valueEventseventsItem["Type"].asString();
		if(!valueEventseventsItem["Reason"].isNull())
			eventsObject.reason = valueEventseventsItem["Reason"].asString();
		if(!valueEventseventsItem["Message"].isNull())
			eventsObject.message = valueEventseventsItem["Message"].asString();
		if(!valueEventseventsItem["Time"].isNull())
			eventsObject.time = valueEventseventsItem["Time"].asString();
		events_.push_back(eventsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stol(value["TotalPageNum"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());

}

long DescribeServiceEventResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeServiceEventResult::getPageNum()const
{
	return pageNum_;
}

std::vector<DescribeServiceEventResult::EventsItem> DescribeServiceEventResult::getEvents()const
{
	return events_;
}

long DescribeServiceEventResult::getTotalPageNum()const
{
	return totalPageNum_;
}


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

#include <alibabacloud/actiontrail/model/LookupEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

LookupEventsResult::LookupEventsResult() :
	ServiceResult()
{}

LookupEventsResult::LookupEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

LookupEventsResult::~LookupEventsResult()
{}

void LookupEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEvents = value["Events"]["Events"];
	for (const auto &item : allEvents)
		events_.push_back(item.asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string LookupEventsResult::getEndTime()const
{
	return endTime_;
}

std::string LookupEventsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<std::string> LookupEventsResult::getEvents()const
{
	return events_;
}

std::string LookupEventsResult::getStartTime()const
{
	return startTime_;
}


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

#include <alibabacloud/aegis/model/DescribeSuspEventTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSuspEventTypesResult::DescribeSuspEventTypesResult() :
	ServiceResult()
{}

DescribeSuspEventTypesResult::DescribeSuspEventTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspEventTypesResult::~DescribeSuspEventTypesResult()
{}

void DescribeSuspEventTypesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEventTypes = value["EventTypes"]["Data"];
	for (auto value : allEventTypes)
	{
		Data eventTypesObject;
		if(!value["AliseEventType"].isNull())
			eventTypesObject.aliseEventType = value["AliseEventType"].asString();
		if(!value["EventType"].isNull())
			eventTypesObject.eventType = value["EventType"].asString();
		eventTypes_.push_back(eventTypesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSuspEventTypesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeSuspEventTypesResult::Data> DescribeSuspEventTypesResult::getEventTypes()const
{
	return eventTypes_;
}


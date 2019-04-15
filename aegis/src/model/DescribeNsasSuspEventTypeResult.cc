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

#include <alibabacloud/aegis/model/DescribeNsasSuspEventTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeNsasSuspEventTypeResult::DescribeNsasSuspEventTypeResult() :
	ServiceResult()
{}

DescribeNsasSuspEventTypeResult::DescribeNsasSuspEventTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNsasSuspEventTypeResult::~DescribeNsasSuspEventTypeResult()
{}

void DescribeNsasSuspEventTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allEventTypes = value["EventTypes"]["Data"];
	for (auto value : allEventTypes)
	{
		Data eventTypesObject;
		if(!value["Name"].isNull())
			eventTypesObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			eventTypesObject.type = value["Type"].asString();
		if(!value["SuspEventCount"].isNull())
			eventTypesObject.suspEventCount = std::stoi(value["SuspEventCount"].asString());
		eventTypes_.push_back(eventTypesObject);
	}

}

std::vector<DescribeNsasSuspEventTypeResult::Data> DescribeNsasSuspEventTypeResult::getEventTypes()const
{
	return eventTypes_;
}


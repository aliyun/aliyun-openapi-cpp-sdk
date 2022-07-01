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

#include <alibabacloud/ddoscoo/model/DescribeDDosAllEventListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDDosAllEventListResult::DescribeDDosAllEventListResult() :
	ServiceResult()
{}

DescribeDDosAllEventListResult::DescribeDDosAllEventListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDosAllEventListResult::~DescribeDDosAllEventListResult()
{}

void DescribeDDosAllEventListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAttackEventsNode = value["AttackEvents"]["AttackEvent"];
	for (auto valueAttackEventsAttackEvent : allAttackEventsNode)
	{
		AttackEvent attackEventsObject;
		if(!valueAttackEventsAttackEvent["EndTime"].isNull())
			attackEventsObject.endTime = std::stol(valueAttackEventsAttackEvent["EndTime"].asString());
		if(!valueAttackEventsAttackEvent["StartTime"].isNull())
			attackEventsObject.startTime = std::stol(valueAttackEventsAttackEvent["StartTime"].asString());
		if(!valueAttackEventsAttackEvent["EventType"].isNull())
			attackEventsObject.eventType = valueAttackEventsAttackEvent["EventType"].asString();
		if(!valueAttackEventsAttackEvent["Region"].isNull())
			attackEventsObject.region = valueAttackEventsAttackEvent["Region"].asString();
		if(!valueAttackEventsAttackEvent["Mbps"].isNull())
			attackEventsObject.mbps = std::stol(valueAttackEventsAttackEvent["Mbps"].asString());
		if(!valueAttackEventsAttackEvent["Ip"].isNull())
			attackEventsObject.ip = valueAttackEventsAttackEvent["Ip"].asString();
		if(!valueAttackEventsAttackEvent["Area"].isNull())
			attackEventsObject.area = valueAttackEventsAttackEvent["Area"].asString();
		if(!valueAttackEventsAttackEvent["Port"].isNull())
			attackEventsObject.port = valueAttackEventsAttackEvent["Port"].asString();
		if(!valueAttackEventsAttackEvent["Pps"].isNull())
			attackEventsObject.pps = std::stol(valueAttackEventsAttackEvent["Pps"].asString());
		attackEvents_.push_back(attackEventsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeDDosAllEventListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDDosAllEventListResult::AttackEvent> DescribeDDosAllEventListResult::getAttackEvents()const
{
	return attackEvents_;
}


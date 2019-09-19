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

#include <alibabacloud/jarvis-public/model/DescribeAttackEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis_public;
using namespace AlibabaCloud::Jarvis_public::Model;

DescribeAttackEventResult::DescribeAttackEventResult() :
	ServiceResult()
{}

DescribeAttackEventResult::DescribeAttackEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAttackEventResult::~DescribeAttackEventResult()
{}

void DescribeAttackEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventListNode = value["EventList"]["Event"];
	for (auto valueEventListEvent : allEventListNode)
	{
		Event eventListObject;
		if(!valueEventListEvent["VmIp"].isNull())
			eventListObject.vmIp = valueEventListEvent["VmIp"].asString();
		if(!valueEventListEvent["SourceIp"].isNull())
			eventListObject.sourceIp = valueEventListEvent["SourceIp"].asString();
		if(!valueEventListEvent["Url"].isNull())
			eventListObject.url = valueEventListEvent["Url"].asString();
		if(!valueEventListEvent["AttackType"].isNull())
			eventListObject.attackType = valueEventListEvent["AttackType"].asString();
		if(!valueEventListEvent["GmtCreate"].isNull())
			eventListObject.gmtCreate = valueEventListEvent["GmtCreate"].asString();
		if(!valueEventListEvent["GmtCreateStamp"].isNull())
			eventListObject.gmtCreateStamp = std::stoi(valueEventListEvent["GmtCreateStamp"].asString());
		if(!valueEventListEvent["GmtModified"].isNull())
			eventListObject.gmtModified = valueEventListEvent["GmtModified"].asString();
		eventList_.push_back(eventListObject);
	}
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();

}

std::vector<DescribeAttackEventResult::Event> DescribeAttackEventResult::getEventList()const
{
	return eventList_;
}

std::string DescribeAttackEventResult::getModule()const
{
	return module_;
}


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
	auto allEventList = value["EventList"]["Event"];
	for (auto value : allEventList)
	{
		Event eventListObject;
		if(!value["VmIp"].isNull())
			eventListObject.vmIp = value["VmIp"].asString();
		if(!value["SourceIp"].isNull())
			eventListObject.sourceIp = value["SourceIp"].asString();
		if(!value["Url"].isNull())
			eventListObject.url = value["Url"].asString();
		if(!value["AttackType"].isNull())
			eventListObject.attackType = value["AttackType"].asString();
		if(!value["GmtCreate"].isNull())
			eventListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtCreateStamp"].isNull())
			eventListObject.gmtCreateStamp = std::stoi(value["GmtCreateStamp"].asString());
		if(!value["GmtModified"].isNull())
			eventListObject.gmtModified = value["GmtModified"].asString();
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


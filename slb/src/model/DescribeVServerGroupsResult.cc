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

#include <alibabacloud/slb/model/DescribeVServerGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeVServerGroupsResult::DescribeVServerGroupsResult() :
	ServiceResult()
{}

DescribeVServerGroupsResult::DescribeVServerGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVServerGroupsResult::~DescribeVServerGroupsResult()
{}

void DescribeVServerGroupsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allVServerGroups = value["VServerGroups"]["VServerGroup"];
	for (auto value : allVServerGroups)
	{
		VServerGroup vServerGroupsObject;
		if(!value["VServerGroupId"].isNull())
			vServerGroupsObject.vServerGroupId = value["VServerGroupId"].asString();
		if(!value["VServerGroupName"].isNull())
			vServerGroupsObject.vServerGroupName = value["VServerGroupName"].asString();
		auto associatedObjectsNode = value["AssociatedObjects"];
		auto allListeners = value["Listeners"]["Listener"];
		for (auto value : allListeners)
		{
			VServerGroup::AssociatedObjects::Listener listenerObject;
			if(!value["Protocol"].isNull())
				listenerObject.protocol = value["Protocol"].asString();
			if(!value["Port"].isNull())
				listenerObject.port = std::stoi(value["Port"].asString());
			vServerGroupsObject.associatedObjects.listeners.push_back(listenerObject);
		}
		auto allRules = value["Rules"]["Rule"];
		for (auto value : allRules)
		{
			VServerGroup::AssociatedObjects::Rule ruleObject;
			if(!value["RuleId"].isNull())
				ruleObject.ruleId = value["RuleId"].asString();
			if(!value["Domain"].isNull())
				ruleObject.domain = value["Domain"].asString();
			if(!value["Url"].isNull())
				ruleObject.url = value["Url"].asString();
			if(!value["RuleName"].isNull())
				ruleObject.ruleName = value["RuleName"].asString();
			vServerGroupsObject.associatedObjects.rules.push_back(ruleObject);
		}
		vServerGroups_.push_back(vServerGroupsObject);
	}

}

std::vector<DescribeVServerGroupsResult::VServerGroup> DescribeVServerGroupsResult::getVServerGroups()const
{
	return vServerGroups_;
}


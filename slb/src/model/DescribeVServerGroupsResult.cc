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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVServerGroupsNode = value["VServerGroups"]["VServerGroup"];
	for (auto valueVServerGroupsVServerGroup : allVServerGroupsNode)
	{
		VServerGroup vServerGroupsObject;
		if(!valueVServerGroupsVServerGroup["VServerGroupId"].isNull())
			vServerGroupsObject.vServerGroupId = valueVServerGroupsVServerGroup["VServerGroupId"].asString();
		if(!valueVServerGroupsVServerGroup["ServiceManagedMode"].isNull())
			vServerGroupsObject.serviceManagedMode = valueVServerGroupsVServerGroup["ServiceManagedMode"].asString();
		if(!valueVServerGroupsVServerGroup["VServerGroupName"].isNull())
			vServerGroupsObject.vServerGroupName = valueVServerGroupsVServerGroup["VServerGroupName"].asString();
		if(!valueVServerGroupsVServerGroup["ServerCount"].isNull())
			vServerGroupsObject.serverCount = std::stol(valueVServerGroupsVServerGroup["ServerCount"].asString());
		if(!valueVServerGroupsVServerGroup["CreateTime"].isNull())
			vServerGroupsObject.createTime = valueVServerGroupsVServerGroup["CreateTime"].asString();
		auto allTagsNode = valueVServerGroupsVServerGroup["Tags"]["Tag"];
		for (auto valueVServerGroupsVServerGroupTagsTag : allTagsNode)
		{
			VServerGroup::Tag tagsObject;
			if(!valueVServerGroupsVServerGroupTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueVServerGroupsVServerGroupTagsTag["TagKey"].asString();
			if(!valueVServerGroupsVServerGroupTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueVServerGroupsVServerGroupTagsTag["TagValue"].asString();
			vServerGroupsObject.tags.push_back(tagsObject);
		}
		auto associatedObjectsNode = value["AssociatedObjects"];
		auto allListenersNode = associatedObjectsNode["Listeners"]["Listener"];
		for (auto associatedObjectsNodeListenersListener : allListenersNode)
		{
			VServerGroup::AssociatedObjects::Listener listenerObject;
			if(!associatedObjectsNodeListenersListener["Port"].isNull())
				listenerObject.port = std::stoi(associatedObjectsNodeListenersListener["Port"].asString());
			if(!associatedObjectsNodeListenersListener["Protocol"].isNull())
				listenerObject.protocol = associatedObjectsNodeListenersListener["Protocol"].asString();
			vServerGroupsObject.associatedObjects.listeners.push_back(listenerObject);
		}
		auto allRulesNode = associatedObjectsNode["Rules"]["Rule"];
		for (auto associatedObjectsNodeRulesRule : allRulesNode)
		{
			VServerGroup::AssociatedObjects::Rule ruleObject;
			if(!associatedObjectsNodeRulesRule["Url"].isNull())
				ruleObject.url = associatedObjectsNodeRulesRule["Url"].asString();
			if(!associatedObjectsNodeRulesRule["Domain"].isNull())
				ruleObject.domain = associatedObjectsNodeRulesRule["Domain"].asString();
			if(!associatedObjectsNodeRulesRule["RuleName"].isNull())
				ruleObject.ruleName = associatedObjectsNodeRulesRule["RuleName"].asString();
			if(!associatedObjectsNodeRulesRule["RuleId"].isNull())
				ruleObject.ruleId = associatedObjectsNodeRulesRule["RuleId"].asString();
			vServerGroupsObject.associatedObjects.rules.push_back(ruleObject);
		}
		vServerGroups_.push_back(vServerGroupsObject);
	}

}

std::vector<DescribeVServerGroupsResult::VServerGroup> DescribeVServerGroupsResult::getVServerGroups()const
{
	return vServerGroups_;
}


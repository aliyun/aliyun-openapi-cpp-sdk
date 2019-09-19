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

#include <alibabacloud/aegis/model/DescribeGroupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeGroupListResult::DescribeGroupListResult() :
	ServiceResult()
{}

DescribeGroupListResult::DescribeGroupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupListResult::~DescribeGroupListResult()
{}

void DescribeGroupListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleGroupsNode = value["RuleGroups"]["RuleGroupsItem"];
	for (auto valueRuleGroupsRuleGroupsItem : allRuleGroupsNode)
	{
		RuleGroupsItem ruleGroupsObject;
		if(!valueRuleGroupsRuleGroupsItem["GroupName"].isNull())
			ruleGroupsObject.groupName = valueRuleGroupsRuleGroupsItem["GroupName"].asString();
		if(!valueRuleGroupsRuleGroupsItem["RuleNum"].isNull())
			ruleGroupsObject.ruleNum = std::stoi(valueRuleGroupsRuleGroupsItem["RuleNum"].asString());
		if(!valueRuleGroupsRuleGroupsItem["Modified"].isNull())
			ruleGroupsObject.modified = std::stol(valueRuleGroupsRuleGroupsItem["Modified"].asString());
		if(!valueRuleGroupsRuleGroupsItem["Create"].isNull())
			ruleGroupsObject.create = std::stol(valueRuleGroupsRuleGroupsItem["Create"].asString());
		if(!valueRuleGroupsRuleGroupsItem["Description"].isNull())
			ruleGroupsObject.description = valueRuleGroupsRuleGroupsItem["Description"].asString();
		if(!valueRuleGroupsRuleGroupsItem["Id"].isNull())
			ruleGroupsObject.id = std::stoi(valueRuleGroupsRuleGroupsItem["Id"].asString());
		if(!valueRuleGroupsRuleGroupsItem["AliUid"].isNull())
			ruleGroupsObject.aliUid = std::stol(valueRuleGroupsRuleGroupsItem["AliUid"].asString());
		if(!valueRuleGroupsRuleGroupsItem["Status"].isNull())
			ruleGroupsObject.status = std::stoi(valueRuleGroupsRuleGroupsItem["Status"].asString());
		if(!valueRuleGroupsRuleGroupsItem["MachineGroupIds"].isNull())
			ruleGroupsObject.machineGroupIds = valueRuleGroupsRuleGroupsItem["MachineGroupIds"].asString();
		ruleGroups_.push_back(ruleGroupsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeGroupListResult::PageInfo DescribeGroupListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeGroupListResult::RuleGroupsItem> DescribeGroupListResult::getRuleGroups()const
{
	return ruleGroups_;
}

bool DescribeGroupListResult::getSuccess()const
{
	return success_;
}


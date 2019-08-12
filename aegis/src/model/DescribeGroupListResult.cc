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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRuleGroups = value["RuleGroups"]["RuleGroupsItem"];
	for (auto value : allRuleGroups)
	{
		RuleGroupsItem ruleGroupsObject;
		if(!value["GroupName"].isNull())
			ruleGroupsObject.groupName = value["GroupName"].asString();
		if(!value["RuleNum"].isNull())
			ruleGroupsObject.ruleNum = std::stoi(value["RuleNum"].asString());
		if(!value["Modified"].isNull())
			ruleGroupsObject.modified = std::stol(value["Modified"].asString());
		if(!value["Create"].isNull())
			ruleGroupsObject.create = std::stol(value["Create"].asString());
		if(!value["Description"].isNull())
			ruleGroupsObject.description = value["Description"].asString();
		if(!value["Id"].isNull())
			ruleGroupsObject.id = std::stoi(value["Id"].asString());
		if(!value["AliUid"].isNull())
			ruleGroupsObject.aliUid = std::stol(value["AliUid"].asString());
		if(!value["Status"].isNull())
			ruleGroupsObject.status = std::stoi(value["Status"].asString());
		if(!value["MachineGroupIds"].isNull())
			ruleGroupsObject.machineGroupIds = value["MachineGroupIds"].asString();
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


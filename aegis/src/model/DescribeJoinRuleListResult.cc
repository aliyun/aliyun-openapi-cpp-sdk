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

#include <alibabacloud/aegis/model/DescribeJoinRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeJoinRuleListResult::DescribeJoinRuleListResult() :
	ServiceResult()
{}

DescribeJoinRuleListResult::DescribeJoinRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJoinRuleListResult::~DescribeJoinRuleListResult()
{}

void DescribeJoinRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJoinRuleListNode = value["JoinRuleList"]["JoinRuleListArr"];
	for (auto valueJoinRuleListJoinRuleListArr : allJoinRuleListNode)
	{
		JoinRuleListArr joinRuleListObject;
		if(!valueJoinRuleListJoinRuleListArr["TimeWindow"].isNull())
			joinRuleListObject.timeWindow = std::stoi(valueJoinRuleListJoinRuleListArr["TimeWindow"].asString());
		if(!valueJoinRuleListJoinRuleListArr["WarnLevel"].isNull())
			joinRuleListObject.warnLevel = valueJoinRuleListJoinRuleListArr["WarnLevel"].asString();
		if(!valueJoinRuleListJoinRuleListArr["DataSourceId1"].isNull())
			joinRuleListObject.dataSourceId1 = std::stoi(valueJoinRuleListJoinRuleListArr["DataSourceId1"].asString());
		if(!valueJoinRuleListJoinRuleListArr["Description"].isNull())
			joinRuleListObject.description = valueJoinRuleListJoinRuleListArr["Description"].asString();
		if(!valueJoinRuleListJoinRuleListArr["RuleName"].isNull())
			joinRuleListObject.ruleName = valueJoinRuleListJoinRuleListArr["RuleName"].asString();
		if(!valueJoinRuleListJoinRuleListArr["JoinRelation"].isNull())
			joinRuleListObject.joinRelation = valueJoinRuleListJoinRuleListArr["JoinRelation"].asString();
		if(!valueJoinRuleListJoinRuleListArr["DataSourceId2"].isNull())
			joinRuleListObject.dataSourceId2 = std::stoi(valueJoinRuleListJoinRuleListArr["DataSourceId2"].asString());
		if(!valueJoinRuleListJoinRuleListArr["Expression2"].isNull())
			joinRuleListObject.expression2 = valueJoinRuleListJoinRuleListArr["Expression2"].asString();
		if(!valueJoinRuleListJoinRuleListArr["RuleId"].isNull())
			joinRuleListObject.ruleId = std::stoi(valueJoinRuleListJoinRuleListArr["RuleId"].asString());
		if(!valueJoinRuleListJoinRuleListArr["Expression1"].isNull())
			joinRuleListObject.expression1 = valueJoinRuleListJoinRuleListArr["Expression1"].asString();
		if(!valueJoinRuleListJoinRuleListArr["Actions"].isNull())
			joinRuleListObject.actions = valueJoinRuleListJoinRuleListArr["Actions"].asString();
		if(!valueJoinRuleListJoinRuleListArr["StatisticsRules"].isNull())
			joinRuleListObject.statisticsRules = valueJoinRuleListJoinRuleListArr["StatisticsRules"].asString();
		if(!valueJoinRuleListJoinRuleListArr["NeedGroup"].isNull())
			joinRuleListObject.needGroup = valueJoinRuleListJoinRuleListArr["NeedGroup"].asString() == "true";
		if(!valueJoinRuleListJoinRuleListArr["StatusCode"].isNull())
			joinRuleListObject.statusCode = valueJoinRuleListJoinRuleListArr["StatusCode"].asString();
		joinRuleList_.push_back(joinRuleListObject);
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

}

DescribeJoinRuleListResult::PageInfo DescribeJoinRuleListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeJoinRuleListResult::JoinRuleListArr> DescribeJoinRuleListResult::getJoinRuleList()const
{
	return joinRuleList_;
}


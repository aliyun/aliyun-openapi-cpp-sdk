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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allJoinRuleList = value["JoinRuleList"]["JoinRuleListArr"];
	for (auto value : allJoinRuleList)
	{
		JoinRuleListArr joinRuleListObject;
		if(!value["TimeWindow"].isNull())
			joinRuleListObject.timeWindow = std::stoi(value["TimeWindow"].asString());
		if(!value["WarnLevel"].isNull())
			joinRuleListObject.warnLevel = value["WarnLevel"].asString();
		if(!value["DataSourceId1"].isNull())
			joinRuleListObject.dataSourceId1 = std::stoi(value["DataSourceId1"].asString());
		if(!value["Description"].isNull())
			joinRuleListObject.description = value["Description"].asString();
		if(!value["RuleName"].isNull())
			joinRuleListObject.ruleName = value["RuleName"].asString();
		if(!value["JoinRelation"].isNull())
			joinRuleListObject.joinRelation = value["JoinRelation"].asString();
		if(!value["DataSourceId2"].isNull())
			joinRuleListObject.dataSourceId2 = std::stoi(value["DataSourceId2"].asString());
		if(!value["Expression2"].isNull())
			joinRuleListObject.expression2 = value["Expression2"].asString();
		if(!value["RuleId"].isNull())
			joinRuleListObject.ruleId = std::stoi(value["RuleId"].asString());
		if(!value["Expression1"].isNull())
			joinRuleListObject.expression1 = value["Expression1"].asString();
		if(!value["Actions"].isNull())
			joinRuleListObject.actions = value["Actions"].asString();
		if(!value["StatisticsRules"].isNull())
			joinRuleListObject.statisticsRules = value["StatisticsRules"].asString();
		if(!value["NeedGroup"].isNull())
			joinRuleListObject.needGroup = value["NeedGroup"].asString() == "true";
		if(!value["StatusCode"].isNull())
			joinRuleListObject.statusCode = value["StatusCode"].asString();
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


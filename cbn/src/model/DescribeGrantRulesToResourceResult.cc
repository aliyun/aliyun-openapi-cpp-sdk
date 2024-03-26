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

#include <alibabacloud/cbn/model/DescribeGrantRulesToResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeGrantRulesToResourceResult::DescribeGrantRulesToResourceResult() :
	ServiceResult()
{}

DescribeGrantRulesToResourceResult::DescribeGrantRulesToResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGrantRulesToResourceResult::~DescribeGrantRulesToResourceResult()
{}

void DescribeGrantRulesToResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGrantRulesNode = value["GrantRules"]["GrantRule"];
	for (auto valueGrantRulesGrantRule : allGrantRulesNode)
	{
		GrantRule grantRulesObject;
		if(!valueGrantRulesGrantRule["CenOwnerId"].isNull())
			grantRulesObject.cenOwnerId = std::stol(valueGrantRulesGrantRule["CenOwnerId"].asString());
		if(!valueGrantRulesGrantRule["OrderType"].isNull())
			grantRulesObject.orderType = valueGrantRulesGrantRule["OrderType"].asString();
		if(!valueGrantRulesGrantRule["CenId"].isNull())
			grantRulesObject.cenId = valueGrantRulesGrantRule["CenId"].asString();
		if(!valueGrantRulesGrantRule["CreateTime"].isNull())
			grantRulesObject.createTime = valueGrantRulesGrantRule["CreateTime"].asString();
		grantRules_.push_back(grantRulesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeGrantRulesToResourceResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeGrantRulesToResourceResult::getNextToken()const
{
	return nextToken_;
}

int DescribeGrantRulesToResourceResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeGrantRulesToResourceResult::GrantRule> DescribeGrantRulesToResourceResult::getGrantRules()const
{
	return grantRules_;
}


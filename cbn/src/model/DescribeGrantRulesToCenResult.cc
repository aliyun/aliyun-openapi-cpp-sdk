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

#include <alibabacloud/cbn/model/DescribeGrantRulesToCenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeGrantRulesToCenResult::DescribeGrantRulesToCenResult() :
	ServiceResult()
{}

DescribeGrantRulesToCenResult::DescribeGrantRulesToCenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGrantRulesToCenResult::~DescribeGrantRulesToCenResult()
{}

void DescribeGrantRulesToCenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGrantRulesNode = value["GrantRules"]["GrantRule"];
	for (auto valueGrantRulesGrantRule : allGrantRulesNode)
	{
		GrantRule grantRulesObject;
		if(!valueGrantRulesGrantRule["ChildInstanceType"].isNull())
			grantRulesObject.childInstanceType = valueGrantRulesGrantRule["ChildInstanceType"].asString();
		if(!valueGrantRulesGrantRule["ChildInstanceRegionId"].isNull())
			grantRulesObject.childInstanceRegionId = valueGrantRulesGrantRule["ChildInstanceRegionId"].asString();
		if(!valueGrantRulesGrantRule["ChildInstanceOwnerId"].isNull())
			grantRulesObject.childInstanceOwnerId = std::stol(valueGrantRulesGrantRule["ChildInstanceOwnerId"].asString());
		if(!valueGrantRulesGrantRule["ChildInstanceId"].isNull())
			grantRulesObject.childInstanceId = valueGrantRulesGrantRule["ChildInstanceId"].asString();
		if(!valueGrantRulesGrantRule["CenId"].isNull())
			grantRulesObject.cenId = valueGrantRulesGrantRule["CenId"].asString();
		if(!valueGrantRulesGrantRule["OrderType"].isNull())
			grantRulesObject.orderType = valueGrantRulesGrantRule["OrderType"].asString();
		if(!valueGrantRulesGrantRule["CenOwnerId"].isNull())
			grantRulesObject.cenOwnerId = std::stol(valueGrantRulesGrantRule["CenOwnerId"].asString());
		if(!valueGrantRulesGrantRule["CreateTime"].isNull())
			grantRulesObject.createTime = std::stol(valueGrantRulesGrantRule["CreateTime"].asString());
		grantRules_.push_back(grantRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

long DescribeGrantRulesToCenResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeGrantRulesToCenResult::getNextToken()const
{
	return nextToken_;
}

long DescribeGrantRulesToCenResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeGrantRulesToCenResult::GrantRule> DescribeGrantRulesToCenResult::getGrantRules()const
{
	return grantRules_;
}


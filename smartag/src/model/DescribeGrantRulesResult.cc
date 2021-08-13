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

#include <alibabacloud/smartag/model/DescribeGrantRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeGrantRulesResult::DescribeGrantRulesResult() :
	ServiceResult()
{}

DescribeGrantRulesResult::DescribeGrantRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGrantRulesResult::~DescribeGrantRulesResult()
{}

void DescribeGrantRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGrantRulesNode = value["GrantRules"]["GrantRule"];
	for (auto valueGrantRulesGrantRule : allGrantRulesNode)
	{
		GrantRule grantRulesObject;
		if(!valueGrantRulesGrantRule["CenInstanceId"].isNull())
			grantRulesObject.cenInstanceId = valueGrantRulesGrantRule["CenInstanceId"].asString();
		if(!valueGrantRulesGrantRule["CenUid"].isNull())
			grantRulesObject.cenUid = std::stol(valueGrantRulesGrantRule["CenUid"].asString());
		if(!valueGrantRulesGrantRule["GmtCreate"].isNull())
			grantRulesObject.gmtCreate = std::stol(valueGrantRulesGrantRule["GmtCreate"].asString());
		if(!valueGrantRulesGrantRule["GrantRuleId"].isNull())
			grantRulesObject.grantRuleId = valueGrantRulesGrantRule["GrantRuleId"].asString();
		if(!valueGrantRulesGrantRule["GrantTrafficService"].isNull())
			grantRulesObject.grantTrafficService = valueGrantRulesGrantRule["GrantTrafficService"].asString() == "true";
		if(!valueGrantRulesGrantRule["GmtModified"].isNull())
			grantRulesObject.gmtModified = std::stol(valueGrantRulesGrantRule["GmtModified"].asString());
		if(!valueGrantRulesGrantRule["CcnUid"].isNull())
			grantRulesObject.ccnUid = std::stol(valueGrantRulesGrantRule["CcnUid"].asString());
		if(!valueGrantRulesGrantRule["RegionId"].isNull())
			grantRulesObject.regionId = valueGrantRulesGrantRule["RegionId"].asString();
		if(!valueGrantRulesGrantRule["CcnInstanceId"].isNull())
			grantRulesObject.ccnInstanceId = valueGrantRulesGrantRule["CcnInstanceId"].asString();
		grantRules_.push_back(grantRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeGrantRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeGrantRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGrantRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGrantRulesResult::GrantRule> DescribeGrantRulesResult::getGrantRules()const
{
	return grantRules_;
}


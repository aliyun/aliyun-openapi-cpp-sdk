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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allGrantRules = value["GrantRules"]["GrantRule"];
	for (auto value : allGrantRules)
	{
		GrantRule grantRulesObject;
		if(!value["GrantRuleId"].isNull())
			grantRulesObject.grantRuleId = value["GrantRuleId"].asString();
		if(!value["CenUid"].isNull())
			grantRulesObject.cenUid = std::stol(value["CenUid"].asString());
		if(!value["CcnUid"].isNull())
			grantRulesObject.ccnUid = std::stol(value["CcnUid"].asString());
		if(!value["CenInstanceId"].isNull())
			grantRulesObject.cenInstanceId = value["CenInstanceId"].asString();
		if(!value["CcnInstanceId"].isNull())
			grantRulesObject.ccnInstanceId = value["CcnInstanceId"].asString();
		if(!value["GmtCreate"].isNull())
			grantRulesObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			grantRulesObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["RegionId"].isNull())
			grantRulesObject.regionId = value["RegionId"].asString();
		grantRules_.push_back(grantRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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


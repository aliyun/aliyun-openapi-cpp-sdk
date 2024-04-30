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

#include <alibabacloud/dcdn/model/DescribeDcdnWafGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafGroupResult::DescribeDcdnWafGroupResult() :
	ServiceResult()
{}

DescribeDcdnWafGroupResult::DescribeDcdnWafGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafGroupResult::~DescribeDcdnWafGroupResult()
{}

void DescribeDcdnWafGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["RuleItem"];
	for (auto valueRulesRuleItem : allRulesNode)
	{
		RuleItem rulesObject;
		if(!valueRulesRuleItem["GmtModified"].isNull())
			rulesObject.gmtModified = valueRulesRuleItem["GmtModified"].asString();
		if(!valueRulesRuleItem["Id"].isNull())
			rulesObject.id = std::stol(valueRulesRuleItem["Id"].asString());
		if(!valueRulesRuleItem["Name"].isNull())
			rulesObject.name = valueRulesRuleItem["Name"].asString();
		if(!valueRulesRuleItem["Description"].isNull())
			rulesObject.description = valueRulesRuleItem["Description"].asString();
		if(!valueRulesRuleItem["RiskLevel"].isNull())
			rulesObject.riskLevel = std::stoi(valueRulesRuleItem["RiskLevel"].asString());
		if(!valueRulesRuleItem["ProtectionType"].isNull())
			rulesObject.protectionType = std::stoi(valueRulesRuleItem["ProtectionType"].asString());
		if(!valueRulesRuleItem["ApplicationType"].isNull())
			rulesObject.applicationType = std::stoi(valueRulesRuleItem["ApplicationType"].asString());
		if(!valueRulesRuleItem["CveId"].isNull())
			rulesObject.cveId = valueRulesRuleItem["CveId"].asString();
		if(!valueRulesRuleItem["CveUrl"].isNull())
			rulesObject.cveUrl = valueRulesRuleItem["CveUrl"].asString();
		rules_.push_back(rulesObject);
	}
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["TemplateId"].isNull())
		templateId_ = std::stol(value["TemplateId"].asString());
	if(!value["Subscribe"].isNull())
		subscribe_ = value["Subscribe"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeDcdnWafGroupResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDcdnWafGroupResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDcdnWafGroupResult::getPageNumber()const
{
	return pageNumber_;
}

long DescribeDcdnWafGroupResult::getId()const
{
	return id_;
}

std::string DescribeDcdnWafGroupResult::getSubscribe()const
{
	return subscribe_;
}

std::vector<DescribeDcdnWafGroupResult::RuleItem> DescribeDcdnWafGroupResult::getRules()const
{
	return rules_;
}

long DescribeDcdnWafGroupResult::getTemplateId()const
{
	return templateId_;
}

std::string DescribeDcdnWafGroupResult::getName()const
{
	return name_;
}


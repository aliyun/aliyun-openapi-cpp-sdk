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

#include <alibabacloud/smartag/model/DescribePbrRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribePbrRulesResult::DescribePbrRulesResult() :
	ServiceResult()
{}

DescribePbrRulesResult::DescribePbrRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePbrRulesResult::~DescribePbrRulesResult()
{}

void DescribePbrRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPbrRulesNode = value["PbrRules"]["PbrRule"];
	for (auto valuePbrRulesPbrRule : allPbrRulesNode)
	{
		PbrRule pbrRulesObject;
		if(!valuePbrRulesPbrRule["PbrRuleId"].isNull())
			pbrRulesObject.pbrRuleId = valuePbrRulesPbrRule["PbrRuleId"].asString();
		if(!valuePbrRulesPbrRule["SrcCidr"].isNull())
			pbrRulesObject.srcCidr = valuePbrRulesPbrRule["SrcCidr"].asString();
		if(!valuePbrRulesPbrRule["DstCidr"].isNull())
			pbrRulesObject.dstCidr = valuePbrRulesPbrRule["DstCidr"].asString();
		if(!valuePbrRulesPbrRule["SrcPort"].isNull())
			pbrRulesObject.srcPort = valuePbrRulesPbrRule["SrcPort"].asString();
		if(!valuePbrRulesPbrRule["DstPort"].isNull())
			pbrRulesObject.dstPort = valuePbrRulesPbrRule["DstPort"].asString();
		if(!valuePbrRulesPbrRule["Protocol"].isNull())
			pbrRulesObject.protocol = valuePbrRulesPbrRule["Protocol"].asString();
		if(!valuePbrRulesPbrRule["Name"].isNull())
			pbrRulesObject.name = valuePbrRulesPbrRule["Name"].asString();
		if(!valuePbrRulesPbrRule["Description"].isNull())
			pbrRulesObject.description = valuePbrRulesPbrRule["Description"].asString();
		pbrRules_.push_back(pbrRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribePbrRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribePbrRulesResult::PbrRule> DescribePbrRulesResult::getPbrRules()const
{
	return pbrRules_;
}

int DescribePbrRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribePbrRulesResult::getPageNumber()const
{
	return pageNumber_;
}


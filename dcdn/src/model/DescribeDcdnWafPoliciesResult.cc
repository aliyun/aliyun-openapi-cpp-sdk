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

#include <alibabacloud/dcdn/model/DescribeDcdnWafPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafPoliciesResult::DescribeDcdnWafPoliciesResult() :
	ServiceResult()
{}

DescribeDcdnWafPoliciesResult::DescribeDcdnWafPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafPoliciesResult::~DescribeDcdnWafPoliciesResult()
{}

void DescribeDcdnWafPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["PolicyItem"];
	for (auto valuePoliciesPolicyItem : allPoliciesNode)
	{
		PolicyItem policiesObject;
		if(!valuePoliciesPolicyItem["PolicyStatus"].isNull())
			policiesObject.policyStatus = valuePoliciesPolicyItem["PolicyStatus"].asString();
		if(!valuePoliciesPolicyItem["DefenseScene"].isNull())
			policiesObject.defenseScene = valuePoliciesPolicyItem["DefenseScene"].asString();
		if(!valuePoliciesPolicyItem["DomainCount"].isNull())
			policiesObject.domainCount = std::stoi(valuePoliciesPolicyItem["DomainCount"].asString());
		if(!valuePoliciesPolicyItem["PolicyName"].isNull())
			policiesObject.policyName = valuePoliciesPolicyItem["PolicyName"].asString();
		if(!valuePoliciesPolicyItem["PolicyId"].isNull())
			policiesObject.policyId = std::stol(valuePoliciesPolicyItem["PolicyId"].asString());
		if(!valuePoliciesPolicyItem["RuleCount"].isNull())
			policiesObject.ruleCount = std::stol(valuePoliciesPolicyItem["RuleCount"].asString());
		if(!valuePoliciesPolicyItem["GmtModified"].isNull())
			policiesObject.gmtModified = valuePoliciesPolicyItem["GmtModified"].asString();
		if(!valuePoliciesPolicyItem["PolicyType"].isNull())
			policiesObject.policyType = valuePoliciesPolicyItem["PolicyType"].asString();
		policies_.push_back(policiesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDcdnWafPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDcdnWafPoliciesResult::PolicyItem> DescribeDcdnWafPoliciesResult::getPolicies()const
{
	return policies_;
}

int DescribeDcdnWafPoliciesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDcdnWafPoliciesResult::getPageNumber()const
{
	return pageNumber_;
}


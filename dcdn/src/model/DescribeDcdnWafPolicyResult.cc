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

#include <alibabacloud/dcdn/model/DescribeDcdnWafPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafPolicyResult::DescribeDcdnWafPolicyResult() :
	ServiceResult()
{}

DescribeDcdnWafPolicyResult::DescribeDcdnWafPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafPolicyResult::~DescribeDcdnWafPolicyResult()
{}

void DescribeDcdnWafPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto policyNode = value["Policy"];
	if(!policyNode["PolicyStatus"].isNull())
		policy_.policyStatus = policyNode["PolicyStatus"].asString();
	if(!policyNode["DefenseScene"].isNull())
		policy_.defenseScene = policyNode["DefenseScene"].asString();
	if(!policyNode["DomainCount"].isNull())
		policy_.domainCount = std::stoi(policyNode["DomainCount"].asString());
	if(!policyNode["RuleConfigs"].isNull())
		policy_.ruleConfigs = policyNode["RuleConfigs"].asString();
	if(!policyNode["PolicyName"].isNull())
		policy_.policyName = policyNode["PolicyName"].asString();
	if(!policyNode["PolicyId"].isNull())
		policy_.policyId = std::stol(policyNode["PolicyId"].asString());
	if(!policyNode["RuleCount"].isNull())
		policy_.ruleCount = std::stol(policyNode["RuleCount"].asString());
	if(!policyNode["GmtModified"].isNull())
		policy_.gmtModified = policyNode["GmtModified"].asString();
	if(!policyNode["PolicyType"].isNull())
		policy_.policyType = policyNode["PolicyType"].asString();

}

DescribeDcdnWafPolicyResult::Policy DescribeDcdnWafPolicyResult::getPolicy()const
{
	return policy_;
}


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

#include <alibabacloud/waf-openapi/model/DescribeAclRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeAclRulesResult::DescribeAclRulesResult() :
	ServiceResult()
{}

DescribeAclRulesResult::DescribeAclRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAclRulesResult::~DescribeAclRulesResult()
{}

void DescribeAclRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Total"].isNull())
		result_.total = std::stoi(resultNode["Total"].asString());
	auto allAclRulesNode = resultNode["AclRules"]["AclRule"];
	for (auto resultNodeAclRulesAclRule : allAclRulesNode)
	{
		Result::AclRule aclRuleObject;
		if(!resultNodeAclRulesAclRule["ContinueWaf"].isNull())
			aclRuleObject.continueWaf = std::stoi(resultNodeAclRulesAclRule["ContinueWaf"].asString());
		if(!resultNodeAclRulesAclRule["ContinueBlockGeo"].isNull())
			aclRuleObject.continueBlockGeo = std::stoi(resultNodeAclRulesAclRule["ContinueBlockGeo"].asString());
		if(!resultNodeAclRulesAclRule["ContinueSA"].isNull())
			aclRuleObject.continueSA = std::stoi(resultNodeAclRulesAclRule["ContinueSA"].asString());
		if(!resultNodeAclRulesAclRule["ContinueSdk"].isNull())
			aclRuleObject.continueSdk = std::stoi(resultNodeAclRulesAclRule["ContinueSdk"].asString());
		if(!resultNodeAclRulesAclRule["ContinueDataRiskControl"].isNull())
			aclRuleObject.continueDataRiskControl = std::stoi(resultNodeAclRulesAclRule["ContinueDataRiskControl"].asString());
		if(!resultNodeAclRulesAclRule["ContinueCc"].isNull())
			aclRuleObject.continueCc = std::stoi(resultNodeAclRulesAclRule["ContinueCc"].asString());
		if(!resultNodeAclRulesAclRule["IsDefault"].isNull())
			aclRuleObject.isDefault = std::stoi(resultNodeAclRulesAclRule["IsDefault"].asString());
		if(!resultNodeAclRulesAclRule["Name"].isNull())
			aclRuleObject.name = resultNodeAclRulesAclRule["Name"].asString();
		if(!resultNodeAclRulesAclRule["Action"].isNull())
			aclRuleObject.action = std::stoi(resultNodeAclRulesAclRule["Action"].asString());
		if(!resultNodeAclRulesAclRule["Id"].isNull())
			aclRuleObject.id = std::stol(resultNodeAclRulesAclRule["Id"].asString());
		if(!resultNodeAclRulesAclRule["Order"].isNull())
			aclRuleObject.order = std::stoi(resultNodeAclRulesAclRule["Order"].asString());
		auto allConditionsNode = resultNodeAclRulesAclRule["Conditions"]["condition"];
		for (auto resultNodeAclRulesAclRuleConditionscondition : allConditionsNode)
		{
			Result::AclRule::Condition conditionsObject;
			if(!resultNodeAclRulesAclRuleConditionscondition["Contain"].isNull())
				conditionsObject.contain = resultNodeAclRulesAclRuleConditionscondition["Contain"].asString();
			if(!resultNodeAclRulesAclRuleConditionscondition["Value"].isNull())
				conditionsObject.value = resultNodeAclRulesAclRuleConditionscondition["Value"].asString();
			if(!resultNodeAclRulesAclRuleConditionscondition["Key"].isNull())
				conditionsObject.key = resultNodeAclRulesAclRuleConditionscondition["Key"].asString();
			aclRuleObject.conditions.push_back(conditionsObject);
		}
		result_.aclRules.push_back(aclRuleObject);
	}

}

DescribeAclRulesResult::Result DescribeAclRulesResult::getResult()const
{
	return result_;
}


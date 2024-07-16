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

#include <alibabacloud/swas-open/model/CreateFirewallTemplateRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

CreateFirewallTemplateRulesResult::CreateFirewallTemplateRulesResult() :
	ServiceResult()
{}

CreateFirewallTemplateRulesResult::CreateFirewallTemplateRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFirewallTemplateRulesResult::~CreateFirewallTemplateRulesResult()
{}

void CreateFirewallTemplateRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFirewallTemplateRulesNode = value["FirewallTemplateRules"]["FirewallTemplateRule"];
	for (auto valueFirewallTemplateRulesFirewallTemplateRule : allFirewallTemplateRulesNode)
	{
		FirewallTemplateRule firewallTemplateRulesObject;
		if(!valueFirewallTemplateRulesFirewallTemplateRule["FirewallTemplateRuleId"].isNull())
			firewallTemplateRulesObject.firewallTemplateRuleId = valueFirewallTemplateRulesFirewallTemplateRule["FirewallTemplateRuleId"].asString();
		if(!valueFirewallTemplateRulesFirewallTemplateRule["RuleProtocol"].isNull())
			firewallTemplateRulesObject.ruleProtocol = valueFirewallTemplateRulesFirewallTemplateRule["RuleProtocol"].asString();
		if(!valueFirewallTemplateRulesFirewallTemplateRule["Port"].isNull())
			firewallTemplateRulesObject.port = valueFirewallTemplateRulesFirewallTemplateRule["Port"].asString();
		if(!valueFirewallTemplateRulesFirewallTemplateRule["SourceCidrIp"].isNull())
			firewallTemplateRulesObject.sourceCidrIp = valueFirewallTemplateRulesFirewallTemplateRule["SourceCidrIp"].asString();
		if(!valueFirewallTemplateRulesFirewallTemplateRule["Remark"].isNull())
			firewallTemplateRulesObject.remark = valueFirewallTemplateRulesFirewallTemplateRule["Remark"].asString();
		firewallTemplateRules_.push_back(firewallTemplateRulesObject);
	}

}

std::vector<CreateFirewallTemplateRulesResult::FirewallTemplateRule> CreateFirewallTemplateRulesResult::getFirewallTemplateRules()const
{
	return firewallTemplateRules_;
}


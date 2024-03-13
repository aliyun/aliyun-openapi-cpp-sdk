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

#include <alibabacloud/swas-open/model/ListFirewallRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListFirewallRulesResult::ListFirewallRulesResult() :
	ServiceResult()
{}

ListFirewallRulesResult::ListFirewallRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFirewallRulesResult::~ListFirewallRulesResult()
{}

void ListFirewallRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFirewallRulesNode = value["FirewallRules"]["FirewallRule"];
	for (auto valueFirewallRulesFirewallRule : allFirewallRulesNode)
	{
		FirewallRule firewallRulesObject;
		if(!valueFirewallRulesFirewallRule["Remark"].isNull())
			firewallRulesObject.remark = valueFirewallRulesFirewallRule["Remark"].asString();
		if(!valueFirewallRulesFirewallRule["Port"].isNull())
			firewallRulesObject.port = valueFirewallRulesFirewallRule["Port"].asString();
		if(!valueFirewallRulesFirewallRule["RuleId"].isNull())
			firewallRulesObject.ruleId = valueFirewallRulesFirewallRule["RuleId"].asString();
		if(!valueFirewallRulesFirewallRule["RuleProtocol"].isNull())
			firewallRulesObject.ruleProtocol = valueFirewallRulesFirewallRule["RuleProtocol"].asString();
		if(!valueFirewallRulesFirewallRule["Policy"].isNull())
			firewallRulesObject.policy = valueFirewallRulesFirewallRule["Policy"].asString();
		if(!valueFirewallRulesFirewallRule["SourceCidrIp"].isNull())
			firewallRulesObject.sourceCidrIp = valueFirewallRulesFirewallRule["SourceCidrIp"].asString();
		auto allTagsNode = valueFirewallRulesFirewallRule["Tags"]["tag"];
		for (auto valueFirewallRulesFirewallRuleTagstag : allTagsNode)
		{
			FirewallRule::Tag tagsObject;
			if(!valueFirewallRulesFirewallRuleTagstag["Key"].isNull())
				tagsObject.key = valueFirewallRulesFirewallRuleTagstag["Key"].asString();
			if(!valueFirewallRulesFirewallRuleTagstag["Value"].isNull())
				tagsObject.value = valueFirewallRulesFirewallRuleTagstag["Value"].asString();
			firewallRulesObject.tags.push_back(tagsObject);
		}
		firewallRules_.push_back(firewallRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListFirewallRulesResult::getTotalCount()const
{
	return totalCount_;
}

int ListFirewallRulesResult::getPageSize()const
{
	return pageSize_;
}

int ListFirewallRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListFirewallRulesResult::FirewallRule> ListFirewallRulesResult::getFirewallRules()const
{
	return firewallRules_;
}


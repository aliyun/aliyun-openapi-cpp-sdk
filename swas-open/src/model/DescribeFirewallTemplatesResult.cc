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

#include <alibabacloud/swas-open/model/DescribeFirewallTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeFirewallTemplatesResult::DescribeFirewallTemplatesResult() :
	ServiceResult()
{}

DescribeFirewallTemplatesResult::DescribeFirewallTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFirewallTemplatesResult::~DescribeFirewallTemplatesResult()
{}

void DescribeFirewallTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFirewallTemplatesNode = value["FirewallTemplates"]["firewallTemplate"];
	for (auto valueFirewallTemplatesfirewallTemplate : allFirewallTemplatesNode)
	{
		FirewallTemplate firewallTemplatesObject;
		if(!valueFirewallTemplatesfirewallTemplate["FirewallTemplateId"].isNull())
			firewallTemplatesObject.firewallTemplateId = valueFirewallTemplatesfirewallTemplate["FirewallTemplateId"].asString();
		if(!valueFirewallTemplatesfirewallTemplate["CreationTime"].isNull())
			firewallTemplatesObject.creationTime = valueFirewallTemplatesfirewallTemplate["CreationTime"].asString();
		if(!valueFirewallTemplatesfirewallTemplate["Name"].isNull())
			firewallTemplatesObject.name = valueFirewallTemplatesfirewallTemplate["Name"].asString();
		if(!valueFirewallTemplatesfirewallTemplate["Description"].isNull())
			firewallTemplatesObject.description = valueFirewallTemplatesfirewallTemplate["Description"].asString();
		if(!valueFirewallTemplatesfirewallTemplate["CreateTime"].isNull())
			firewallTemplatesObject.createTime = valueFirewallTemplatesfirewallTemplate["CreateTime"].asString();
		auto allFirewallTemplateRulesNode = valueFirewallTemplatesfirewallTemplate["FirewallTemplateRules"]["firewallTemplateRule"];
		for (auto valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule : allFirewallTemplateRulesNode)
		{
			FirewallTemplate::FirewallTemplateRule firewallTemplateRulesObject;
			if(!valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["FirewallTemplateRuleId"].isNull())
				firewallTemplateRulesObject.firewallTemplateRuleId = valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["FirewallTemplateRuleId"].asString();
			if(!valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["RuleProtocol"].isNull())
				firewallTemplateRulesObject.ruleProtocol = valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["RuleProtocol"].asString();
			if(!valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["Port"].isNull())
				firewallTemplateRulesObject.port = valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["Port"].asString();
			if(!valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["SourceCidrIp"].isNull())
				firewallTemplateRulesObject.sourceCidrIp = valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["SourceCidrIp"].asString();
			if(!valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["Remark"].isNull())
				firewallTemplateRulesObject.remark = valueFirewallTemplatesfirewallTemplateFirewallTemplateRulesfirewallTemplateRule["Remark"].asString();
			firewallTemplatesObject.firewallTemplateRules.push_back(firewallTemplateRulesObject);
		}
		firewallTemplates_.push_back(firewallTemplatesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeFirewallTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFirewallTemplatesResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeFirewallTemplatesResult::FirewallTemplate> DescribeFirewallTemplatesResult::getFirewallTemplates()const
{
	return firewallTemplates_;
}

int DescribeFirewallTemplatesResult::getPageNumber()const
{
	return pageNumber_;
}


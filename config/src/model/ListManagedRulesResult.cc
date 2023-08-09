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

#include <alibabacloud/config/model/ListManagedRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListManagedRulesResult::ListManagedRulesResult() :
	ServiceResult()
{}

ListManagedRulesResult::ListManagedRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListManagedRulesResult::~ListManagedRulesResult()
{}

void ListManagedRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto managedRulesNode = value["ManagedRules"];
	if(!managedRulesNode["PageSize"].isNull())
		managedRules_.pageSize = std::stoi(managedRulesNode["PageSize"].asString());
	if(!managedRulesNode["PageNumber"].isNull())
		managedRules_.pageNumber = std::stoi(managedRulesNode["PageNumber"].asString());
	if(!managedRulesNode["TotalCount"].isNull())
		managedRules_.totalCount = std::stol(managedRulesNode["TotalCount"].asString());
	auto allManagedRuleListNode = managedRulesNode["ManagedRuleList"]["ManagedRule"];
	for (auto managedRulesNodeManagedRuleListManagedRule : allManagedRuleListNode)
	{
		ManagedRules::ManagedRule managedRuleObject;
		if(!managedRulesNodeManagedRuleListManagedRule["RiskLevel"].isNull())
			managedRuleObject.riskLevel = std::stoi(managedRulesNodeManagedRuleListManagedRule["RiskLevel"].asString());
		if(!managedRulesNodeManagedRuleListManagedRule["Description"].isNull())
			managedRuleObject.description = managedRulesNodeManagedRuleListManagedRule["Description"].asString();
		if(!managedRulesNodeManagedRuleListManagedRule["UseCases"].isNull())
			managedRuleObject.useCases = managedRulesNodeManagedRuleListManagedRule["UseCases"].asString();
		if(!managedRulesNodeManagedRuleListManagedRule["Identifier"].isNull())
			managedRuleObject.identifier = managedRulesNodeManagedRuleListManagedRule["Identifier"].asString();
		if(!managedRulesNodeManagedRuleListManagedRule["ConfigRuleName"].isNull())
			managedRuleObject.configRuleName = managedRulesNodeManagedRuleListManagedRule["ConfigRuleName"].asString();
		if(!managedRulesNodeManagedRuleListManagedRule["ReferenceCount"].isNull())
			managedRuleObject.referenceCount = std::stoi(managedRulesNodeManagedRuleListManagedRule["ReferenceCount"].asString());
		if(!managedRulesNodeManagedRuleListManagedRule["HelpUrls"].isNull())
			managedRuleObject.helpUrls = managedRulesNodeManagedRuleListManagedRule["HelpUrls"].asString();
		if(!managedRulesNodeManagedRuleListManagedRule["SupportPreviewManagedRule"].isNull())
			managedRuleObject.supportPreviewManagedRule = managedRulesNodeManagedRuleListManagedRule["SupportPreviewManagedRule"].asString() == "true";
		if(!managedRulesNodeManagedRuleListManagedRule["RemediationTemplateIdentifier"].isNull())
			managedRuleObject.remediationTemplateIdentifier = managedRulesNodeManagedRuleListManagedRule["RemediationTemplateIdentifier"].asString();
		if(!managedRulesNodeManagedRuleListManagedRule["RemediationTemplateName"].isNull())
			managedRuleObject.remediationTemplateName = managedRulesNodeManagedRuleListManagedRule["RemediationTemplateName"].asString();
		auto scopeNode = value["Scope"];
			auto allComplianceResourceTypes = scopeNode["ComplianceResourceTypes"]["ComplianceResourceTypes"];
			for (auto value : allComplianceResourceTypes)
				managedRuleObject.scope.complianceResourceTypes.push_back(value.asString());
		auto allLabels = value["Labels"]["Labels"];
		for (auto value : allLabels)
			managedRuleObject.labels.push_back(value.asString());
		managedRules_.managedRuleList.push_back(managedRuleObject);
	}

}

ListManagedRulesResult::ManagedRules ListManagedRulesResult::getManagedRules()const
{
	return managedRules_;
}


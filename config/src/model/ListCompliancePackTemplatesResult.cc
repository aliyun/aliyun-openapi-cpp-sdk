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

#include <alibabacloud/config/model/ListCompliancePackTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListCompliancePackTemplatesResult::ListCompliancePackTemplatesResult() :
	ServiceResult()
{}

ListCompliancePackTemplatesResult::ListCompliancePackTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCompliancePackTemplatesResult::~ListCompliancePackTemplatesResult()
{}

void ListCompliancePackTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto compliancePackTemplatesResultNode = value["CompliancePackTemplatesResult"];
	if(!compliancePackTemplatesResultNode["PageSize"].isNull())
		compliancePackTemplatesResult_.pageSize = std::stoi(compliancePackTemplatesResultNode["PageSize"].asString());
	if(!compliancePackTemplatesResultNode["PageNumber"].isNull())
		compliancePackTemplatesResult_.pageNumber = std::stoi(compliancePackTemplatesResultNode["PageNumber"].asString());
	if(!compliancePackTemplatesResultNode["TotalCount"].isNull())
		compliancePackTemplatesResult_.totalCount = std::stol(compliancePackTemplatesResultNode["TotalCount"].asString());
	auto allCompliancePackTemplatesNode = compliancePackTemplatesResultNode["CompliancePackTemplates"]["CompliancePackTemplate"];
	for (auto compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate : allCompliancePackTemplatesNode)
	{
		CompliancePackTemplatesResult::CompliancePackTemplate compliancePackTemplateObject;
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["RiskLevel"].isNull())
			compliancePackTemplateObject.riskLevel = std::stoi(compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["RiskLevel"].asString());
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["Description"].isNull())
			compliancePackTemplateObject.description = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["Description"].asString();
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["AutomationHelpUrl"].isNull())
			compliancePackTemplateObject.automationHelpUrl = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["AutomationHelpUrl"].asString();
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["CompliancePackTemplateName"].isNull())
			compliancePackTemplateObject.compliancePackTemplateName = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["CompliancePackTemplateName"].asString();
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["CompliancePackTemplateId"].isNull())
			compliancePackTemplateObject.compliancePackTemplateId = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["CompliancePackTemplateId"].asString();
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["Domain"].isNull())
			compliancePackTemplateObject.domain = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["Domain"].asString();
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["Labels"].isNull())
			compliancePackTemplateObject.labels = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["Labels"].asString();
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["DeveloperType"].isNull())
			compliancePackTemplateObject.developerType = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["DeveloperType"].asString();
		if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["LastUpdate"].isNull())
			compliancePackTemplateObject.lastUpdate = std::stoi(compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["LastUpdate"].asString());
		auto allConfigRulesNode = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplate["ConfigRules"]["ConfigRulesItem"];
		for (auto compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem : allConfigRulesNode)
		{
			CompliancePackTemplatesResult::CompliancePackTemplate::ConfigRulesItem configRulesObject;
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["Description"].isNull())
				configRulesObject.description = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["Description"].asString();
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ManagedRuleIdentifier"].isNull())
				configRulesObject.managedRuleIdentifier = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ManagedRuleIdentifier"].asString();
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ManagedRuleName"].isNull())
				configRulesObject.managedRuleName = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ManagedRuleName"].asString();
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["RiskLevel"].isNull())
				configRulesObject.riskLevel = std::stoi(compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["RiskLevel"].asString());
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["DeveloperType"].isNull())
				configRulesObject.developerType = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["DeveloperType"].asString();
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ControlId"].isNull())
				configRulesObject.controlId = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ControlId"].asString();
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ControlDescription"].isNull())
				configRulesObject.controlDescription = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ControlDescription"].asString();
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["DefaultEnable"].isNull())
				configRulesObject.defaultEnable = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["DefaultEnable"].asString() == "true";
			if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ResourceTypesScope"].isNull())
				configRulesObject.resourceTypesScope = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ResourceTypesScope"].asString();
			auto allConfigRuleParametersNode = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItem["ConfigRuleParameters"]["ConfigRuleParametersItem"];
			for (auto compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem : allConfigRuleParametersNode)
			{
				CompliancePackTemplatesResult::CompliancePackTemplate::ConfigRulesItem::ConfigRuleParametersItem configRuleParametersObject;
				if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["Required"].isNull())
					configRuleParametersObject.required = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["Required"].asString() == "true";
				if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["ParameterName"].isNull())
					configRuleParametersObject.parameterName = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["ParameterName"].asString();
				if(!compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["ParameterValue"].isNull())
					configRuleParametersObject.parameterValue = compliancePackTemplatesResultNodeCompliancePackTemplatesCompliancePackTemplateConfigRulesConfigRulesItemConfigRuleParametersConfigRuleParametersItem["ParameterValue"].asString();
				configRulesObject.configRuleParameters.push_back(configRuleParametersObject);
			}
			compliancePackTemplateObject.configRules.push_back(configRulesObject);
		}
		compliancePackTemplatesResult_.compliancePackTemplates.push_back(compliancePackTemplateObject);
	}

}

ListCompliancePackTemplatesResult::CompliancePackTemplatesResult ListCompliancePackTemplatesResult::getCompliancePackTemplatesResult()const
{
	return compliancePackTemplatesResult_;
}


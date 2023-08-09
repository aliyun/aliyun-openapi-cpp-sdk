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

#include <alibabacloud/config/model/GetManagedRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetManagedRuleResult::GetManagedRuleResult() :
	ServiceResult()
{}

GetManagedRuleResult::GetManagedRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetManagedRuleResult::~GetManagedRuleResult()
{}

void GetManagedRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto managedRuleNode = value["ManagedRule"];
	if(!managedRuleNode["RiskLevel"].isNull())
		managedRule_.riskLevel = std::stoi(managedRuleNode["RiskLevel"].asString());
	if(!managedRuleNode["HelpHint"].isNull())
		managedRule_.helpHint = managedRuleNode["HelpHint"].asString();
	if(!managedRuleNode["DefaultName"].isNull())
		managedRule_.defaultName = managedRuleNode["DefaultName"].asString();
	if(!managedRuleNode["OptionalInputParameterDetails"].isNull())
		managedRule_.optionalInputParameterDetails = managedRuleNode["OptionalInputParameterDetails"].asString();
	if(!managedRuleNode["Identifier"].isNull())
		managedRule_.identifier = managedRuleNode["Identifier"].asString();
	if(!managedRuleNode["CompulsoryInputParameterDetails"].isNull())
		managedRule_.compulsoryInputParameterDetails = managedRuleNode["CompulsoryInputParameterDetails"].asString();
	if(!managedRuleNode["RegionId"].isNull())
		managedRule_.regionId = managedRuleNode["RegionId"].asString();
	if(!managedRuleNode["Description"].isNull())
		managedRule_.description = managedRuleNode["Description"].asString();
	if(!managedRuleNode["FunctionName"].isNull())
		managedRule_.functionName = managedRuleNode["FunctionName"].asString();
	if(!managedRuleNode["ConfigRuleName"].isNull())
		managedRule_.configRuleName = managedRuleNode["ConfigRuleName"].asString();
	if(!managedRuleNode["HelpDoc"].isNull())
		managedRule_.helpDoc = managedRuleNode["HelpDoc"].asString();
	if(!managedRuleNode["HelpUrls"].isNull())
		managedRule_.helpUrls = managedRuleNode["HelpUrls"].asString();
	if(!managedRuleNode["ServiceName"].isNull())
		managedRule_.serviceName = managedRuleNode["ServiceName"].asString();
	if(!managedRuleNode["CreateTimestamp"].isNull())
		managedRule_.createTimestamp = std::stol(managedRuleNode["CreateTimestamp"].asString());
	if(!managedRuleNode["UseCases"].isNull())
		managedRule_.useCases = managedRuleNode["UseCases"].asString();
	auto allSourceDetailsNode = managedRuleNode["SourceDetails"]["SourceDetailsItem"];
	for (auto managedRuleNodeSourceDetailsSourceDetailsItem : allSourceDetailsNode)
	{
		ManagedRule::SourceDetailsItem sourceDetailsItemObject;
		if(!managedRuleNodeSourceDetailsSourceDetailsItem["MessageType"].isNull())
			sourceDetailsItemObject.messageType = managedRuleNodeSourceDetailsSourceDetailsItem["MessageType"].asString();
		if(!managedRuleNodeSourceDetailsSourceDetailsItem["EventSource"].isNull())
			sourceDetailsItemObject.eventSource = managedRuleNodeSourceDetailsSourceDetailsItem["EventSource"].asString();
		if(!managedRuleNodeSourceDetailsSourceDetailsItem["MaximumExecutionFrequency"].isNull())
			sourceDetailsItemObject.maximumExecutionFrequency = managedRuleNodeSourceDetailsSourceDetailsItem["MaximumExecutionFrequency"].asString();
		managedRule_.sourceDetails.push_back(sourceDetailsItemObject);
	}
	auto scopeNode = managedRuleNode["Scope"];
		auto allComplianceResourceTypes = scopeNode["ComplianceResourceTypes"]["ComplianceResourceTypes"];
		for (auto value : allComplianceResourceTypes)
			managedRule_.scope.complianceResourceTypes.push_back(value.asString());
		auto allLabels = managedRuleNode["Labels"]["Labels"];
		for (auto value : allLabels)
			managedRule_.labels.push_back(value.asString());
		auto allSourceConditions = managedRuleNode["SourceConditions"]["SourceConditions"];
		for (auto value : allSourceConditions)
			managedRule_.sourceConditions.push_back(value.asString());

}

GetManagedRuleResult::ManagedRule GetManagedRuleResult::getManagedRule()const
{
	return managedRule_;
}


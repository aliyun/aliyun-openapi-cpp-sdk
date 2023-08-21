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

#include <alibabacloud/config/model/GetAggregateConfigRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetAggregateConfigRuleResult::GetAggregateConfigRuleResult() :
	ServiceResult()
{}

GetAggregateConfigRuleResult::GetAggregateConfigRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAggregateConfigRuleResult::~GetAggregateConfigRuleResult()
{}

void GetAggregateConfigRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configRuleNode = value["ConfigRule"];
	if(!configRuleNode["RiskLevel"].isNull())
		configRule_.riskLevel = std::stoi(configRuleNode["RiskLevel"].asString());
	if(!configRuleNode["InputParameters"].isNull())
		configRule_.inputParameters = configRuleNode["InputParameters"].asString();
	if(!configRuleNode["ConfigRuleState"].isNull())
		configRule_.configRuleState = configRuleNode["ConfigRuleState"].asString();
	if(!configRuleNode["MaximumExecutionFrequency"].isNull())
		configRule_.maximumExecutionFrequency = configRuleNode["MaximumExecutionFrequency"].asString();
	if(!configRuleNode["ConfigRuleArn"].isNull())
		configRule_.configRuleArn = configRuleNode["ConfigRuleArn"].asString();
	if(!configRuleNode["Description"].isNull())
		configRule_.description = configRuleNode["Description"].asString();
	if(!configRuleNode["ConfigRuleName"].isNull())
		configRule_.configRuleName = configRuleNode["ConfigRuleName"].asString();
	if(!configRuleNode["ConfigRuleId"].isNull())
		configRule_.configRuleId = configRuleNode["ConfigRuleId"].asString();
	if(!configRuleNode["ModifiedTimestamp"].isNull())
		configRule_.modifiedTimestamp = std::stol(configRuleNode["ModifiedTimestamp"].asString());
	if(!configRuleNode["CreateTimestamp"].isNull())
		configRule_.createTimestamp = std::stol(configRuleNode["CreateTimestamp"].asString());
	if(!configRuleNode["ResourceTypesScope"].isNull())
		configRule_.resourceTypesScope = configRuleNode["ResourceTypesScope"].asString();
	if(!configRuleNode["RegionIdsScope"].isNull())
		configRule_.regionIdsScope = configRuleNode["RegionIdsScope"].asString();
	if(!configRuleNode["ExcludeResourceIdsScope"].isNull())
		configRule_.excludeResourceIdsScope = configRuleNode["ExcludeResourceIdsScope"].asString();
	if(!configRuleNode["ResourceGroupIdsScope"].isNull())
		configRule_.resourceGroupIdsScope = configRuleNode["ResourceGroupIdsScope"].asString();
	if(!configRuleNode["TagKeyScope"].isNull())
		configRule_.tagKeyScope = configRuleNode["TagKeyScope"].asString();
	if(!configRuleNode["TagValueScope"].isNull())
		configRule_.tagValueScope = configRuleNode["TagValueScope"].asString();
	if(!configRuleNode["ConfigRuleTriggerTypes"].isNull())
		configRule_.configRuleTriggerTypes = configRuleNode["ConfigRuleTriggerTypes"].asString();
	if(!configRuleNode["TagKeyLogicScope"].isNull())
		configRule_.tagKeyLogicScope = configRuleNode["TagKeyLogicScope"].asString();
	if(!configRuleNode["FolderIdsScope"].isNull())
		configRule_.folderIdsScope = configRuleNode["FolderIdsScope"].asString();
	if(!configRuleNode["ExcludeFolderIdsScope"].isNull())
		configRule_.excludeFolderIdsScope = configRuleNode["ExcludeFolderIdsScope"].asString();
	if(!configRuleNode["ExcludeAccountIdsScope"].isNull())
		configRule_.excludeAccountIdsScope = configRuleNode["ExcludeAccountIdsScope"].asString();
	if(!configRuleNode["AccountId"].isNull())
		configRule_.accountId = std::stol(configRuleNode["AccountId"].asString());
	if(!configRuleNode["ServiceChannel"].isNull())
		configRule_.serviceChannel = configRuleNode["ServiceChannel"].asString();
	auto sourceNode = configRuleNode["Source"];
	if(!sourceNode["Owner"].isNull())
		configRule_.source.owner = sourceNode["Owner"].asString();
	if(!sourceNode["Identifier"].isNull())
		configRule_.source.identifier = sourceNode["Identifier"].asString();
	if(!sourceNode["Conditions"].isNull())
		configRule_.source.conditions = sourceNode["Conditions"].asString();
	auto allSourceDetailsNode = sourceNode["SourceDetails"]["SourceDetailsItem"];
	for (auto sourceNodeSourceDetailsSourceDetailsItem : allSourceDetailsNode)
	{
		ConfigRule::Source::SourceDetailsItem sourceDetailsItemObject;
		if(!sourceNodeSourceDetailsSourceDetailsItem["MessageType"].isNull())
			sourceDetailsItemObject.messageType = sourceNodeSourceDetailsSourceDetailsItem["MessageType"].asString();
		if(!sourceNodeSourceDetailsSourceDetailsItem["EventSource"].isNull())
			sourceDetailsItemObject.eventSource = sourceNodeSourceDetailsSourceDetailsItem["EventSource"].asString();
		if(!sourceNodeSourceDetailsSourceDetailsItem["MaximumExecutionFrequency"].isNull())
			sourceDetailsItemObject.maximumExecutionFrequency = sourceNodeSourceDetailsSourceDetailsItem["MaximumExecutionFrequency"].asString();
		configRule_.source.sourceDetails.push_back(sourceDetailsItemObject);
	}
		auto allSourceConditions = sourceNode["SourceConditions"]["SourceConditions"];
		for (auto value : allSourceConditions)
			configRule_.source.sourceConditions.push_back(value.asString());
	auto managedRuleNode = configRuleNode["ManagedRule"];
	if(!managedRuleNode["HelpUrl"].isNull())
		configRule_.managedRule.helpUrl = managedRuleNode["HelpUrl"].asString();
	if(!managedRuleNode["Description"].isNull())
		configRule_.managedRule.description = managedRuleNode["Description"].asString();
	if(!managedRuleNode["Identifier"].isNull())
		configRule_.managedRule.identifier = managedRuleNode["Identifier"].asString();
	if(!managedRuleNode["OptionalInputParameterDetails"].isNull())
		configRule_.managedRule.optionalInputParameterDetails = managedRuleNode["OptionalInputParameterDetails"].asString();
	if(!managedRuleNode["ManagedRuleName"].isNull())
		configRule_.managedRule.managedRuleName = managedRuleNode["ManagedRuleName"].asString();
	if(!managedRuleNode["CompulsoryInputParameterDetails"].isNull())
		configRule_.managedRule.compulsoryInputParameterDetails = managedRuleNode["CompulsoryInputParameterDetails"].asString();
	auto allSourceDetails1Node = managedRuleNode["SourceDetails"]["SourceDetailsItem"];
	for (auto managedRuleNodeSourceDetailsSourceDetailsItem : allSourceDetails1Node)
	{
		ConfigRule::ManagedRule::SourceDetailsItem2 sourceDetailsItem2Object;
		if(!managedRuleNodeSourceDetailsSourceDetailsItem["MessageType"].isNull())
			sourceDetailsItem2Object.messageType = managedRuleNodeSourceDetailsSourceDetailsItem["MessageType"].asString();
		if(!managedRuleNodeSourceDetailsSourceDetailsItem["EventSource"].isNull())
			sourceDetailsItem2Object.eventSource = managedRuleNodeSourceDetailsSourceDetailsItem["EventSource"].asString();
		if(!managedRuleNodeSourceDetailsSourceDetailsItem["MaximumExecutionFrequency"].isNull())
			sourceDetailsItem2Object.maximumExecutionFrequency = managedRuleNodeSourceDetailsSourceDetailsItem["MaximumExecutionFrequency"].asString();
		configRule_.managedRule.sourceDetails1.push_back(sourceDetailsItem2Object);
	}
		auto allLabels = managedRuleNode["Labels"]["Labels"];
		for (auto value : allLabels)
			configRule_.managedRule.labels.push_back(value.asString());
	auto createByNode = configRuleNode["CreateBy"];
	if(!createByNode["CompliancePackId"].isNull())
		configRule_.createBy.compliancePackId = createByNode["CompliancePackId"].asString();
	if(!createByNode["AggregatorName"].isNull())
		configRule_.createBy.aggregatorName = createByNode["AggregatorName"].asString();
	if(!createByNode["CompliancePackName"].isNull())
		configRule_.createBy.compliancePackName = createByNode["CompliancePackName"].asString();
	if(!createByNode["CreatorName"].isNull())
		configRule_.createBy.creatorName = createByNode["CreatorName"].asString();
	if(!createByNode["CreatorType"].isNull())
		configRule_.createBy.creatorType = createByNode["CreatorType"].asString();
	if(!createByNode["CreatorId"].isNull())
		configRule_.createBy.creatorId = createByNode["CreatorId"].asString();
	if(!createByNode["AggregatorId"].isNull())
		configRule_.createBy.aggregatorId = createByNode["AggregatorId"].asString();
	auto configRuleEvaluationStatusNode = configRuleNode["ConfigRuleEvaluationStatus"];
	if(!configRuleEvaluationStatusNode["LastErrorCode"].isNull())
		configRule_.configRuleEvaluationStatus.lastErrorCode = configRuleEvaluationStatusNode["LastErrorCode"].asString();
	if(!configRuleEvaluationStatusNode["LastSuccessfulEvaluationTimestamp"].isNull())
		configRule_.configRuleEvaluationStatus.lastSuccessfulEvaluationTimestamp = std::stol(configRuleEvaluationStatusNode["LastSuccessfulEvaluationTimestamp"].asString());
	if(!configRuleEvaluationStatusNode["FirstActivatedTimestamp"].isNull())
		configRule_.configRuleEvaluationStatus.firstActivatedTimestamp = std::stol(configRuleEvaluationStatusNode["FirstActivatedTimestamp"].asString());
	if(!configRuleEvaluationStatusNode["FirstEvaluationStarted"].isNull())
		configRule_.configRuleEvaluationStatus.firstEvaluationStarted = configRuleEvaluationStatusNode["FirstEvaluationStarted"].asString() == "true";
	if(!configRuleEvaluationStatusNode["LastSuccessfulInvocationTimestamp"].isNull())
		configRule_.configRuleEvaluationStatus.lastSuccessfulInvocationTimestamp = std::stol(configRuleEvaluationStatusNode["LastSuccessfulInvocationTimestamp"].asString());
	if(!configRuleEvaluationStatusNode["LastErrorMessage"].isNull())
		configRule_.configRuleEvaluationStatus.lastErrorMessage = configRuleEvaluationStatusNode["LastErrorMessage"].asString();
	if(!configRuleEvaluationStatusNode["LastFailedEvaluationTimestamp"].isNull())
		configRule_.configRuleEvaluationStatus.lastFailedEvaluationTimestamp = std::stol(configRuleEvaluationStatusNode["LastFailedEvaluationTimestamp"].asString());
	if(!configRuleEvaluationStatusNode["LastFailedInvocationTimestamp"].isNull())
		configRule_.configRuleEvaluationStatus.lastFailedInvocationTimestamp = std::stol(configRuleEvaluationStatusNode["LastFailedInvocationTimestamp"].asString());
	auto scopeNode = configRuleNode["Scope"];
		auto allComplianceResourceTypes = scopeNode["ComplianceResourceTypes"]["ComplianceResourceTypes"];
		for (auto value : allComplianceResourceTypes)
			configRule_.scope.complianceResourceTypes.push_back(value.asString());
	auto complianceNode = configRuleNode["Compliance"];
	if(!complianceNode["ComplianceType"].isNull())
		configRule_.compliance.complianceType = complianceNode["ComplianceType"].asString();
	if(!complianceNode["Count"].isNull())
		configRule_.compliance.count = std::stoi(complianceNode["Count"].asString());

}

GetAggregateConfigRuleResult::ConfigRule GetAggregateConfigRuleResult::getConfigRule()const
{
	return configRule_;
}


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

#include <alibabacloud/config/model/ListResourceEvaluationResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListResourceEvaluationResultsResult::ListResourceEvaluationResultsResult() :
	ServiceResult()
{}

ListResourceEvaluationResultsResult::ListResourceEvaluationResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceEvaluationResultsResult::~ListResourceEvaluationResultsResult()
{}

void ListResourceEvaluationResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto evaluationResultsNode = value["EvaluationResults"];
	if(!evaluationResultsNode["NextToken"].isNull())
		evaluationResults_.nextToken = evaluationResultsNode["NextToken"].asString();
	if(!evaluationResultsNode["MaxResults"].isNull())
		evaluationResults_.maxResults = std::stoi(evaluationResultsNode["MaxResults"].asString());
	auto allEvaluationResultListNode = evaluationResultsNode["EvaluationResultList"]["EvaluationResult"];
	for (auto evaluationResultsNodeEvaluationResultListEvaluationResult : allEvaluationResultListNode)
	{
		EvaluationResults::EvaluationResult evaluationResultObject;
		if(!evaluationResultsNodeEvaluationResultListEvaluationResult["RiskLevel"].isNull())
			evaluationResultObject.riskLevel = std::stoi(evaluationResultsNodeEvaluationResultListEvaluationResult["RiskLevel"].asString());
		if(!evaluationResultsNodeEvaluationResultListEvaluationResult["ComplianceType"].isNull())
			evaluationResultObject.complianceType = evaluationResultsNodeEvaluationResultListEvaluationResult["ComplianceType"].asString();
		if(!evaluationResultsNodeEvaluationResultListEvaluationResult["ResultRecordedTimestamp"].isNull())
			evaluationResultObject.resultRecordedTimestamp = std::stol(evaluationResultsNodeEvaluationResultListEvaluationResult["ResultRecordedTimestamp"].asString());
		if(!evaluationResultsNodeEvaluationResultListEvaluationResult["Annotation"].isNull())
			evaluationResultObject.annotation = evaluationResultsNodeEvaluationResultListEvaluationResult["Annotation"].asString();
		if(!evaluationResultsNodeEvaluationResultListEvaluationResult["ConfigRuleInvokedTimestamp"].isNull())
			evaluationResultObject.configRuleInvokedTimestamp = std::stol(evaluationResultsNodeEvaluationResultListEvaluationResult["ConfigRuleInvokedTimestamp"].asString());
		if(!evaluationResultsNodeEvaluationResultListEvaluationResult["InvokingEventMessageType"].isNull())
			evaluationResultObject.invokingEventMessageType = evaluationResultsNodeEvaluationResultListEvaluationResult["InvokingEventMessageType"].asString();
		if(!evaluationResultsNodeEvaluationResultListEvaluationResult["RemediationEnabled"].isNull())
			evaluationResultObject.remediationEnabled = evaluationResultsNodeEvaluationResultListEvaluationResult["RemediationEnabled"].asString() == "true";
		auto evaluationResultIdentifierNode = value["EvaluationResultIdentifier"];
		if(!evaluationResultIdentifierNode["OrderingTimestamp"].isNull())
			evaluationResultObject.evaluationResultIdentifier.orderingTimestamp = std::stol(evaluationResultIdentifierNode["OrderingTimestamp"].asString());
		auto evaluationResultQualifierNode = evaluationResultIdentifierNode["EvaluationResultQualifier"];
		if(!evaluationResultQualifierNode["ConfigRuleArn"].isNull())
			evaluationResultObject.evaluationResultIdentifier.evaluationResultQualifier.configRuleArn = evaluationResultQualifierNode["ConfigRuleArn"].asString();
		if(!evaluationResultQualifierNode["ResourceType"].isNull())
			evaluationResultObject.evaluationResultIdentifier.evaluationResultQualifier.resourceType = evaluationResultQualifierNode["ResourceType"].asString();
		if(!evaluationResultQualifierNode["ConfigRuleName"].isNull())
			evaluationResultObject.evaluationResultIdentifier.evaluationResultQualifier.configRuleName = evaluationResultQualifierNode["ConfigRuleName"].asString();
		if(!evaluationResultQualifierNode["ResourceId"].isNull())
			evaluationResultObject.evaluationResultIdentifier.evaluationResultQualifier.resourceId = evaluationResultQualifierNode["ResourceId"].asString();
		if(!evaluationResultQualifierNode["ConfigRuleId"].isNull())
			evaluationResultObject.evaluationResultIdentifier.evaluationResultQualifier.configRuleId = evaluationResultQualifierNode["ConfigRuleId"].asString();
		if(!evaluationResultQualifierNode["ResourceName"].isNull())
			evaluationResultObject.evaluationResultIdentifier.evaluationResultQualifier.resourceName = evaluationResultQualifierNode["ResourceName"].asString();
		if(!evaluationResultQualifierNode["RegionId"].isNull())
			evaluationResultObject.evaluationResultIdentifier.evaluationResultQualifier.regionId = evaluationResultQualifierNode["RegionId"].asString();
		if(!evaluationResultQualifierNode["IgnoreDate"].isNull())
			evaluationResultObject.evaluationResultIdentifier.evaluationResultQualifier.ignoreDate = evaluationResultQualifierNode["IgnoreDate"].asString();
		evaluationResults_.evaluationResultList.push_back(evaluationResultObject);
	}

}

ListResourceEvaluationResultsResult::EvaluationResults ListResourceEvaluationResultsResult::getEvaluationResults()const
{
	return evaluationResults_;
}


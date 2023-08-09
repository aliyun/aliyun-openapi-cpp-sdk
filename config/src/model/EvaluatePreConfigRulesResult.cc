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

#include <alibabacloud/config/model/EvaluatePreConfigRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

EvaluatePreConfigRulesResult::EvaluatePreConfigRulesResult() :
	ServiceResult()
{}

EvaluatePreConfigRulesResult::EvaluatePreConfigRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EvaluatePreConfigRulesResult::~EvaluatePreConfigRulesResult()
{}

void EvaluatePreConfigRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceEvaluationsNode = value["ResourceEvaluations"]["ResourceEvaluation"];
	for (auto valueResourceEvaluationsResourceEvaluation : allResourceEvaluationsNode)
	{
		ResourceEvaluation resourceEvaluationsObject;
		if(!valueResourceEvaluationsResourceEvaluation["ResourceLogicalId"].isNull())
			resourceEvaluationsObject.resourceLogicalId = valueResourceEvaluationsResourceEvaluation["ResourceLogicalId"].asString();
		if(!valueResourceEvaluationsResourceEvaluation["ResourceType"].isNull())
			resourceEvaluationsObject.resourceType = valueResourceEvaluationsResourceEvaluation["ResourceType"].asString();
		auto allRulesNode = valueResourceEvaluationsResourceEvaluation["Rules"]["Rule"];
		for (auto valueResourceEvaluationsResourceEvaluationRulesRule : allRulesNode)
		{
			ResourceEvaluation::Rule rulesObject;
			if(!valueResourceEvaluationsResourceEvaluationRulesRule["Identifier"].isNull())
				rulesObject.identifier = valueResourceEvaluationsResourceEvaluationRulesRule["Identifier"].asString();
			if(!valueResourceEvaluationsResourceEvaluationRulesRule["ComplianceType"].isNull())
				rulesObject.complianceType = valueResourceEvaluationsResourceEvaluationRulesRule["ComplianceType"].asString();
			if(!valueResourceEvaluationsResourceEvaluationRulesRule["Annotation"].isNull())
				rulesObject.annotation = valueResourceEvaluationsResourceEvaluationRulesRule["Annotation"].asString();
			if(!valueResourceEvaluationsResourceEvaluationRulesRule["HelpUrl"].isNull())
				rulesObject.helpUrl = valueResourceEvaluationsResourceEvaluationRulesRule["HelpUrl"].asString();
			resourceEvaluationsObject.rules.push_back(rulesObject);
		}
		resourceEvaluations_.push_back(resourceEvaluationsObject);
	}

}

std::vector<EvaluatePreConfigRulesResult::ResourceEvaluation> EvaluatePreConfigRulesResult::getResourceEvaluations()const
{
	return resourceEvaluations_;
}


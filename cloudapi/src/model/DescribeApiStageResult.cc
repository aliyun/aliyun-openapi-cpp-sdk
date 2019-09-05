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

#include <alibabacloud/cloudapi/model/DescribeApiStageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiStageResult::DescribeApiStageResult() :
	ServiceResult()
{}

DescribeApiStageResult::DescribeApiStageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiStageResult::~DescribeApiStageResult()
{}

void DescribeApiStageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVariables = value["Variables"]["VariableItem"];
	for (auto value : allVariables)
	{
		VariableItem variablesObject;
		if(!value["VariableName"].isNull())
			variablesObject.variableName = value["VariableName"].asString();
		if(!value["VariableValue"].isNull())
			variablesObject.variableValue = value["VariableValue"].asString();
		if(!value["SupportRoute"].isNull())
			variablesObject.supportRoute = value["SupportRoute"].asString() == "true";
		auto stageRouteModelNode = value["StageRouteModel"];
		if(!stageRouteModelNode["ParameterCatalog"].isNull())
			variablesObject.stageRouteModel.parameterCatalog = stageRouteModelNode["ParameterCatalog"].asString();
		if(!stageRouteModelNode["ServiceParameterName"].isNull())
			variablesObject.stageRouteModel.serviceParameterName = stageRouteModelNode["ServiceParameterName"].asString();
		if(!stageRouteModelNode["Location"].isNull())
			variablesObject.stageRouteModel.location = stageRouteModelNode["Location"].asString();
		if(!stageRouteModelNode["ParameterType"].isNull())
			variablesObject.stageRouteModel.parameterType = stageRouteModelNode["ParameterType"].asString();
		if(!stageRouteModelNode["RouteMatchSymbol"].isNull())
			variablesObject.stageRouteModel.routeMatchSymbol = stageRouteModelNode["RouteMatchSymbol"].asString();
		auto allRouteRules = value["RouteRules"]["RouteRuleItem"];
		for (auto value : allRouteRules)
		{
			VariableItem::StageRouteModel::RouteRuleItem routeRuleItemObject;
			if(!value["MaxValue"].isNull())
				routeRuleItemObject.maxValue = std::stol(value["MaxValue"].asString());
			if(!value["MinValue"].isNull())
				routeRuleItemObject.minValue = std::stol(value["MinValue"].asString());
			if(!value["ConditionValue"].isNull())
				routeRuleItemObject.conditionValue = value["ConditionValue"].asString();
			if(!value["ResultValue"].isNull())
				routeRuleItemObject.resultValue = value["ResultValue"].asString();
			variablesObject.stageRouteModel.routeRules.push_back(routeRuleItemObject);
		}
		variables_.push_back(variablesObject);
	}
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["StageId"].isNull())
		stageId_ = value["StageId"].asString();
	if(!value["StageName"].isNull())
		stageName_ = value["StageName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["ModifiedTime"].isNull())
		modifiedTime_ = value["ModifiedTime"].asString();

}

std::vector<DescribeApiStageResult::VariableItem> DescribeApiStageResult::getVariables()const
{
	return variables_;
}

std::string DescribeApiStageResult::getDescription()const
{
	return description_;
}

std::string DescribeApiStageResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeApiStageResult::getModifiedTime()const
{
	return modifiedTime_;
}

std::string DescribeApiStageResult::getStageName()const
{
	return stageName_;
}

std::string DescribeApiStageResult::getStageId()const
{
	return stageId_;
}

std::string DescribeApiStageResult::getGroupId()const
{
	return groupId_;
}


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

#include <alibabacloud/dataworks-public/model/CreateQualityRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateQualityRuleRequest;

CreateQualityRuleRequest::CreateQualityRuleRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreateQualityRule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateQualityRuleRequest::~CreateQualityRuleRequest()
{}

std::string CreateQualityRuleRequest::getProjectName()const
{
	return projectName_;
}

void CreateQualityRuleRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setBodyParameter("ProjectName", projectName);
}

std::string CreateQualityRuleRequest::getTrend()const
{
	return trend_;
}

void CreateQualityRuleRequest::setTrend(const std::string& trend)
{
	trend_ = trend;
	setBodyParameter("Trend", trend);
}

int CreateQualityRuleRequest::getRuleType()const
{
	return ruleType_;
}

void CreateQualityRuleRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setBodyParameter("RuleType", std::to_string(ruleType));
}

int CreateQualityRuleRequest::getBlockType()const
{
	return blockType_;
}

void CreateQualityRuleRequest::setBlockType(int blockType)
{
	blockType_ = blockType;
	setBodyParameter("BlockType", std::to_string(blockType));
}

std::string CreateQualityRuleRequest::getPropertyType()const
{
	return propertyType_;
}

void CreateQualityRuleRequest::setPropertyType(const std::string& propertyType)
{
	propertyType_ = propertyType;
	setBodyParameter("PropertyType", propertyType);
}

long CreateQualityRuleRequest::getEntityId()const
{
	return entityId_;
}

void CreateQualityRuleRequest::setEntityId(long entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", std::to_string(entityId));
}

std::string CreateQualityRuleRequest::getRuleName()const
{
	return ruleName_;
}

void CreateQualityRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setBodyParameter("RuleName", ruleName);
}

int CreateQualityRuleRequest::getChecker()const
{
	return checker_;
}

void CreateQualityRuleRequest::setChecker(int checker)
{
	checker_ = checker;
	setBodyParameter("Checker", std::to_string(checker));
}

int CreateQualityRuleRequest::getTemplateId()const
{
	return templateId_;
}

void CreateQualityRuleRequest::setTemplateId(int templateId)
{
	templateId_ = templateId;
	setBodyParameter("TemplateId", std::to_string(templateId));
}

std::string CreateQualityRuleRequest::getExpectValue()const
{
	return expectValue_;
}

void CreateQualityRuleRequest::setExpectValue(const std::string& expectValue)
{
	expectValue_ = expectValue;
	setBodyParameter("ExpectValue", expectValue);
}

std::string CreateQualityRuleRequest::get_Operator()const
{
	return _operator_;
}

void CreateQualityRuleRequest::set_Operator(const std::string& _operator)
{
	_operator_ = _operator;
	setBodyParameter("_Operator", _operator);
}

std::string CreateQualityRuleRequest::getWhereCondition()const
{
	return whereCondition_;
}

void CreateQualityRuleRequest::setWhereCondition(const std::string& whereCondition)
{
	whereCondition_ = whereCondition;
	setBodyParameter("WhereCondition", whereCondition);
}

std::string CreateQualityRuleRequest::getCriticalThreshold()const
{
	return criticalThreshold_;
}

void CreateQualityRuleRequest::setCriticalThreshold(const std::string& criticalThreshold)
{
	criticalThreshold_ = criticalThreshold;
	setBodyParameter("CriticalThreshold", criticalThreshold);
}

std::string CreateQualityRuleRequest::getProperty()const
{
	return property_;
}

void CreateQualityRuleRequest::setProperty(const std::string& property)
{
	property_ = property;
	setBodyParameter("Property", property);
}

std::string CreateQualityRuleRequest::getComment()const
{
	return comment_;
}

void CreateQualityRuleRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setBodyParameter("Comment", comment);
}

int CreateQualityRuleRequest::getPredictType()const
{
	return predictType_;
}

void CreateQualityRuleRequest::setPredictType(int predictType)
{
	predictType_ = predictType;
	setBodyParameter("PredictType", std::to_string(predictType));
}

std::string CreateQualityRuleRequest::getWarningThreshold()const
{
	return warningThreshold_;
}

void CreateQualityRuleRequest::setWarningThreshold(const std::string& warningThreshold)
{
	warningThreshold_ = warningThreshold;
	setBodyParameter("WarningThreshold", warningThreshold);
}

std::string CreateQualityRuleRequest::getMethodName()const
{
	return methodName_;
}

void CreateQualityRuleRequest::setMethodName(const std::string& methodName)
{
	methodName_ = methodName;
	setBodyParameter("MethodName", methodName);
}


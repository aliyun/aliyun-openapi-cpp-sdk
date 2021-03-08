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

#include <alibabacloud/dataworks-public/model/UpdateQualityRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateQualityRuleRequest;

UpdateQualityRuleRequest::UpdateQualityRuleRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateQualityRule")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateQualityRuleRequest::~UpdateQualityRuleRequest()
{}

std::string UpdateQualityRuleRequest::getTrend()const
{
	return trend_;
}

void UpdateQualityRuleRequest::setTrend(const std::string& trend)
{
	trend_ = trend;
	setBodyParameter("Trend", trend);
}

int UpdateQualityRuleRequest::getBlockType()const
{
	return blockType_;
}

void UpdateQualityRuleRequest::setBlockType(int blockType)
{
	blockType_ = blockType;
	setBodyParameter("BlockType", std::to_string(blockType));
}

std::string UpdateQualityRuleRequest::getPropertyType()const
{
	return propertyType_;
}

void UpdateQualityRuleRequest::setPropertyType(const std::string& propertyType)
{
	propertyType_ = propertyType;
	setBodyParameter("PropertyType", propertyType);
}

long UpdateQualityRuleRequest::getEntityId()const
{
	return entityId_;
}

void UpdateQualityRuleRequest::setEntityId(long entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", std::to_string(entityId));
}

std::string UpdateQualityRuleRequest::getRuleName()const
{
	return ruleName_;
}

void UpdateQualityRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setBodyParameter("RuleName", ruleName);
}

int UpdateQualityRuleRequest::getChecker()const
{
	return checker_;
}

void UpdateQualityRuleRequest::setChecker(int checker)
{
	checker_ = checker;
	setBodyParameter("Checker", std::to_string(checker));
}

std::string UpdateQualityRuleRequest::get_Operator()const
{
	return _operator_;
}

void UpdateQualityRuleRequest::set_Operator(const std::string& _operator)
{
	_operator_ = _operator;
	setBodyParameter("_Operator", _operator);
}

std::string UpdateQualityRuleRequest::getProperty()const
{
	return property_;
}

void UpdateQualityRuleRequest::setProperty(const std::string& property)
{
	property_ = property;
	setBodyParameter("Property", property);
}

long UpdateQualityRuleRequest::getId()const
{
	return id_;
}

void UpdateQualityRuleRequest::setId(long id)
{
	id_ = id;
	setBodyParameter("Id", std::to_string(id));
}

std::string UpdateQualityRuleRequest::getWarningThreshold()const
{
	return warningThreshold_;
}

void UpdateQualityRuleRequest::setWarningThreshold(const std::string& warningThreshold)
{
	warningThreshold_ = warningThreshold;
	setBodyParameter("WarningThreshold", warningThreshold);
}

std::string UpdateQualityRuleRequest::getMethodName()const
{
	return methodName_;
}

void UpdateQualityRuleRequest::setMethodName(const std::string& methodName)
{
	methodName_ = methodName;
	setBodyParameter("MethodName", methodName);
}

std::string UpdateQualityRuleRequest::getProjectName()const
{
	return projectName_;
}

void UpdateQualityRuleRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setBodyParameter("ProjectName", projectName);
}

int UpdateQualityRuleRequest::getRuleType()const
{
	return ruleType_;
}

void UpdateQualityRuleRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setBodyParameter("RuleType", std::to_string(ruleType));
}

int UpdateQualityRuleRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateQualityRuleRequest::setTemplateId(int templateId)
{
	templateId_ = templateId;
	setBodyParameter("TemplateId", std::to_string(templateId));
}

std::string UpdateQualityRuleRequest::getExpectValue()const
{
	return expectValue_;
}

void UpdateQualityRuleRequest::setExpectValue(const std::string& expectValue)
{
	expectValue_ = expectValue;
	setBodyParameter("ExpectValue", expectValue);
}

std::string UpdateQualityRuleRequest::getWhereCondition()const
{
	return whereCondition_;
}

void UpdateQualityRuleRequest::setWhereCondition(const std::string& whereCondition)
{
	whereCondition_ = whereCondition;
	setBodyParameter("WhereCondition", whereCondition);
}

std::string UpdateQualityRuleRequest::getCriticalThreshold()const
{
	return criticalThreshold_;
}

void UpdateQualityRuleRequest::setCriticalThreshold(const std::string& criticalThreshold)
{
	criticalThreshold_ = criticalThreshold;
	setBodyParameter("CriticalThreshold", criticalThreshold);
}

std::string UpdateQualityRuleRequest::getComment()const
{
	return comment_;
}

void UpdateQualityRuleRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setBodyParameter("Comment", comment);
}

int UpdateQualityRuleRequest::getPredictType()const
{
	return predictType_;
}

void UpdateQualityRuleRequest::setPredictType(int predictType)
{
	predictType_ = predictType;
	setBodyParameter("PredictType", std::to_string(predictType));
}


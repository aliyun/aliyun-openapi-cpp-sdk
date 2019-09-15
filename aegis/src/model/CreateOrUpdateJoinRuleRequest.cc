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

#include <alibabacloud/aegis/model/CreateOrUpdateJoinRuleRequest.h>

using AlibabaCloud::Aegis::Model::CreateOrUpdateJoinRuleRequest;

CreateOrUpdateJoinRuleRequest::CreateOrUpdateJoinRuleRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateOrUpdateJoinRule")
{}

CreateOrUpdateJoinRuleRequest::~CreateOrUpdateJoinRuleRequest()
{}

std::string CreateOrUpdateJoinRuleRequest::getWarnLevel()const
{
	return warnLevel_;
}

void CreateOrUpdateJoinRuleRequest::setWarnLevel(const std::string& warnLevel)
{
	warnLevel_ = warnLevel;
	setCoreParameter("WarnLevel", warnLevel);
}

std::string CreateOrUpdateJoinRuleRequest::getDescription()const
{
	return description_;
}

void CreateOrUpdateJoinRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateOrUpdateJoinRuleRequest::getRuleName()const
{
	return ruleName_;
}

void CreateOrUpdateJoinRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::string CreateOrUpdateJoinRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrUpdateJoinRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateOrUpdateJoinRuleRequest::getStatisticsRules()const
{
	return statisticsRules_;
}

void CreateOrUpdateJoinRuleRequest::setStatisticsRules(const std::string& statisticsRules)
{
	statisticsRules_ = statisticsRules;
	setCoreParameter("StatisticsRules", statisticsRules);
}

std::string CreateOrUpdateJoinRuleRequest::getJoinRelation()const
{
	return joinRelation_;
}

void CreateOrUpdateJoinRuleRequest::setJoinRelation(const std::string& joinRelation)
{
	joinRelation_ = joinRelation;
	setCoreParameter("JoinRelation", joinRelation);
}

long CreateOrUpdateJoinRuleRequest::getDataSourceId2()const
{
	return dataSourceId2_;
}

void CreateOrUpdateJoinRuleRequest::setDataSourceId2(long dataSourceId2)
{
	dataSourceId2_ = dataSourceId2;
	setCoreParameter("DataSourceId2", std::to_string(dataSourceId2));
}

long CreateOrUpdateJoinRuleRequest::getDataSourceId1()const
{
	return dataSourceId1_;
}

void CreateOrUpdateJoinRuleRequest::setDataSourceId1(long dataSourceId1)
{
	dataSourceId1_ = dataSourceId1;
	setCoreParameter("DataSourceId1", std::to_string(dataSourceId1));
}

long CreateOrUpdateJoinRuleRequest::getTimeWindow()const
{
	return timeWindow_;
}

void CreateOrUpdateJoinRuleRequest::setTimeWindow(long timeWindow)
{
	timeWindow_ = timeWindow;
	setCoreParameter("TimeWindow", std::to_string(timeWindow));
}

std::string CreateOrUpdateJoinRuleRequest::getExpression2()const
{
	return expression2_;
}

void CreateOrUpdateJoinRuleRequest::setExpression2(const std::string& expression2)
{
	expression2_ = expression2;
	setCoreParameter("Expression2", expression2);
}

std::string CreateOrUpdateJoinRuleRequest::getExpression1()const
{
	return expression1_;
}

void CreateOrUpdateJoinRuleRequest::setExpression1(const std::string& expression1)
{
	expression1_ = expression1;
	setCoreParameter("Expression1", expression1);
}

long CreateOrUpdateJoinRuleRequest::getRuleId()const
{
	return ruleId_;
}

void CreateOrUpdateJoinRuleRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

std::string CreateOrUpdateJoinRuleRequest::getActions()const
{
	return actions_;
}

void CreateOrUpdateJoinRuleRequest::setActions(const std::string& actions)
{
	actions_ = actions;
	setCoreParameter("Actions", actions);
}


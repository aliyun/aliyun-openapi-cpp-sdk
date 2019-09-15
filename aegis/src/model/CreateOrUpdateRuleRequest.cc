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

#include <alibabacloud/aegis/model/CreateOrUpdateRuleRequest.h>

using AlibabaCloud::Aegis::Model::CreateOrUpdateRuleRequest;

CreateOrUpdateRuleRequest::CreateOrUpdateRuleRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateOrUpdateRule")
{}

CreateOrUpdateRuleRequest::~CreateOrUpdateRuleRequest()
{}

std::string CreateOrUpdateRuleRequest::getWarnLevel()const
{
	return warnLevel_;
}

void CreateOrUpdateRuleRequest::setWarnLevel(const std::string& warnLevel)
{
	warnLevel_ = warnLevel;
	setCoreParameter("WarnLevel", warnLevel);
}

std::string CreateOrUpdateRuleRequest::getDescription()const
{
	return description_;
}

void CreateOrUpdateRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateOrUpdateRuleRequest::getRuleName()const
{
	return ruleName_;
}

void CreateOrUpdateRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::string CreateOrUpdateRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrUpdateRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateOrUpdateRuleRequest::getStatisticsRules()const
{
	return statisticsRules_;
}

void CreateOrUpdateRuleRequest::setStatisticsRules(const std::string& statisticsRules)
{
	statisticsRules_ = statisticsRules;
	setCoreParameter("StatisticsRules", statisticsRules);
}

long CreateOrUpdateRuleRequest::getId()const
{
	return id_;
}

void CreateOrUpdateRuleRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string CreateOrUpdateRuleRequest::getLang()const
{
	return lang_;
}

void CreateOrUpdateRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateOrUpdateRuleRequest::getRuleGroupIds()const
{
	return ruleGroupIds_;
}

void CreateOrUpdateRuleRequest::setRuleGroupIds(const std::string& ruleGroupIds)
{
	ruleGroupIds_ = ruleGroupIds;
	setCoreParameter("RuleGroupIds", ruleGroupIds);
}

std::string CreateOrUpdateRuleRequest::getExpressions()const
{
	return expressions_;
}

void CreateOrUpdateRuleRequest::setExpressions(const std::string& expressions)
{
	expressions_ = expressions;
	setCoreParameter("Expressions", expressions);
}

long CreateOrUpdateRuleRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void CreateOrUpdateRuleRequest::setDataSourceId(long dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", std::to_string(dataSourceId));
}

std::string CreateOrUpdateRuleRequest::getActions()const
{
	return actions_;
}

void CreateOrUpdateRuleRequest::setActions(const std::string& actions)
{
	actions_ = actions;
	setCoreParameter("Actions", actions);
}


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

#include <alibabacloud/trademark/model/InsertTmMonitorRuleRequest.h>

using AlibabaCloud::Trademark::Model::InsertTmMonitorRuleRequest;

InsertTmMonitorRuleRequest::InsertTmMonitorRuleRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "InsertTmMonitorRule")
{}

InsertTmMonitorRuleRequest::~InsertTmMonitorRuleRequest()
{}

std::string InsertTmMonitorRuleRequest::getStartApplyDate()const
{
	return startApplyDate_;
}

void InsertTmMonitorRuleRequest::setStartApplyDate(const std::string& startApplyDate)
{
	startApplyDate_ = startApplyDate;
	setCoreParameter("StartApplyDate", std::to_string(startApplyDate));
}

std::string InsertTmMonitorRuleRequest::getNotifyStatus()const
{
	return notifyStatus_;
}

void InsertTmMonitorRuleRequest::setNotifyStatus(const std::string& notifyStatus)
{
	notifyStatus_ = notifyStatus;
	setCoreParameter("NotifyStatus", std::to_string(notifyStatus));
}

int InsertTmMonitorRuleRequest::getRuleType()const
{
	return ruleType_;
}

void InsertTmMonitorRuleRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setCoreParameter("RuleType", ruleType);
}

std::string InsertTmMonitorRuleRequest::getRuleSource()const
{
	return ruleSource_;
}

void InsertTmMonitorRuleRequest::setRuleSource(const std::string& ruleSource)
{
	ruleSource_ = ruleSource;
	setCoreParameter("RuleSource", std::to_string(ruleSource));
}

std::string InsertTmMonitorRuleRequest::getRuleName()const
{
	return ruleName_;
}

void InsertTmMonitorRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", std::to_string(ruleName));
}

std::string InsertTmMonitorRuleRequest::getEndApplyDate()const
{
	return endApplyDate_;
}

void InsertTmMonitorRuleRequest::setEndApplyDate(const std::string& endApplyDate)
{
	endApplyDate_ = endApplyDate;
	setCoreParameter("EndApplyDate", std::to_string(endApplyDate));
}

std::string InsertTmMonitorRuleRequest::getClassification()const
{
	return classification_;
}

void InsertTmMonitorRuleRequest::setClassification(const std::string& classification)
{
	classification_ = classification;
	setCoreParameter("Classification", std::to_string(classification));
}

std::string InsertTmMonitorRuleRequest::getRuleKeyword()const
{
	return ruleKeyword_;
}

void InsertTmMonitorRuleRequest::setRuleKeyword(const std::string& ruleKeyword)
{
	ruleKeyword_ = ruleKeyword;
	setCoreParameter("RuleKeyword", std::to_string(ruleKeyword));
}


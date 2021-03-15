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

#include <alibabacloud/cms/model/PutCustomEventRuleRequest.h>

using AlibabaCloud::Cms::Model::PutCustomEventRuleRequest;

PutCustomEventRuleRequest::PutCustomEventRuleRequest() :
	RpcServiceRequest("cms", "2019-01-01", "PutCustomEventRule")
{
	setMethod(HttpRequest::Method::Post);
}

PutCustomEventRuleRequest::~PutCustomEventRuleRequest()
{}

std::string PutCustomEventRuleRequest::getWebhook()const
{
	return webhook_;
}

void PutCustomEventRuleRequest::setWebhook(const std::string& webhook)
{
	webhook_ = webhook;
	setParameter("Webhook", webhook);
}

std::string PutCustomEventRuleRequest::getRuleName()const
{
	return ruleName_;
}

void PutCustomEventRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

std::string PutCustomEventRuleRequest::getThreshold()const
{
	return threshold_;
}

void PutCustomEventRuleRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setParameter("Threshold", threshold);
}

std::string PutCustomEventRuleRequest::getEffectiveInterval()const
{
	return effectiveInterval_;
}

void PutCustomEventRuleRequest::setEffectiveInterval(const std::string& effectiveInterval)
{
	effectiveInterval_ = effectiveInterval;
	setParameter("EffectiveInterval", effectiveInterval);
}

std::string PutCustomEventRuleRequest::getEventName()const
{
	return eventName_;
}

void PutCustomEventRuleRequest::setEventName(const std::string& eventName)
{
	eventName_ = eventName;
	setParameter("EventName", eventName);
}

std::string PutCustomEventRuleRequest::getEmailSubject()const
{
	return emailSubject_;
}

void PutCustomEventRuleRequest::setEmailSubject(const std::string& emailSubject)
{
	emailSubject_ = emailSubject;
	setParameter("EmailSubject", emailSubject);
}

std::string PutCustomEventRuleRequest::getPeriod()const
{
	return period_;
}

void PutCustomEventRuleRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string PutCustomEventRuleRequest::getContactGroups()const
{
	return contactGroups_;
}

void PutCustomEventRuleRequest::setContactGroups(const std::string& contactGroups)
{
	contactGroups_ = contactGroups;
	setParameter("ContactGroups", contactGroups);
}

std::string PutCustomEventRuleRequest::getLevel()const
{
	return level_;
}

void PutCustomEventRuleRequest::setLevel(const std::string& level)
{
	level_ = level;
	setParameter("Level", level);
}

std::string PutCustomEventRuleRequest::getGroupId()const
{
	return groupId_;
}

void PutCustomEventRuleRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string PutCustomEventRuleRequest::getRuleId()const
{
	return ruleId_;
}

void PutCustomEventRuleRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}


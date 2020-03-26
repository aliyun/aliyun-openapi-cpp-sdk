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

#include <alibabacloud/cms/model/PutResourceMetricRuleRequest.h>

using AlibabaCloud::Cms::Model::PutResourceMetricRuleRequest;

PutResourceMetricRuleRequest::PutResourceMetricRuleRequest() :
	RpcServiceRequest("cms", "2019-01-01", "PutResourceMetricRule")
{
	setMethod(HttpRequest::Method::Post);
}

PutResourceMetricRuleRequest::~PutResourceMetricRuleRequest()
{}

std::string PutResourceMetricRuleRequest::getWebhook()const
{
	return webhook_;
}

void PutResourceMetricRuleRequest::setWebhook(const std::string& webhook)
{
	webhook_ = webhook;
	setParameter("Webhook", webhook);
}

std::string PutResourceMetricRuleRequest::getEscalationsWarnComparisonOperator()const
{
	return escalationsWarnComparisonOperator_;
}

void PutResourceMetricRuleRequest::setEscalationsWarnComparisonOperator(const std::string& escalationsWarnComparisonOperator)
{
	escalationsWarnComparisonOperator_ = escalationsWarnComparisonOperator;
	setParameter("EscalationsWarnComparisonOperator", escalationsWarnComparisonOperator);
}

std::string PutResourceMetricRuleRequest::getRuleName()const
{
	return ruleName_;
}

void PutResourceMetricRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

std::string PutResourceMetricRuleRequest::getEscalationsInfoStatistics()const
{
	return escalationsInfoStatistics_;
}

void PutResourceMetricRuleRequest::setEscalationsInfoStatistics(const std::string& escalationsInfoStatistics)
{
	escalationsInfoStatistics_ = escalationsInfoStatistics;
	setParameter("EscalationsInfoStatistics", escalationsInfoStatistics);
}

std::string PutResourceMetricRuleRequest::getEffectiveInterval()const
{
	return effectiveInterval_;
}

void PutResourceMetricRuleRequest::setEffectiveInterval(const std::string& effectiveInterval)
{
	effectiveInterval_ = effectiveInterval;
	setParameter("EffectiveInterval", effectiveInterval);
}

std::string PutResourceMetricRuleRequest::getEscalationsInfoComparisonOperator()const
{
	return escalationsInfoComparisonOperator_;
}

void PutResourceMetricRuleRequest::setEscalationsInfoComparisonOperator(const std::string& escalationsInfoComparisonOperator)
{
	escalationsInfoComparisonOperator_ = escalationsInfoComparisonOperator;
	setParameter("EscalationsInfoComparisonOperator", escalationsInfoComparisonOperator);
}

std::string PutResourceMetricRuleRequest::getNoEffectiveInterval()const
{
	return noEffectiveInterval_;
}

void PutResourceMetricRuleRequest::setNoEffectiveInterval(const std::string& noEffectiveInterval)
{
	noEffectiveInterval_ = noEffectiveInterval;
	setParameter("NoEffectiveInterval", noEffectiveInterval);
}

std::string PutResourceMetricRuleRequest::getEmailSubject()const
{
	return emailSubject_;
}

void PutResourceMetricRuleRequest::setEmailSubject(const std::string& emailSubject)
{
	emailSubject_ = emailSubject;
	setParameter("EmailSubject", emailSubject);
}

int PutResourceMetricRuleRequest::getSilenceTime()const
{
	return silenceTime_;
}

void PutResourceMetricRuleRequest::setSilenceTime(int silenceTime)
{
	silenceTime_ = silenceTime;
	setParameter("SilenceTime", std::to_string(silenceTime));
}

std::string PutResourceMetricRuleRequest::getMetricName()const
{
	return metricName_;
}

void PutResourceMetricRuleRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setParameter("MetricName", metricName);
}

int PutResourceMetricRuleRequest::getEscalationsWarnTimes()const
{
	return escalationsWarnTimes_;
}

void PutResourceMetricRuleRequest::setEscalationsWarnTimes(int escalationsWarnTimes)
{
	escalationsWarnTimes_ = escalationsWarnTimes;
	setParameter("EscalationsWarnTimes", std::to_string(escalationsWarnTimes));
}

std::string PutResourceMetricRuleRequest::getPeriod()const
{
	return period_;
}

void PutResourceMetricRuleRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string PutResourceMetricRuleRequest::getEscalationsWarnThreshold()const
{
	return escalationsWarnThreshold_;
}

void PutResourceMetricRuleRequest::setEscalationsWarnThreshold(const std::string& escalationsWarnThreshold)
{
	escalationsWarnThreshold_ = escalationsWarnThreshold;
	setParameter("EscalationsWarnThreshold", escalationsWarnThreshold);
}

std::string PutResourceMetricRuleRequest::getContactGroups()const
{
	return contactGroups_;
}

void PutResourceMetricRuleRequest::setContactGroups(const std::string& contactGroups)
{
	contactGroups_ = contactGroups;
	setParameter("ContactGroups", contactGroups);
}

std::string PutResourceMetricRuleRequest::getEscalationsCriticalStatistics()const
{
	return escalationsCriticalStatistics_;
}

void PutResourceMetricRuleRequest::setEscalationsCriticalStatistics(const std::string& escalationsCriticalStatistics)
{
	escalationsCriticalStatistics_ = escalationsCriticalStatistics;
	setParameter("EscalationsCriticalStatistics", escalationsCriticalStatistics);
}

std::string PutResourceMetricRuleRequest::getResources()const
{
	return resources_;
}

void PutResourceMetricRuleRequest::setResources(const std::string& resources)
{
	resources_ = resources;
	setParameter("Resources", resources);
}

int PutResourceMetricRuleRequest::getEscalationsInfoTimes()const
{
	return escalationsInfoTimes_;
}

void PutResourceMetricRuleRequest::setEscalationsInfoTimes(int escalationsInfoTimes)
{
	escalationsInfoTimes_ = escalationsInfoTimes;
	setParameter("EscalationsInfoTimes", std::to_string(escalationsInfoTimes));
}

int PutResourceMetricRuleRequest::getEscalationsCriticalTimes()const
{
	return escalationsCriticalTimes_;
}

void PutResourceMetricRuleRequest::setEscalationsCriticalTimes(int escalationsCriticalTimes)
{
	escalationsCriticalTimes_ = escalationsCriticalTimes;
	setParameter("EscalationsCriticalTimes", std::to_string(escalationsCriticalTimes));
}

std::string PutResourceMetricRuleRequest::getEscalationsWarnStatistics()const
{
	return escalationsWarnStatistics_;
}

void PutResourceMetricRuleRequest::setEscalationsWarnStatistics(const std::string& escalationsWarnStatistics)
{
	escalationsWarnStatistics_ = escalationsWarnStatistics;
	setParameter("EscalationsWarnStatistics", escalationsWarnStatistics);
}

std::string PutResourceMetricRuleRequest::getEscalationsInfoThreshold()const
{
	return escalationsInfoThreshold_;
}

void PutResourceMetricRuleRequest::setEscalationsInfoThreshold(const std::string& escalationsInfoThreshold)
{
	escalationsInfoThreshold_ = escalationsInfoThreshold;
	setParameter("EscalationsInfoThreshold", escalationsInfoThreshold);
}

std::string PutResourceMetricRuleRequest::get_Namespace()const
{
	return _namespace_;
}

void PutResourceMetricRuleRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string PutResourceMetricRuleRequest::getInterval()const
{
	return interval_;
}

void PutResourceMetricRuleRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string PutResourceMetricRuleRequest::getRuleId()const
{
	return ruleId_;
}

void PutResourceMetricRuleRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

std::string PutResourceMetricRuleRequest::getEscalationsCriticalComparisonOperator()const
{
	return escalationsCriticalComparisonOperator_;
}

void PutResourceMetricRuleRequest::setEscalationsCriticalComparisonOperator(const std::string& escalationsCriticalComparisonOperator)
{
	escalationsCriticalComparisonOperator_ = escalationsCriticalComparisonOperator;
	setParameter("EscalationsCriticalComparisonOperator", escalationsCriticalComparisonOperator);
}

std::string PutResourceMetricRuleRequest::getEscalationsCriticalThreshold()const
{
	return escalationsCriticalThreshold_;
}

void PutResourceMetricRuleRequest::setEscalationsCriticalThreshold(const std::string& escalationsCriticalThreshold)
{
	escalationsCriticalThreshold_ = escalationsCriticalThreshold;
	setParameter("EscalationsCriticalThreshold", escalationsCriticalThreshold);
}


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

#include <alibabacloud/cms/model/PutGroupMetricRuleRequest.h>

using AlibabaCloud::Cms::Model::PutGroupMetricRuleRequest;

PutGroupMetricRuleRequest::PutGroupMetricRuleRequest() :
	RpcServiceRequest("cms", "2019-01-01", "PutGroupMetricRule")
{
	setMethod(HttpRequest::Method::Post);
}

PutGroupMetricRuleRequest::~PutGroupMetricRuleRequest()
{}

std::string PutGroupMetricRuleRequest::getWebhook()const
{
	return webhook_;
}

void PutGroupMetricRuleRequest::setWebhook(const std::string& webhook)
{
	webhook_ = webhook;
	setParameter("Webhook", webhook);
}

std::string PutGroupMetricRuleRequest::getEscalationsWarnComparisonOperator()const
{
	return escalationsWarnComparisonOperator_;
}

void PutGroupMetricRuleRequest::setEscalationsWarnComparisonOperator(const std::string& escalationsWarnComparisonOperator)
{
	escalationsWarnComparisonOperator_ = escalationsWarnComparisonOperator;
	setParameter("EscalationsWarnComparisonOperator", escalationsWarnComparisonOperator);
}

std::string PutGroupMetricRuleRequest::getRuleName()const
{
	return ruleName_;
}

void PutGroupMetricRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

std::string PutGroupMetricRuleRequest::getEscalationsInfoStatistics()const
{
	return escalationsInfoStatistics_;
}

void PutGroupMetricRuleRequest::setEscalationsInfoStatistics(const std::string& escalationsInfoStatistics)
{
	escalationsInfoStatistics_ = escalationsInfoStatistics;
	setParameter("EscalationsInfoStatistics", escalationsInfoStatistics);
}

std::string PutGroupMetricRuleRequest::getEffectiveInterval()const
{
	return effectiveInterval_;
}

void PutGroupMetricRuleRequest::setEffectiveInterval(const std::string& effectiveInterval)
{
	effectiveInterval_ = effectiveInterval;
	setParameter("EffectiveInterval", effectiveInterval);
}

std::string PutGroupMetricRuleRequest::getEscalationsInfoComparisonOperator()const
{
	return escalationsInfoComparisonOperator_;
}

void PutGroupMetricRuleRequest::setEscalationsInfoComparisonOperator(const std::string& escalationsInfoComparisonOperator)
{
	escalationsInfoComparisonOperator_ = escalationsInfoComparisonOperator;
	setParameter("EscalationsInfoComparisonOperator", escalationsInfoComparisonOperator);
}

std::string PutGroupMetricRuleRequest::getNoEffectiveInterval()const
{
	return noEffectiveInterval_;
}

void PutGroupMetricRuleRequest::setNoEffectiveInterval(const std::string& noEffectiveInterval)
{
	noEffectiveInterval_ = noEffectiveInterval;
	setParameter("NoEffectiveInterval", noEffectiveInterval);
}

std::string PutGroupMetricRuleRequest::getEmailSubject()const
{
	return emailSubject_;
}

void PutGroupMetricRuleRequest::setEmailSubject(const std::string& emailSubject)
{
	emailSubject_ = emailSubject;
	setParameter("EmailSubject", emailSubject);
}

int PutGroupMetricRuleRequest::getSilenceTime()const
{
	return silenceTime_;
}

void PutGroupMetricRuleRequest::setSilenceTime(int silenceTime)
{
	silenceTime_ = silenceTime;
	setParameter("SilenceTime", std::to_string(silenceTime));
}

std::string PutGroupMetricRuleRequest::getMetricName()const
{
	return metricName_;
}

void PutGroupMetricRuleRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setParameter("MetricName", metricName);
}

int PutGroupMetricRuleRequest::getEscalationsWarnTimes()const
{
	return escalationsWarnTimes_;
}

void PutGroupMetricRuleRequest::setEscalationsWarnTimes(int escalationsWarnTimes)
{
	escalationsWarnTimes_ = escalationsWarnTimes;
	setParameter("EscalationsWarnTimes", std::to_string(escalationsWarnTimes));
}

std::string PutGroupMetricRuleRequest::getPeriod()const
{
	return period_;
}

void PutGroupMetricRuleRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string PutGroupMetricRuleRequest::getEscalationsWarnThreshold()const
{
	return escalationsWarnThreshold_;
}

void PutGroupMetricRuleRequest::setEscalationsWarnThreshold(const std::string& escalationsWarnThreshold)
{
	escalationsWarnThreshold_ = escalationsWarnThreshold;
	setParameter("EscalationsWarnThreshold", escalationsWarnThreshold);
}

std::string PutGroupMetricRuleRequest::getEscalationsCriticalStatistics()const
{
	return escalationsCriticalStatistics_;
}

void PutGroupMetricRuleRequest::setEscalationsCriticalStatistics(const std::string& escalationsCriticalStatistics)
{
	escalationsCriticalStatistics_ = escalationsCriticalStatistics;
	setParameter("EscalationsCriticalStatistics", escalationsCriticalStatistics);
}

std::string PutGroupMetricRuleRequest::getGroupId()const
{
	return groupId_;
}

void PutGroupMetricRuleRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

int PutGroupMetricRuleRequest::getEscalationsInfoTimes()const
{
	return escalationsInfoTimes_;
}

void PutGroupMetricRuleRequest::setEscalationsInfoTimes(int escalationsInfoTimes)
{
	escalationsInfoTimes_ = escalationsInfoTimes;
	setParameter("EscalationsInfoTimes", std::to_string(escalationsInfoTimes));
}

int PutGroupMetricRuleRequest::getEscalationsCriticalTimes()const
{
	return escalationsCriticalTimes_;
}

void PutGroupMetricRuleRequest::setEscalationsCriticalTimes(int escalationsCriticalTimes)
{
	escalationsCriticalTimes_ = escalationsCriticalTimes;
	setParameter("EscalationsCriticalTimes", std::to_string(escalationsCriticalTimes));
}

std::string PutGroupMetricRuleRequest::getEscalationsWarnStatistics()const
{
	return escalationsWarnStatistics_;
}

void PutGroupMetricRuleRequest::setEscalationsWarnStatistics(const std::string& escalationsWarnStatistics)
{
	escalationsWarnStatistics_ = escalationsWarnStatistics;
	setParameter("EscalationsWarnStatistics", escalationsWarnStatistics);
}

std::string PutGroupMetricRuleRequest::getEscalationsInfoThreshold()const
{
	return escalationsInfoThreshold_;
}

void PutGroupMetricRuleRequest::setEscalationsInfoThreshold(const std::string& escalationsInfoThreshold)
{
	escalationsInfoThreshold_ = escalationsInfoThreshold;
	setParameter("EscalationsInfoThreshold", escalationsInfoThreshold);
}

std::string PutGroupMetricRuleRequest::get_Namespace()const
{
	return _namespace_;
}

void PutGroupMetricRuleRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string PutGroupMetricRuleRequest::getInterval()const
{
	return interval_;
}

void PutGroupMetricRuleRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string PutGroupMetricRuleRequest::getRuleId()const
{
	return ruleId_;
}

void PutGroupMetricRuleRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

std::string PutGroupMetricRuleRequest::getCategory()const
{
	return category_;
}

void PutGroupMetricRuleRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string PutGroupMetricRuleRequest::getEscalationsCriticalComparisonOperator()const
{
	return escalationsCriticalComparisonOperator_;
}

void PutGroupMetricRuleRequest::setEscalationsCriticalComparisonOperator(const std::string& escalationsCriticalComparisonOperator)
{
	escalationsCriticalComparisonOperator_ = escalationsCriticalComparisonOperator;
	setParameter("EscalationsCriticalComparisonOperator", escalationsCriticalComparisonOperator);
}

std::string PutGroupMetricRuleRequest::getEscalationsCriticalThreshold()const
{
	return escalationsCriticalThreshold_;
}

void PutGroupMetricRuleRequest::setEscalationsCriticalThreshold(const std::string& escalationsCriticalThreshold)
{
	escalationsCriticalThreshold_ = escalationsCriticalThreshold;
	setParameter("EscalationsCriticalThreshold", escalationsCriticalThreshold);
}

std::string PutGroupMetricRuleRequest::getDimensions()const
{
	return dimensions_;
}

void PutGroupMetricRuleRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}


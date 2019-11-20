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

#include <alibabacloud/cms/model/PutMetricAlarmRequest.h>

using AlibabaCloud::Cms::Model::PutMetricAlarmRequest;

PutMetricAlarmRequest::PutMetricAlarmRequest() :
	RpcServiceRequest("cms", "2018-03-08", "PutMetricAlarm")
{
	setMethod(HttpRequest::Method::Put);
}

PutMetricAlarmRequest::~PutMetricAlarmRequest()
{}

std::string PutMetricAlarmRequest::getWebhook()const
{
	return webhook_;
}

void PutMetricAlarmRequest::setWebhook(const std::string& webhook)
{
	webhook_ = webhook;
	setCoreParameter("Webhook", webhook);
}

std::string PutMetricAlarmRequest::getSubject()const
{
	return subject_;
}

void PutMetricAlarmRequest::setSubject(const std::string& subject)
{
	subject_ = subject;
	setCoreParameter("Subject", subject);
}

std::string PutMetricAlarmRequest::getAlertName()const
{
	return alertName_;
}

void PutMetricAlarmRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setCoreParameter("AlertName", alertName);
}

std::string PutMetricAlarmRequest::getDescription()const
{
	return description_;
}

void PutMetricAlarmRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string PutMetricAlarmRequest::getThreshold()const
{
	return threshold_;
}

void PutMetricAlarmRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", threshold);
}

std::string PutMetricAlarmRequest::getEffectiveInterval()const
{
	return effectiveInterval_;
}

void PutMetricAlarmRequest::setEffectiveInterval(const std::string& effectiveInterval)
{
	effectiveInterval_ = effectiveInterval;
	setCoreParameter("EffectiveInterval", effectiveInterval);
}

std::string PutMetricAlarmRequest::getNoEffectiveInterval()const
{
	return noEffectiveInterval_;
}

void PutMetricAlarmRequest::setNoEffectiveInterval(const std::string& noEffectiveInterval)
{
	noEffectiveInterval_ = noEffectiveInterval;
	setCoreParameter("NoEffectiveInterval", noEffectiveInterval);
}

int PutMetricAlarmRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void PutMetricAlarmRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setCoreParameter("EvaluationCount", std::to_string(evaluationCount));
}

int PutMetricAlarmRequest::getSilenceTime()const
{
	return silenceTime_;
}

void PutMetricAlarmRequest::setSilenceTime(int silenceTime)
{
	silenceTime_ = silenceTime;
	setCoreParameter("SilenceTime", std::to_string(silenceTime));
}

std::string PutMetricAlarmRequest::getMetricName()const
{
	return metricName_;
}

void PutMetricAlarmRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

std::string PutMetricAlarmRequest::getDeepDive()const
{
	return deepDive_;
}

void PutMetricAlarmRequest::setDeepDive(const std::string& deepDive)
{
	deepDive_ = deepDive;
	setCoreParameter("DeepDive", deepDive);
}

std::string PutMetricAlarmRequest::getPeriod()const
{
	return period_;
}

void PutMetricAlarmRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string PutMetricAlarmRequest::getContactGroups()const
{
	return contactGroups_;
}

void PutMetricAlarmRequest::setContactGroups(const std::string& contactGroups)
{
	contactGroups_ = contactGroups;
	setCoreParameter("ContactGroups", contactGroups);
}

int PutMetricAlarmRequest::getLevel()const
{
	return level_;
}

void PutMetricAlarmRequest::setLevel(int level)
{
	level_ = level;
	setCoreParameter("Level", std::to_string(level));
}

std::string PutMetricAlarmRequest::getGroupId()const
{
	return groupId_;
}

void PutMetricAlarmRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string PutMetricAlarmRequest::getResources()const
{
	return resources_;
}

void PutMetricAlarmRequest::setResources(const std::string& resources)
{
	resources_ = resources;
	setCoreParameter("Resources", resources);
}

std::string PutMetricAlarmRequest::getGroupName()const
{
	return groupName_;
}

void PutMetricAlarmRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string PutMetricAlarmRequest::getFilter()const
{
	return filter_;
}

void PutMetricAlarmRequest::setFilter(const std::string& filter)
{
	filter_ = filter;
	setCoreParameter("Filter", filter);
}

std::string PutMetricAlarmRequest::getDisplayName()const
{
	return displayName_;
}

void PutMetricAlarmRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setCoreParameter("DisplayName", displayName);
}

std::string PutMetricAlarmRequest::get_Namespace()const
{
	return _namespace_;
}

void PutMetricAlarmRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", _namespace);
}

std::string PutMetricAlarmRequest::getInterval()const
{
	return interval_;
}

void PutMetricAlarmRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string PutMetricAlarmRequest::getComparisonOperator()const
{
	return comparisonOperator_;
}

void PutMetricAlarmRequest::setComparisonOperator(const std::string& comparisonOperator)
{
	comparisonOperator_ = comparisonOperator;
	setCoreParameter("ComparisonOperator", comparisonOperator);
}

std::string PutMetricAlarmRequest::getDimensions()const
{
	return dimensions_;
}

void PutMetricAlarmRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setCoreParameter("Dimensions", dimensions);
}

std::string PutMetricAlarmRequest::getStatistics()const
{
	return statistics_;
}

void PutMetricAlarmRequest::setStatistics(const std::string& statistics)
{
	statistics_ = statistics;
	setCoreParameter("Statistics", statistics);
}


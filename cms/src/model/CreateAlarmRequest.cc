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

#include <alibabacloud/cms/model/CreateAlarmRequest.h>

using AlibabaCloud::Cms::Model::CreateAlarmRequest;

CreateAlarmRequest::CreateAlarmRequest() :
	RpcServiceRequest("cms", "2018-03-08", "CreateAlarm")
{}

CreateAlarmRequest::~CreateAlarmRequest()
{}

int CreateAlarmRequest::getPeriod()const
{
	return period_;
}

void CreateAlarmRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateAlarmRequest::getWebhook()const
{
	return webhook_;
}

void CreateAlarmRequest::setWebhook(const std::string& webhook)
{
	webhook_ = webhook;
	setParameter("Webhook", webhook);
}

bool CreateAlarmRequest::getDryRun()const
{
	return dryRun_;
}

void CreateAlarmRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string CreateAlarmRequest::getContactGroups()const
{
	return contactGroups_;
}

void CreateAlarmRequest::setContactGroups(const std::string& contactGroups)
{
	contactGroups_ = contactGroups;
	setParameter("ContactGroups", contactGroups);
}

int CreateAlarmRequest::getEndTime()const
{
	return endTime_;
}

void CreateAlarmRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string CreateAlarmRequest::getThreshold()const
{
	return threshold_;
}

void CreateAlarmRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setParameter("Threshold", threshold);
}

int CreateAlarmRequest::getStartTime()const
{
	return startTime_;
}

void CreateAlarmRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string CreateAlarmRequest::getName()const
{
	return name_;
}

void CreateAlarmRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateAlarmRequest::get_Namespace()const
{
	return _namespace_;
}

void CreateAlarmRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

int CreateAlarmRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void CreateAlarmRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setParameter("EvaluationCount", std::to_string(evaluationCount));
}

int CreateAlarmRequest::getSilenceTime()const
{
	return silenceTime_;
}

void CreateAlarmRequest::setSilenceTime(int silenceTime)
{
	silenceTime_ = silenceTime;
	setParameter("SilenceTime", std::to_string(silenceTime));
}

std::string CreateAlarmRequest::getMetricName()const
{
	return metricName_;
}

void CreateAlarmRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setParameter("MetricName", metricName);
}

int CreateAlarmRequest::getNotifyType()const
{
	return notifyType_;
}

void CreateAlarmRequest::setNotifyType(int notifyType)
{
	notifyType_ = notifyType;
	setParameter("NotifyType", std::to_string(notifyType));
}

std::string CreateAlarmRequest::getComparisonOperator()const
{
	return comparisonOperator_;
}

void CreateAlarmRequest::setComparisonOperator(const std::string& comparisonOperator)
{
	comparisonOperator_ = comparisonOperator;
	setParameter("ComparisonOperator", comparisonOperator);
}

std::string CreateAlarmRequest::getDimensions()const
{
	return dimensions_;
}

void CreateAlarmRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}

std::string CreateAlarmRequest::getStatistics()const
{
	return statistics_;
}

void CreateAlarmRequest::setStatistics(const std::string& statistics)
{
	statistics_ = statistics;
	setParameter("Statistics", statistics);
}


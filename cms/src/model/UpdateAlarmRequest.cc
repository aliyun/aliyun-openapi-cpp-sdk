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

#include <alibabacloud/cms/model/UpdateAlarmRequest.h>

using AlibabaCloud::Cms::Model::UpdateAlarmRequest;

UpdateAlarmRequest::UpdateAlarmRequest() :
	RpcServiceRequest("cms", "2018-03-08", "UpdateAlarm")
{}

UpdateAlarmRequest::~UpdateAlarmRequest()
{}

int UpdateAlarmRequest::getPeriod()const
{
	return period_;
}

void UpdateAlarmRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string UpdateAlarmRequest::getWebhook()const
{
	return webhook_;
}

void UpdateAlarmRequest::setWebhook(const std::string& webhook)
{
	webhook_ = webhook;
	setCoreParameter("Webhook", webhook);
}

bool UpdateAlarmRequest::getDryRun()const
{
	return dryRun_;
}

void UpdateAlarmRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

std::string UpdateAlarmRequest::getContactGroups()const
{
	return contactGroups_;
}

void UpdateAlarmRequest::setContactGroups(const std::string& contactGroups)
{
	contactGroups_ = contactGroups;
	setCoreParameter("ContactGroups", contactGroups);
}

int UpdateAlarmRequest::getEndTime()const
{
	return endTime_;
}

void UpdateAlarmRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string UpdateAlarmRequest::getThreshold()const
{
	return threshold_;
}

void UpdateAlarmRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", threshold);
}

int UpdateAlarmRequest::getStartTime()const
{
	return startTime_;
}

void UpdateAlarmRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string UpdateAlarmRequest::getName()const
{
	return name_;
}

void UpdateAlarmRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int UpdateAlarmRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void UpdateAlarmRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setCoreParameter("EvaluationCount", std::to_string(evaluationCount));
}

int UpdateAlarmRequest::getSilenceTime()const
{
	return silenceTime_;
}

void UpdateAlarmRequest::setSilenceTime(int silenceTime)
{
	silenceTime_ = silenceTime;
	setCoreParameter("SilenceTime", std::to_string(silenceTime));
}

std::string UpdateAlarmRequest::getId()const
{
	return id_;
}

void UpdateAlarmRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

int UpdateAlarmRequest::getNotifyType()const
{
	return notifyType_;
}

void UpdateAlarmRequest::setNotifyType(int notifyType)
{
	notifyType_ = notifyType;
	setCoreParameter("NotifyType", std::to_string(notifyType));
}

std::string UpdateAlarmRequest::getComparisonOperator()const
{
	return comparisonOperator_;
}

void UpdateAlarmRequest::setComparisonOperator(const std::string& comparisonOperator)
{
	comparisonOperator_ = comparisonOperator;
	setCoreParameter("ComparisonOperator", comparisonOperator);
}

std::string UpdateAlarmRequest::getStatistics()const
{
	return statistics_;
}

void UpdateAlarmRequest::setStatistics(const std::string& statistics)
{
	statistics_ = statistics;
	setCoreParameter("Statistics", statistics);
}


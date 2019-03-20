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

#include <alibabacloud/cms/model/QueryMonitorDataRequest.h>

using AlibabaCloud::Cms::Model::QueryMonitorDataRequest;

QueryMonitorDataRequest::QueryMonitorDataRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryMonitorData")
{}

QueryMonitorDataRequest::~QueryMonitorDataRequest()
{}

std::string QueryMonitorDataRequest::getCursor()const
{
	return cursor_;
}

void QueryMonitorDataRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setParameter("Cursor", cursor);
}

std::string QueryMonitorDataRequest::getPeriod()const
{
	return period_;
}

void QueryMonitorDataRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

int QueryMonitorDataRequest::getLength()const
{
	return length_;
}

void QueryMonitorDataRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string QueryMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string QueryMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string QueryMonitorDataRequest::getType()const
{
	return type_;
}

void QueryMonitorDataRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string QueryMonitorDataRequest::getMetricName()const
{
	return metricName_;
}

void QueryMonitorDataRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setParameter("MetricName", metricName);
}

std::string QueryMonitorDataRequest::getTaskId()const
{
	return taskId_;
}

void QueryMonitorDataRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}


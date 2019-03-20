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

#include <alibabacloud/cms/model/QueryTaskMonitorDataRequest.h>

using AlibabaCloud::Cms::Model::QueryTaskMonitorDataRequest;

QueryTaskMonitorDataRequest::QueryTaskMonitorDataRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryTaskMonitorData")
{}

QueryTaskMonitorDataRequest::~QueryTaskMonitorDataRequest()
{}

std::string QueryTaskMonitorDataRequest::getCursor()const
{
	return cursor_;
}

void QueryTaskMonitorDataRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setParameter("Cursor", cursor);
}

std::string QueryTaskMonitorDataRequest::getPeriod()const
{
	return period_;
}

void QueryTaskMonitorDataRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

int QueryTaskMonitorDataRequest::getLength()const
{
	return length_;
}

void QueryTaskMonitorDataRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string QueryTaskMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryTaskMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string QueryTaskMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryTaskMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string QueryTaskMonitorDataRequest::getType()const
{
	return type_;
}

void QueryTaskMonitorDataRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string QueryTaskMonitorDataRequest::getMetricName()const
{
	return metricName_;
}

void QueryTaskMonitorDataRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setParameter("MetricName", metricName);
}

std::string QueryTaskMonitorDataRequest::getTaskId()const
{
	return taskId_;
}

void QueryTaskMonitorDataRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}


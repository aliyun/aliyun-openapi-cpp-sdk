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

#include <alibabacloud/cms/model/DescribeSiteMonitorDataRequest.h>

using AlibabaCloud::Cms::Model::DescribeSiteMonitorDataRequest;

DescribeSiteMonitorDataRequest::DescribeSiteMonitorDataRequest() :
	RpcServiceRequest("cms", "2019-01-01", "DescribeSiteMonitorData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSiteMonitorDataRequest::~DescribeSiteMonitorDataRequest()
{}

std::string DescribeSiteMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeSiteMonitorDataRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

int DescribeSiteMonitorDataRequest::getLength()const
{
	return length_;
}

void DescribeSiteMonitorDataRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

std::string DescribeSiteMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSiteMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeSiteMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSiteMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeSiteMonitorDataRequest::getType()const
{
	return type_;
}

void DescribeSiteMonitorDataRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeSiteMonitorDataRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeSiteMonitorDataRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setCoreParameter("NextToken", nextToken);
}

std::string DescribeSiteMonitorDataRequest::getMetricName()const
{
	return metricName_;
}

void DescribeSiteMonitorDataRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

std::string DescribeSiteMonitorDataRequest::getTaskId()const
{
	return taskId_;
}

void DescribeSiteMonitorDataRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}


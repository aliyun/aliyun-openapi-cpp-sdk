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

#include <alibabacloud/airec/model/DescribeUserMetricsRequest.h>

using AlibabaCloud::Airec::Model::DescribeUserMetricsRequest;

DescribeUserMetricsRequest::DescribeUserMetricsRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/metrics");
	setMethod(HttpRequest::Method::Get);
}

DescribeUserMetricsRequest::~DescribeUserMetricsRequest()
{}

std::string DescribeUserMetricsRequest::getMetricType()const
{
	return metricType_;
}

void DescribeUserMetricsRequest::setMetricType(const std::string& metricType)
{
	metricType_ = metricType;
	setParameter("MetricType", metricType);
}

std::string DescribeUserMetricsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeUserMetricsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long DescribeUserMetricsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeUserMetricsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long DescribeUserMetricsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeUserMetricsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}


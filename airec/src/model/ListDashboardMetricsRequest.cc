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

#include <alibabacloud/airec/model/ListDashboardMetricsRequest.h>

using AlibabaCloud::Airec::Model::ListDashboardMetricsRequest;

ListDashboardMetricsRequest::ListDashboardMetricsRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/dashboard/metrics");
	setMethod(HttpRequest::Method::Get);
}

ListDashboardMetricsRequest::~ListDashboardMetricsRequest()
{}

std::string ListDashboardMetricsRequest::getMetricType()const
{
	return metricType_;
}

void ListDashboardMetricsRequest::setMetricType(const std::string& metricType)
{
	metricType_ = metricType;
	setParameter("MetricType", metricType);
}

std::string ListDashboardMetricsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListDashboardMetricsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long ListDashboardMetricsRequest::getEndTime()const
{
	return endTime_;
}

void ListDashboardMetricsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long ListDashboardMetricsRequest::getStartTime()const
{
	return startTime_;
}

void ListDashboardMetricsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}


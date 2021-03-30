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

#include <alibabacloud/airec/model/ListDashboardDetailsFlowsRequest.h>

using AlibabaCloud::Airec::Model::ListDashboardDetailsFlowsRequest;

ListDashboardDetailsFlowsRequest::ListDashboardDetailsFlowsRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/dashboard/details/flows");
	setMethod(HttpRequest::Method::Get);
}

ListDashboardDetailsFlowsRequest::~ListDashboardDetailsFlowsRequest()
{}

std::string ListDashboardDetailsFlowsRequest::getMetricType()const
{
	return metricType_;
}

void ListDashboardDetailsFlowsRequest::setMetricType(const std::string& metricType)
{
	metricType_ = metricType;
	setParameter("MetricType", metricType);
}

std::string ListDashboardDetailsFlowsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListDashboardDetailsFlowsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListDashboardDetailsFlowsRequest::getExperimentIds()const
{
	return experimentIds_;
}

void ListDashboardDetailsFlowsRequest::setExperimentIds(const std::string& experimentIds)
{
	experimentIds_ = experimentIds;
	setParameter("ExperimentIds", experimentIds);
}

std::string ListDashboardDetailsFlowsRequest::getTraceIds()const
{
	return traceIds_;
}

void ListDashboardDetailsFlowsRequest::setTraceIds(const std::string& traceIds)
{
	traceIds_ = traceIds;
	setParameter("TraceIds", traceIds);
}

long ListDashboardDetailsFlowsRequest::getEndTime()const
{
	return endTime_;
}

void ListDashboardDetailsFlowsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long ListDashboardDetailsFlowsRequest::getStartTime()const
{
	return startTime_;
}

void ListDashboardDetailsFlowsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string ListDashboardDetailsFlowsRequest::getSceneIds()const
{
	return sceneIds_;
}

void ListDashboardDetailsFlowsRequest::setSceneIds(const std::string& sceneIds)
{
	sceneIds_ = sceneIds;
	setParameter("SceneIds", sceneIds);
}


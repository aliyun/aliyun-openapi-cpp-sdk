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

#include <alibabacloud/foas/model/GetInstanceMetricRequest.h>

using AlibabaCloud::Foas::Model::GetInstanceMetricRequest;

GetInstanceMetricRequest::GetInstanceMetricRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs/[jobName]/metric");
	setMethod(HttpRequest::Method::Post);
}

GetInstanceMetricRequest::~GetInstanceMetricRequest()
{}

std::string GetInstanceMetricRequest::getProjectName()const
{
	return projectName_;
}

void GetInstanceMetricRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

long GetInstanceMetricRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceMetricRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string GetInstanceMetricRequest::getRegionId()const
{
	return regionId_;
}

void GetInstanceMetricRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetInstanceMetricRequest::getMetricJson()const
{
	return metricJson_;
}

void GetInstanceMetricRequest::setMetricJson(const std::string& metricJson)
{
	metricJson_ = metricJson;
	setCoreParameter("MetricJson", metricJson);
}

std::string GetInstanceMetricRequest::getJobName()const
{
	return jobName_;
}

void GetInstanceMetricRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setCoreParameter("JobName", jobName);
}


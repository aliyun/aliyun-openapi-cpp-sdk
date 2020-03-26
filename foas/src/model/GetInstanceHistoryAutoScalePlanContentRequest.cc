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

#include <alibabacloud/foas/model/GetInstanceHistoryAutoScalePlanContentRequest.h>

using AlibabaCloud::Foas::Model::GetInstanceHistoryAutoScalePlanContentRequest;

GetInstanceHistoryAutoScalePlanContentRequest::GetInstanceHistoryAutoScalePlanContentRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs/[jobName]/instance/[instanceId]/autoscale/plancontent");
	setMethod(HttpRequest::Method::Get);
}

GetInstanceHistoryAutoScalePlanContentRequest::~GetInstanceHistoryAutoScalePlanContentRequest()
{}

std::string GetInstanceHistoryAutoScalePlanContentRequest::getProjectName()const
{
	return projectName_;
}

void GetInstanceHistoryAutoScalePlanContentRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

long GetInstanceHistoryAutoScalePlanContentRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceHistoryAutoScalePlanContentRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", std::to_string(instanceId));
}

std::string GetInstanceHistoryAutoScalePlanContentRequest::getRegionId()const
{
	return regionId_;
}

void GetInstanceHistoryAutoScalePlanContentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string GetInstanceHistoryAutoScalePlanContentRequest::getPlanName()const
{
	return planName_;
}

void GetInstanceHistoryAutoScalePlanContentRequest::setPlanName(const std::string& planName)
{
	planName_ = planName;
	setParameter("PlanName", planName);
}

std::string GetInstanceHistoryAutoScalePlanContentRequest::getJobName()const
{
	return jobName_;
}

void GetInstanceHistoryAutoScalePlanContentRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}


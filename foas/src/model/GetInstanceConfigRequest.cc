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

#include <alibabacloud/foas/model/GetInstanceConfigRequest.h>

using AlibabaCloud::Foas::Model::GetInstanceConfigRequest;

GetInstanceConfigRequest::GetInstanceConfigRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs/[jobName]/instances/[instanceId]/config");
	setMethod(HttpRequest::Method::Get);
}

GetInstanceConfigRequest::~GetInstanceConfigRequest()
{}

std::string GetInstanceConfigRequest::getProjectName()const
{
	return projectName_;
}

void GetInstanceConfigRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

long GetInstanceConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceConfigRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", std::to_string(instanceId));
}

std::string GetInstanceConfigRequest::getRegionId()const
{
	return regionId_;
}

void GetInstanceConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string GetInstanceConfigRequest::getJobName()const
{
	return jobName_;
}

void GetInstanceConfigRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}


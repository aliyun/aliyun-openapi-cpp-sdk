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

#include <alibabacloud/foas/model/GetJobLatestAutoScalePlanRequest.h>

using AlibabaCloud::Foas::Model::GetJobLatestAutoScalePlanRequest;

GetJobLatestAutoScalePlanRequest::GetJobLatestAutoScalePlanRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs/[jobName]/autoscale/latestplanjson");
	setMethod(HttpRequest::Method::Get);
}

GetJobLatestAutoScalePlanRequest::~GetJobLatestAutoScalePlanRequest()
{}

std::string GetJobLatestAutoScalePlanRequest::getProjectName()const
{
	return projectName_;
}

void GetJobLatestAutoScalePlanRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string GetJobLatestAutoScalePlanRequest::getRegionId()const
{
	return regionId_;
}

void GetJobLatestAutoScalePlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string GetJobLatestAutoScalePlanRequest::getJobName()const
{
	return jobName_;
}

void GetJobLatestAutoScalePlanRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}


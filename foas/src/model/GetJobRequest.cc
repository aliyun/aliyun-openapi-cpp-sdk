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

#include <alibabacloud/foas/model/GetJobRequest.h>

using AlibabaCloud::Foas::Model::GetJobRequest;

GetJobRequest::GetJobRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{}

GetJobRequest::~GetJobRequest()
{}

std::string GetJobRequest::getProjectName()const
{
	return projectName_;
}

void GetJobRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string GetJobRequest::getRegionId()const
{
	return regionId_;
}

void GetJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetJobRequest::getJobName()const
{
	return jobName_;
}

void GetJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setCoreParameter("JobName", jobName);
}


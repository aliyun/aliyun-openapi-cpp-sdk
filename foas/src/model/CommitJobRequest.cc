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

#include <alibabacloud/foas/model/CommitJobRequest.h>

using AlibabaCloud::Foas::Model::CommitJobRequest;

CommitJobRequest::CommitJobRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs/[jobName]/commit");
	setMethod(HttpRequest::Method::Put);
}

CommitJobRequest::~CommitJobRequest()
{}

std::string CommitJobRequest::getProjectName()const
{
	return projectName_;
}

void CommitJobRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string CommitJobRequest::getRegionId()const
{
	return regionId_;
}

void CommitJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

float CommitJobRequest::getMaxCU()const
{
	return maxCU_;
}

void CommitJobRequest::setMaxCU(float maxCU)
{
	maxCU_ = maxCU;
	setCoreParameter("MaxCU", std::to_string(maxCU));
}

std::string CommitJobRequest::getConfigure()const
{
	return configure_;
}

void CommitJobRequest::setConfigure(const std::string& configure)
{
	configure_ = configure;
	setCoreParameter("Configure", configure);
}

bool CommitJobRequest::getIsOnOff()const
{
	return isOnOff_;
}

void CommitJobRequest::setIsOnOff(bool isOnOff)
{
	isOnOff_ = isOnOff;
	setCoreParameter("IsOnOff", isOnOff ? "true" : "false");
}

std::string CommitJobRequest::getJobName()const
{
	return jobName_;
}

void CommitJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setCoreParameter("JobName", jobName);
}


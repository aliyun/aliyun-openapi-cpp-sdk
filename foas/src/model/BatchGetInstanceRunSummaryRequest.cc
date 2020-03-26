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

#include <alibabacloud/foas/model/BatchGetInstanceRunSummaryRequest.h>

using AlibabaCloud::Foas::Model::BatchGetInstanceRunSummaryRequest;

BatchGetInstanceRunSummaryRequest::BatchGetInstanceRunSummaryRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/runsummary");
	setMethod(HttpRequest::Method::Get);
}

BatchGetInstanceRunSummaryRequest::~BatchGetInstanceRunSummaryRequest()
{}

std::string BatchGetInstanceRunSummaryRequest::getProjectName()const
{
	return projectName_;
}

void BatchGetInstanceRunSummaryRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string BatchGetInstanceRunSummaryRequest::getRegionId()const
{
	return regionId_;
}

void BatchGetInstanceRunSummaryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string BatchGetInstanceRunSummaryRequest::getJobNames()const
{
	return jobNames_;
}

void BatchGetInstanceRunSummaryRequest::setJobNames(const std::string& jobNames)
{
	jobNames_ = jobNames;
	setParameter("JobNames", jobNames);
}

std::string BatchGetInstanceRunSummaryRequest::getJobType()const
{
	return jobType_;
}

void BatchGetInstanceRunSummaryRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setParameter("JobType", jobType);
}


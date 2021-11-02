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

#include <alibabacloud/foas/model/GetRawPlanJsonRequest.h>

using AlibabaCloud::Foas::Model::GetRawPlanJsonRequest;

GetRawPlanJsonRequest::GetRawPlanJsonRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs/[jobName]/planjson");
	setMethod(HttpRequest::Method::Get);
}

GetRawPlanJsonRequest::~GetRawPlanJsonRequest()
{}

std::string GetRawPlanJsonRequest::getProjectName()const
{
	return projectName_;
}

void GetRawPlanJsonRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string GetRawPlanJsonRequest::getRegionId()const
{
	return regionId_;
}

void GetRawPlanJsonRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

float GetRawPlanJsonRequest::getExpectedGB()const
{
	return expectedGB_;
}

void GetRawPlanJsonRequest::setExpectedGB(float expectedGB)
{
	expectedGB_ = expectedGB;
	setParameter("ExpectedGB", std::to_string(expectedGB));
}

float GetRawPlanJsonRequest::getExpectedCore()const
{
	return expectedCore_;
}

void GetRawPlanJsonRequest::setExpectedCore(float expectedCore)
{
	expectedCore_ = expectedCore;
	setParameter("ExpectedCore", std::to_string(expectedCore));
}

std::string GetRawPlanJsonRequest::getAdvisorAction()const
{
	return advisorAction_;
}

void GetRawPlanJsonRequest::setAdvisorAction(const std::string& advisorAction)
{
	advisorAction_ = advisorAction;
	setParameter("AdvisorAction", advisorAction);
}

std::string GetRawPlanJsonRequest::getJobName()const
{
	return jobName_;
}

void GetRawPlanJsonRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

bool GetRawPlanJsonRequest::getAutoconfEnable()const
{
	return autoconfEnable_;
}

void GetRawPlanJsonRequest::setAutoconfEnable(bool autoconfEnable)
{
	autoconfEnable_ = autoconfEnable;
	setParameter("AutoconfEnable", autoconfEnable ? "true" : "false");
}


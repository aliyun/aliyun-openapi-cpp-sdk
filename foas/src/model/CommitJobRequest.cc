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
	setParameter("ProjectName", projectName);
}

bool CommitJobRequest::getRecommendOnly()const
{
	return recommendOnly_;
}

void CommitJobRequest::setRecommendOnly(bool recommendOnly)
{
	recommendOnly_ = recommendOnly;
	setBodyParameter("RecommendOnly", recommendOnly ? "true" : "false");
}

std::string CommitJobRequest::getRegionId()const
{
	return regionId_;
}

void CommitJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string CommitJobRequest::getSuspendPeriods()const
{
	return suspendPeriods_;
}

void CommitJobRequest::setSuspendPeriods(const std::string& suspendPeriods)
{
	suspendPeriods_ = suspendPeriods;
	setBodyParameter("SuspendPeriods", suspendPeriods);
}

float CommitJobRequest::getMaxCU()const
{
	return maxCU_;
}

void CommitJobRequest::setMaxCU(float maxCU)
{
	maxCU_ = maxCU;
	setBodyParameter("MaxCU", std::to_string(maxCU));
}

std::string CommitJobRequest::getConfigure()const
{
	return configure_;
}

void CommitJobRequest::setConfigure(const std::string& configure)
{
	configure_ = configure;
	setBodyParameter("Configure", configure);
}

bool CommitJobRequest::getIsOnOff()const
{
	return isOnOff_;
}

void CommitJobRequest::setIsOnOff(bool isOnOff)
{
	isOnOff_ = isOnOff;
	setBodyParameter("IsOnOff", isOnOff ? "true" : "false");
}

std::string CommitJobRequest::getJobName()const
{
	return jobName_;
}

void CommitJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

std::vector<CommitJobRequest::suspendPeriodParam> CommitJobRequest::getSuspendPeriodParam()const
{
	return suspendPeriodParam_;
}

void CommitJobRequest::setSuspendPeriodParam(const std::vector<suspendPeriodParam>& suspendPeriodParam)
{
	suspendPeriodParam_ = suspendPeriodParam;
	for(int dep1 = 0; dep1!= suspendPeriodParam.size(); dep1++) {
		auto suspendPeriodParamObj = suspendPeriodParam.at(dep1);
		std::string suspendPeriodParamObjStr = "suspendPeriodParam." + std::to_string(dep1 + 1);
		setParameter(suspendPeriodParamObjStr + ".EndTime", suspendPeriodParamObj.endTime);
		setParameter(suspendPeriodParamObjStr + ".StartTime", suspendPeriodParamObj.startTime);
		setParameter(suspendPeriodParamObjStr + ".Plan", suspendPeriodParamObj.plan);
		setParameter(suspendPeriodParamObjStr + ".Policy", suspendPeriodParamObj.policy);
	}
}


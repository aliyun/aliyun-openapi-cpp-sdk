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

#include <alibabacloud/csb/model/FindProjectStatisticalDataRequest.h>

using AlibabaCloud::CSB::Model::FindProjectStatisticalDataRequest;

FindProjectStatisticalDataRequest::FindProjectStatisticalDataRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindProjectStatisticalData")
{
	setMethod(HttpRequest::Method::Get);
}

FindProjectStatisticalDataRequest::~FindProjectStatisticalDataRequest()
{}

std::string FindProjectStatisticalDataRequest::getProjectName()const
{
	return projectName_;
}

void FindProjectStatisticalDataRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

long FindProjectStatisticalDataRequest::getCsbId()const
{
	return csbId_;
}

void FindProjectStatisticalDataRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setParameter("CsbId", std::to_string(csbId));
}

long FindProjectStatisticalDataRequest::getEndTime()const
{
	return endTime_;
}

void FindProjectStatisticalDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long FindProjectStatisticalDataRequest::getStartTime()const
{
	return startTime_;
}

void FindProjectStatisticalDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}


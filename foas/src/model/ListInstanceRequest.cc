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

#include <alibabacloud/foas/model/ListInstanceRequest.h>

using AlibabaCloud::Foas::Model::ListInstanceRequest;

ListInstanceRequest::ListInstanceRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/instances");
	setMethod(HttpRequest::Method::Get);
}

ListInstanceRequest::~ListInstanceRequest()
{}

std::string ListInstanceRequest::getProjectName()const
{
	return projectName_;
}

void ListInstanceRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

long ListInstanceRequest::getEndBeginTs()const
{
	return endBeginTs_;
}

void ListInstanceRequest::setEndBeginTs(long endBeginTs)
{
	endBeginTs_ = endBeginTs;
	setParameter("EndBeginTs", std::to_string(endBeginTs));
}

std::string ListInstanceRequest::getExpectState()const
{
	return expectState_;
}

void ListInstanceRequest::setExpectState(const std::string& expectState)
{
	expectState_ = expectState;
	setParameter("ExpectState", expectState);
}

std::string ListInstanceRequest::getJobType()const
{
	return jobType_;
}

void ListInstanceRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setParameter("JobType", jobType);
}

std::string ListInstanceRequest::getApiType()const
{
	return apiType_;
}

void ListInstanceRequest::setApiType(const std::string& apiType)
{
	apiType_ = apiType;
	setParameter("ApiType", apiType);
}

std::string ListInstanceRequest::getActualState()const
{
	return actualState_;
}

void ListInstanceRequest::setActualState(const std::string& actualState)
{
	actualState_ = actualState;
	setParameter("ActualState", actualState);
}

long ListInstanceRequest::getEndEndTs()const
{
	return endEndTs_;
}

void ListInstanceRequest::setEndEndTs(long endEndTs)
{
	endEndTs_ = endEndTs;
	setParameter("EndEndTs", std::to_string(endEndTs));
}

std::string ListInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ListInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

long ListInstanceRequest::getStartEndTs()const
{
	return startEndTs_;
}

void ListInstanceRequest::setStartEndTs(long startEndTs)
{
	startEndTs_ = startEndTs;
	setParameter("StartEndTs", std::to_string(startEndTs));
}

int ListInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListInstanceRequest::getStartBeginTs()const
{
	return startBeginTs_;
}

void ListInstanceRequest::setStartBeginTs(long startBeginTs)
{
	startBeginTs_ = startBeginTs;
	setParameter("StartBeginTs", std::to_string(startBeginTs));
}

int ListInstanceRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListInstanceRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

bool ListInstanceRequest::getIsArchived()const
{
	return isArchived_;
}

void ListInstanceRequest::setIsArchived(bool isArchived)
{
	isArchived_ = isArchived;
	setParameter("IsArchived", isArchived ? "true" : "false");
}

std::string ListInstanceRequest::getJobName()const
{
	return jobName_;
}

void ListInstanceRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}


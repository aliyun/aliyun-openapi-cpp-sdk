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

#include <alibabacloud/foas/model/ListJobRequest.h>

using AlibabaCloud::Foas::Model::ListJobRequest;

ListJobRequest::ListJobRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs");
	setMethod(HttpRequest::Method::Get);
}

ListJobRequest::~ListJobRequest()
{}

std::string ListJobRequest::getQueueName()const
{
	return queueName_;
}

void ListJobRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setParameter("QueueName", queueName);
}

std::string ListJobRequest::getProjectName()const
{
	return projectName_;
}

void ListJobRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string ListJobRequest::getRegionId()const
{
	return regionId_;
}

void ListJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

int ListJobRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

bool ListJobRequest::getIsShowFullField()const
{
	return isShowFullField_;
}

void ListJobRequest::setIsShowFullField(bool isShowFullField)
{
	isShowFullField_ = isShowFullField;
	setParameter("IsShowFullField", isShowFullField ? "true" : "false");
}

int ListJobRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListJobRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListJobRequest::getEngineVersion()const
{
	return engineVersion_;
}

void ListJobRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string ListJobRequest::getClusterId()const
{
	return clusterId_;
}

void ListJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListJobRequest::getJobType()const
{
	return jobType_;
}

void ListJobRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setParameter("JobType", jobType);
}

std::string ListJobRequest::getApiType()const
{
	return apiType_;
}

void ListJobRequest::setApiType(const std::string& apiType)
{
	apiType_ = apiType;
	setParameter("ApiType", apiType);
}

std::string ListJobRequest::getJobName()const
{
	return jobName_;
}

void ListJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

long ListJobRequest::getFolderId()const
{
	return folderId_;
}

void ListJobRequest::setFolderId(long folderId)
{
	folderId_ = folderId;
	setParameter("FolderId", std::to_string(folderId));
}


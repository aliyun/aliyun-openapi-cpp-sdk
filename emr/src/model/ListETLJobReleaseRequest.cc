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

#include <alibabacloud/emr/model/ListETLJobReleaseRequest.h>

using AlibabaCloud::Emr::Model::ListETLJobReleaseRequest;

ListETLJobReleaseRequest::ListETLJobReleaseRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListETLJobRelease")
{}

ListETLJobReleaseRequest::~ListETLJobReleaseRequest()
{}

long ListETLJobReleaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListETLJobReleaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListETLJobReleaseRequest::getRegionId()const
{
	return regionId_;
}

void ListETLJobReleaseRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListETLJobReleaseRequest::getEtlJobId()const
{
	return etlJobId_;
}

void ListETLJobReleaseRequest::setEtlJobId(const std::string& etlJobId)
{
	etlJobId_ = etlJobId;
	setCoreParameter("EtlJobId", etlJobId);
}

std::string ListETLJobReleaseRequest::getReleaseId()const
{
	return releaseId_;
}

void ListETLJobReleaseRequest::setReleaseId(const std::string& releaseId)
{
	releaseId_ = releaseId;
	setCoreParameter("ReleaseId", releaseId);
}

int ListETLJobReleaseRequest::getPageSize()const
{
	return pageSize_;
}

void ListETLJobReleaseRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int ListETLJobReleaseRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListETLJobReleaseRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

int ListETLJobReleaseRequest::getReleaseVersion()const
{
	return releaseVersion_;
}

void ListETLJobReleaseRequest::setReleaseVersion(int releaseVersion)
{
	releaseVersion_ = releaseVersion;
	setCoreParameter("ReleaseVersion", releaseVersion);
}

std::string ListETLJobReleaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListETLJobReleaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListETLJobReleaseRequest::getStatus()const
{
	return status_;
}

void ListETLJobReleaseRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}


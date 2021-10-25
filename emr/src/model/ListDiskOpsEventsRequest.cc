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

#include <alibabacloud/emr/model/ListDiskOpsEventsRequest.h>

using AlibabaCloud::Emr::Model::ListDiskOpsEventsRequest;

ListDiskOpsEventsRequest::ListDiskOpsEventsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListDiskOpsEvents")
{
	setMethod(HttpRequest::Method::Post);
}

ListDiskOpsEventsRequest::~ListDiskOpsEventsRequest()
{}

long ListDiskOpsEventsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListDiskOpsEventsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListDiskOpsEventsRequest::getEndTime()const
{
	return endTime_;
}

void ListDiskOpsEventsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string ListDiskOpsEventsRequest::getClusterId()const
{
	return clusterId_;
}

void ListDiskOpsEventsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long ListDiskOpsEventsRequest::getStartTime()const
{
	return startTime_;
}

void ListDiskOpsEventsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int ListDiskOpsEventsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDiskOpsEventsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListDiskOpsEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListDiskOpsEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListDiskOpsEventsRequest::getRegionId()const
{
	return regionId_;
}

void ListDiskOpsEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListDiskOpsEventsRequest::getPageSize()const
{
	return pageSize_;
}

void ListDiskOpsEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}


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

#include <alibabacloud/vod/model/ListLiveRecordVideoRequest.h>

using AlibabaCloud::Vod::Model::ListLiveRecordVideoRequest;

ListLiveRecordVideoRequest::ListLiveRecordVideoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListLiveRecordVideo")
{}

ListLiveRecordVideoRequest::~ListLiveRecordVideoRequest()
{}

long ListLiveRecordVideoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListLiveRecordVideoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListLiveRecordVideoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListLiveRecordVideoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListLiveRecordVideoRequest::getDomainName()const
{
	return domainName_;
}

void ListLiveRecordVideoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string ListLiveRecordVideoRequest::getEndTime()const
{
	return endTime_;
}

void ListLiveRecordVideoRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string ListLiveRecordVideoRequest::getStartTime()const
{
	return startTime_;
}

void ListLiveRecordVideoRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long ListLiveRecordVideoRequest::getOwnerId()const
{
	return ownerId_;
}

void ListLiveRecordVideoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListLiveRecordVideoRequest::getAppName()const
{
	return appName_;
}

void ListLiveRecordVideoRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

int ListLiveRecordVideoRequest::getPageNo()const
{
	return pageNo_;
}

void ListLiveRecordVideoRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

int ListLiveRecordVideoRequest::getPageSize()const
{
	return pageSize_;
}

void ListLiveRecordVideoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListLiveRecordVideoRequest::getSortBy()const
{
	return sortBy_;
}

void ListLiveRecordVideoRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

std::string ListLiveRecordVideoRequest::getStreamName()const
{
	return streamName_;
}

void ListLiveRecordVideoRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string ListLiveRecordVideoRequest::getQueryType()const
{
	return queryType_;
}

void ListLiveRecordVideoRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setParameter("QueryType", queryType);
}


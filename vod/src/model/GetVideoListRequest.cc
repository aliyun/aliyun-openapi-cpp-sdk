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

#include <alibabacloud/vod/model/GetVideoListRequest.h>

using AlibabaCloud::Vod::Model::GetVideoListRequest;

GetVideoListRequest::GetVideoListRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetVideoList")
{}

GetVideoListRequest::~GetVideoListRequest()
{}

long GetVideoListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetVideoListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetVideoListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetVideoListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetVideoListRequest::getCateId()const
{
	return cateId_;
}

void GetVideoListRequest::setCateId(long cateId)
{
	cateId_ = cateId;
	setCoreParameter("CateId", cateId);
}

int GetVideoListRequest::getPageNo()const
{
	return pageNo_;
}

void GetVideoListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", pageNo);
}

int GetVideoListRequest::getPageSize()const
{
	return pageSize_;
}

void GetVideoListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string GetVideoListRequest::getEndTime()const
{
	return endTime_;
}

void GetVideoListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string GetVideoListRequest::getSortBy()const
{
	return sortBy_;
}

void GetVideoListRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

std::string GetVideoListRequest::getStartTime()const
{
	return startTime_;
}

void GetVideoListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long GetVideoListRequest::getOwnerId()const
{
	return ownerId_;
}

void GetVideoListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetVideoListRequest::getStatus()const
{
	return status_;
}

void GetVideoListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

std::string GetVideoListRequest::getStorageLocation()const
{
	return storageLocation_;
}

void GetVideoListRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setCoreParameter("StorageLocation", storageLocation);
}


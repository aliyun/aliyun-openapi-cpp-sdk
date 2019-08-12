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

#include <alibabacloud/emr/model/ListResourcePoolForAdminRequest.h>

using AlibabaCloud::Emr::Model::ListResourcePoolForAdminRequest;

ListResourcePoolForAdminRequest::ListResourcePoolForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListResourcePoolForAdmin")
{}

ListResourcePoolForAdminRequest::~ListResourcePoolForAdminRequest()
{}

long ListResourcePoolForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListResourcePoolForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListResourcePoolForAdminRequest::getRegionId()const
{
	return regionId_;
}

void ListResourcePoolForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListResourcePoolForAdminRequest::getPageSize()const
{
	return pageSize_;
}

void ListResourcePoolForAdminRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListResourcePoolForAdminRequest::getClusterId()const
{
	return clusterId_;
}

void ListResourcePoolForAdminRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListResourcePoolForAdminRequest::getUserId()const
{
	return userId_;
}

void ListResourcePoolForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

int ListResourcePoolForAdminRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListResourcePoolForAdminRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListResourcePoolForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListResourcePoolForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListResourcePoolForAdminRequest::getPoolType()const
{
	return poolType_;
}

void ListResourcePoolForAdminRequest::setPoolType(const std::string& poolType)
{
	poolType_ = poolType;
	setCoreParameter("PoolType", poolType);
}


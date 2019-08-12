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

#include <alibabacloud/emr/model/ListExecutePlanMigrateInfoRequest.h>

using AlibabaCloud::Emr::Model::ListExecutePlanMigrateInfoRequest;

ListExecutePlanMigrateInfoRequest::ListExecutePlanMigrateInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListExecutePlanMigrateInfo")
{}

ListExecutePlanMigrateInfoRequest::~ListExecutePlanMigrateInfoRequest()
{}

long ListExecutePlanMigrateInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListExecutePlanMigrateInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListExecutePlanMigrateInfoRequest::getRegionId()const
{
	return regionId_;
}

void ListExecutePlanMigrateInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListExecutePlanMigrateInfoRequest::getPageSize()const
{
	return pageSize_;
}

void ListExecutePlanMigrateInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListExecutePlanMigrateInfoRequest::getUserId()const
{
	return userId_;
}

void ListExecutePlanMigrateInfoRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

int ListExecutePlanMigrateInfoRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListExecutePlanMigrateInfoRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", currentSize);
}

std::string ListExecutePlanMigrateInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListExecutePlanMigrateInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}


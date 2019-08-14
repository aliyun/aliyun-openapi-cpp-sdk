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

#include <alibabacloud/emr/model/ListJobMigrateInfoRequest.h>

using AlibabaCloud::Emr::Model::ListJobMigrateInfoRequest;

ListJobMigrateInfoRequest::ListJobMigrateInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListJobMigrateInfo")
{}

ListJobMigrateInfoRequest::~ListJobMigrateInfoRequest()
{}

long ListJobMigrateInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListJobMigrateInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListJobMigrateInfoRequest::getRegionId()const
{
	return regionId_;
}

void ListJobMigrateInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListJobMigrateInfoRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobMigrateInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListJobMigrateInfoRequest::getUserId()const
{
	return userId_;
}

void ListJobMigrateInfoRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

int ListJobMigrateInfoRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListJobMigrateInfoRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListJobMigrateInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListJobMigrateInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}


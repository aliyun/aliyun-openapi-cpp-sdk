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

#include <alibabacloud/emr/model/ListResourceQueueRequest.h>

using AlibabaCloud::Emr::Model::ListResourceQueueRequest;

ListResourceQueueRequest::ListResourceQueueRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListResourceQueue")
{}

ListResourceQueueRequest::~ListResourceQueueRequest()
{}

long ListResourceQueueRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListResourceQueueRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListResourceQueueRequest::getRegionId()const
{
	return regionId_;
}

void ListResourceQueueRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long ListResourceQueueRequest::getPoolId()const
{
	return poolId_;
}

void ListResourceQueueRequest::setPoolId(long poolId)
{
	poolId_ = poolId;
	setCoreParameter("PoolId", std::to_string(poolId));
}

int ListResourceQueueRequest::getPageSize()const
{
	return pageSize_;
}

void ListResourceQueueRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListResourceQueueRequest::getClusterId()const
{
	return clusterId_;
}

void ListResourceQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListResourceQueueRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListResourceQueueRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListResourceQueueRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListResourceQueueRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListResourceQueueRequest::getPoolType()const
{
	return poolType_;
}

void ListResourceQueueRequest::setPoolType(const std::string& poolType)
{
	poolType_ = poolType;
	setCoreParameter("PoolType", poolType);
}


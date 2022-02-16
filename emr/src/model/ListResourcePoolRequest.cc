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

#include <alibabacloud/emr/model/ListResourcePoolRequest.h>

using AlibabaCloud::Emr::Model::ListResourcePoolRequest;

ListResourcePoolRequest::ListResourcePoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListResourcePool")
{
	setMethod(HttpRequest::Method::Post);
}

ListResourcePoolRequest::~ListResourcePoolRequest()
{}

long ListResourcePoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListResourcePoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListResourcePoolRequest::getClusterId()const
{
	return clusterId_;
}

void ListResourcePoolRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListResourcePoolRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListResourcePoolRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListResourcePoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListResourcePoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListResourcePoolRequest::getRegionId()const
{
	return regionId_;
}

void ListResourcePoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListResourcePoolRequest::getPageSize()const
{
	return pageSize_;
}

void ListResourcePoolRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListResourcePoolRequest::getPoolType()const
{
	return poolType_;
}

void ListResourcePoolRequest::setPoolType(const std::string& poolType)
{
	poolType_ = poolType;
	setParameter("PoolType", poolType);
}


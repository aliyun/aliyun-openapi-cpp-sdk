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

#include <alibabacloud/emr/model/ListClusterServiceRequest.h>

using AlibabaCloud::Emr::Model::ListClusterServiceRequest;

ListClusterServiceRequest::ListClusterServiceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterService")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterServiceRequest::~ListClusterServiceRequest()
{}

long ListClusterServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterServiceRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterServiceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListClusterServiceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterServiceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterServiceRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListClusterServiceRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterServiceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}


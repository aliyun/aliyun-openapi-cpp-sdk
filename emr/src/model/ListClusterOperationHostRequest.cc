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

#include <alibabacloud/emr/model/ListClusterOperationHostRequest.h>

using AlibabaCloud::Emr::Model::ListClusterOperationHostRequest;

ListClusterOperationHostRequest::ListClusterOperationHostRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterOperationHost")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterOperationHostRequest::~ListClusterOperationHostRequest()
{}

long ListClusterOperationHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterOperationHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterOperationHostRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterOperationHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListClusterOperationHostRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterOperationHostRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterOperationHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterOperationHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterOperationHostRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterOperationHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListClusterOperationHostRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterOperationHostRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListClusterOperationHostRequest::getOperationId()const
{
	return operationId_;
}

void ListClusterOperationHostRequest::setOperationId(const std::string& operationId)
{
	operationId_ = operationId;
	setParameter("OperationId", operationId);
}

std::string ListClusterOperationHostRequest::getStatus()const
{
	return status_;
}

void ListClusterOperationHostRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}


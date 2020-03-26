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

#include <alibabacloud/emr/model/ListClusterOperationHostTaskRequest.h>

using AlibabaCloud::Emr::Model::ListClusterOperationHostTaskRequest;

ListClusterOperationHostTaskRequest::ListClusterOperationHostTaskRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterOperationHostTask")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterOperationHostTaskRequest::~ListClusterOperationHostTaskRequest()
{}

long ListClusterOperationHostTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterOperationHostTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterOperationHostTaskRequest::getHostId()const
{
	return hostId_;
}

void ListClusterOperationHostTaskRequest::setHostId(const std::string& hostId)
{
	hostId_ = hostId;
	setParameter("HostId", hostId);
}

std::string ListClusterOperationHostTaskRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterOperationHostTaskRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListClusterOperationHostTaskRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterOperationHostTaskRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterOperationHostTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterOperationHostTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterOperationHostTaskRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterOperationHostTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListClusterOperationHostTaskRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterOperationHostTaskRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListClusterOperationHostTaskRequest::getOperationId()const
{
	return operationId_;
}

void ListClusterOperationHostTaskRequest::setOperationId(const std::string& operationId)
{
	operationId_ = operationId;
	setParameter("OperationId", operationId);
}

std::string ListClusterOperationHostTaskRequest::getStatus()const
{
	return status_;
}

void ListClusterOperationHostTaskRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}


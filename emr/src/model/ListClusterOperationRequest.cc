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

#include <alibabacloud/emr/model/ListClusterOperationRequest.h>

using AlibabaCloud::Emr::Model::ListClusterOperationRequest;

ListClusterOperationRequest::ListClusterOperationRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterOperation")
{}

ListClusterOperationRequest::~ListClusterOperationRequest()
{}

long ListClusterOperationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterOperationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListClusterOperationRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterOperationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListClusterOperationRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterOperationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListClusterOperationRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterOperationRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

std::string ListClusterOperationRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterOperationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListClusterOperationRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterOperationRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListClusterOperationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterOperationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterOperationRequest::getStatus()const
{
	return status_;
}

void ListClusterOperationRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}


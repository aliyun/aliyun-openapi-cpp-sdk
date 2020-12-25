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

#include <alibabacloud/emr/model/ListClusterServiceComponentRequest.h>

using AlibabaCloud::Emr::Model::ListClusterServiceComponentRequest;

ListClusterServiceComponentRequest::ListClusterServiceComponentRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterServiceComponent")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterServiceComponentRequest::~ListClusterServiceComponentRequest()
{}

long ListClusterServiceComponentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterServiceComponentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterServiceComponentRequest::getPodName()const
{
	return podName_;
}

void ListClusterServiceComponentRequest::setPodName(const std::string& podName)
{
	podName_ = podName;
	setParameter("PodName", podName);
}

std::string ListClusterServiceComponentRequest::getComponentName()const
{
	return componentName_;
}

void ListClusterServiceComponentRequest::setComponentName(const std::string& componentName)
{
	componentName_ = componentName;
	setParameter("ComponentName", componentName);
}

std::string ListClusterServiceComponentRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterServiceComponentRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListClusterServiceComponentRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterServiceComponentRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterServiceComponentRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterServiceComponentRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterServiceComponentRequest::getComponentStatus()const
{
	return componentStatus_;
}

void ListClusterServiceComponentRequest::setComponentStatus(const std::string& componentStatus)
{
	componentStatus_ = componentStatus;
	setParameter("ComponentStatus", componentStatus);
}

std::string ListClusterServiceComponentRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterServiceComponentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListClusterServiceComponentRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterServiceComponentRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListClusterServiceComponentRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterServiceComponentRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}


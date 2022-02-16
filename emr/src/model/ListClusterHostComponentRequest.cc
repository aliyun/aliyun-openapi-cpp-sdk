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

#include <alibabacloud/emr/model/ListClusterHostComponentRequest.h>

using AlibabaCloud::Emr::Model::ListClusterHostComponentRequest;

ListClusterHostComponentRequest::ListClusterHostComponentRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterHostComponent")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterHostComponentRequest::~ListClusterHostComponentRequest()
{}

long ListClusterHostComponentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterHostComponentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterHostComponentRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void ListClusterHostComponentRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setParameter("HostInstanceId", hostInstanceId);
}

std::string ListClusterHostComponentRequest::getComponentName()const
{
	return componentName_;
}

void ListClusterHostComponentRequest::setComponentName(const std::string& componentName)
{
	componentName_ = componentName;
	setParameter("ComponentName", componentName);
}

int ListClusterHostComponentRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterHostComponentRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterHostComponentRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterHostComponentRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterHostComponentRequest::getComponentStatus()const
{
	return componentStatus_;
}

void ListClusterHostComponentRequest::setComponentStatus(const std::string& componentStatus)
{
	componentStatus_ = componentStatus;
	setParameter("ComponentStatus", componentStatus);
}

std::string ListClusterHostComponentRequest::getHostName()const
{
	return hostName_;
}

void ListClusterHostComponentRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string ListClusterHostComponentRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterHostComponentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListClusterHostComponentRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterHostComponentRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListClusterHostComponentRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterHostComponentRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::string ListClusterHostComponentRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterHostComponentRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListClusterHostComponentRequest::getHostRole()const
{
	return hostRole_;
}

void ListClusterHostComponentRequest::setHostRole(const std::string& hostRole)
{
	hostRole_ = hostRole;
	setParameter("HostRole", hostRole);
}


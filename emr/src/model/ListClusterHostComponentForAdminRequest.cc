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

#include <alibabacloud/emr/model/ListClusterHostComponentForAdminRequest.h>

using AlibabaCloud::Emr::Model::ListClusterHostComponentForAdminRequest;

ListClusterHostComponentForAdminRequest::ListClusterHostComponentForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterHostComponentForAdmin")
{}

ListClusterHostComponentForAdminRequest::~ListClusterHostComponentForAdminRequest()
{}

long ListClusterHostComponentForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterHostComponentForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterHostComponentForAdminRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void ListClusterHostComponentForAdminRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setCoreParameter("HostInstanceId", hostInstanceId);
}

std::string ListClusterHostComponentForAdminRequest::getComponentName()const
{
	return componentName_;
}

void ListClusterHostComponentForAdminRequest::setComponentName(const std::string& componentName)
{
	componentName_ = componentName;
	setCoreParameter("ComponentName", componentName);
}

std::string ListClusterHostComponentForAdminRequest::getUserId()const
{
	return userId_;
}

void ListClusterHostComponentForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

int ListClusterHostComponentForAdminRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterHostComponentForAdminRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterHostComponentForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterHostComponentForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterHostComponentForAdminRequest::getComponentStatus()const
{
	return componentStatus_;
}

void ListClusterHostComponentForAdminRequest::setComponentStatus(const std::string& componentStatus)
{
	componentStatus_ = componentStatus;
	setCoreParameter("ComponentStatus", componentStatus);
}

std::string ListClusterHostComponentForAdminRequest::getHostName()const
{
	return hostName_;
}

void ListClusterHostComponentForAdminRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string ListClusterHostComponentForAdminRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterHostComponentForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListClusterHostComponentForAdminRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterHostComponentForAdminRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListClusterHostComponentForAdminRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterHostComponentForAdminRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

std::string ListClusterHostComponentForAdminRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterHostComponentForAdminRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListClusterHostComponentForAdminRequest::getHostRole()const
{
	return hostRole_;
}

void ListClusterHostComponentForAdminRequest::setHostRole(const std::string& hostRole)
{
	hostRole_ = hostRole;
	setCoreParameter("HostRole", hostRole);
}


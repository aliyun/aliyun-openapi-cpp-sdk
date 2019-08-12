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

#include <alibabacloud/emr/model/ListClusterServiceConfigHistoryForAdminRequest.h>

using AlibabaCloud::Emr::Model::ListClusterServiceConfigHistoryForAdminRequest;

ListClusterServiceConfigHistoryForAdminRequest::ListClusterServiceConfigHistoryForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterServiceConfigHistoryForAdmin")
{}

ListClusterServiceConfigHistoryForAdminRequest::~ListClusterServiceConfigHistoryForAdminRequest()
{}

long ListClusterServiceConfigHistoryForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListClusterServiceConfigHistoryForAdminRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListClusterServiceConfigHistoryForAdminRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListClusterServiceConfigHistoryForAdminRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

std::string ListClusterServiceConfigHistoryForAdminRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListClusterServiceConfigHistoryForAdminRequest::getUserId()const
{
	return userId_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

int ListClusterServiceConfigHistoryForAdminRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListClusterServiceConfigHistoryForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterServiceConfigHistoryForAdminRequest::getConfigVersion()const
{
	return configVersion_;
}

void ListClusterServiceConfigHistoryForAdminRequest::setConfigVersion(const std::string& configVersion)
{
	configVersion_ = configVersion;
	setCoreParameter("ConfigVersion", configVersion);
}


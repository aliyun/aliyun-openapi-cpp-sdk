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

#include <alibabacloud/emr/model/ListClusterServiceConfigHistoryRequest.h>

using AlibabaCloud::Emr::Model::ListClusterServiceConfigHistoryRequest;

ListClusterServiceConfigHistoryRequest::ListClusterServiceConfigHistoryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterServiceConfigHistory")
{}

ListClusterServiceConfigHistoryRequest::~ListClusterServiceConfigHistoryRequest()
{}

long ListClusterServiceConfigHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterServiceConfigHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterServiceConfigHistoryRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterServiceConfigHistoryRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListClusterServiceConfigHistoryRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterServiceConfigHistoryRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterServiceConfigHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterServiceConfigHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterServiceConfigHistoryRequest::getConfigVersion()const
{
	return configVersion_;
}

void ListClusterServiceConfigHistoryRequest::setConfigVersion(const std::string& configVersion)
{
	configVersion_ = configVersion;
	setCoreParameter("ConfigVersion", configVersion);
}

std::string ListClusterServiceConfigHistoryRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterServiceConfigHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListClusterServiceConfigHistoryRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterServiceConfigHistoryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListClusterServiceConfigHistoryRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterServiceConfigHistoryRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}


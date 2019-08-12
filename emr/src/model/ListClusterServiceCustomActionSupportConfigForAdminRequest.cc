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

#include <alibabacloud/emr/model/ListClusterServiceCustomActionSupportConfigForAdminRequest.h>

using AlibabaCloud::Emr::Model::ListClusterServiceCustomActionSupportConfigForAdminRequest;

ListClusterServiceCustomActionSupportConfigForAdminRequest::ListClusterServiceCustomActionSupportConfigForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterServiceCustomActionSupportConfigForAdmin")
{}

ListClusterServiceCustomActionSupportConfigForAdminRequest::~ListClusterServiceCustomActionSupportConfigForAdminRequest()
{}

std::string ListClusterServiceCustomActionSupportConfigForAdminRequest::getServiceCustomActionName()const
{
	return serviceCustomActionName_;
}

void ListClusterServiceCustomActionSupportConfigForAdminRequest::setServiceCustomActionName(const std::string& serviceCustomActionName)
{
	serviceCustomActionName_ = serviceCustomActionName;
	setCoreParameter("ServiceCustomActionName", std::to_string(serviceCustomActionName));
}

long ListClusterServiceCustomActionSupportConfigForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterServiceCustomActionSupportConfigForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListClusterServiceCustomActionSupportConfigForAdminRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterServiceCustomActionSupportConfigForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListClusterServiceCustomActionSupportConfigForAdminRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterServiceCustomActionSupportConfigForAdminRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", std::to_string(serviceName));
}

std::string ListClusterServiceCustomActionSupportConfigForAdminRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterServiceCustomActionSupportConfigForAdminRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string ListClusterServiceCustomActionSupportConfigForAdminRequest::getUserId()const
{
	return userId_;
}

void ListClusterServiceCustomActionSupportConfigForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", std::to_string(userId));
}

std::string ListClusterServiceCustomActionSupportConfigForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterServiceCustomActionSupportConfigForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}


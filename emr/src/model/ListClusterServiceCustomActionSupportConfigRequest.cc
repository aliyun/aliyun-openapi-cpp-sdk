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

#include <alibabacloud/emr/model/ListClusterServiceCustomActionSupportConfigRequest.h>

using AlibabaCloud::Emr::Model::ListClusterServiceCustomActionSupportConfigRequest;

ListClusterServiceCustomActionSupportConfigRequest::ListClusterServiceCustomActionSupportConfigRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterServiceCustomActionSupportConfig")
{}

ListClusterServiceCustomActionSupportConfigRequest::~ListClusterServiceCustomActionSupportConfigRequest()
{}

std::string ListClusterServiceCustomActionSupportConfigRequest::getServiceCustomActionName()const
{
	return serviceCustomActionName_;
}

void ListClusterServiceCustomActionSupportConfigRequest::setServiceCustomActionName(const std::string& serviceCustomActionName)
{
	serviceCustomActionName_ = serviceCustomActionName;
	setCoreParameter("ServiceCustomActionName", serviceCustomActionName);
}

long ListClusterServiceCustomActionSupportConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterServiceCustomActionSupportConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterServiceCustomActionSupportConfigRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterServiceCustomActionSupportConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListClusterServiceCustomActionSupportConfigRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterServiceCustomActionSupportConfigRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

std::string ListClusterServiceCustomActionSupportConfigRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterServiceCustomActionSupportConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListClusterServiceCustomActionSupportConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterServiceCustomActionSupportConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}


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

#include <alibabacloud/emr/model/ListDependedServiceRequest.h>

using AlibabaCloud::Emr::Model::ListDependedServiceRequest;

ListDependedServiceRequest::ListDependedServiceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListDependedService")
{}

ListDependedServiceRequest::~ListDependedServiceRequest()
{}

long ListDependedServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListDependedServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListDependedServiceRequest::getRegionId()const
{
	return regionId_;
}

void ListDependedServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListDependedServiceRequest::getServiceName()const
{
	return serviceName_;
}

void ListDependedServiceRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

std::string ListDependedServiceRequest::getClusterId()const
{
	return clusterId_;
}

void ListDependedServiceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListDependedServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListDependedServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}


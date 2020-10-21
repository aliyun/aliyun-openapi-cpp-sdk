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

#include <alibabacloud/sgw/model/CreateStorageBundleRequest.h>

using AlibabaCloud::Sgw::Model::CreateStorageBundleRequest;

CreateStorageBundleRequest::CreateStorageBundleRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CreateStorageBundle")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStorageBundleRequest::~CreateStorageBundleRequest()
{}

std::string CreateStorageBundleRequest::getBackendBucketRegionId()const
{
	return backendBucketRegionId_;
}

void CreateStorageBundleRequest::setBackendBucketRegionId(const std::string& backendBucketRegionId)
{
	backendBucketRegionId_ = backendBucketRegionId;
	setParameter("BackendBucketRegionId", backendBucketRegionId);
}

std::string CreateStorageBundleRequest::getDescription()const
{
	return description_;
}

void CreateStorageBundleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateStorageBundleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateStorageBundleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateStorageBundleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateStorageBundleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateStorageBundleRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateStorageBundleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateStorageBundleRequest::getName()const
{
	return name_;
}

void CreateStorageBundleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateStorageBundleRequest::getLocation()const
{
	return location_;
}

void CreateStorageBundleRequest::setLocation(const std::string& location)
{
	location_ = location;
	setParameter("Location", location);
}


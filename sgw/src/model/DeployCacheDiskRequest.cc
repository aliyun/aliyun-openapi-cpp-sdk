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

#include <alibabacloud/sgw/model/DeployCacheDiskRequest.h>

using AlibabaCloud::Sgw::Model::DeployCacheDiskRequest;

DeployCacheDiskRequest::DeployCacheDiskRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DeployCacheDisk")
{
	setMethod(HttpRequest::Method::Post);
}

DeployCacheDiskRequest::~DeployCacheDiskRequest()
{}

int DeployCacheDiskRequest::getSizeInGB()const
{
	return sizeInGB_;
}

void DeployCacheDiskRequest::setSizeInGB(int sizeInGB)
{
	sizeInGB_ = sizeInGB;
	setParameter("SizeInGB", std::to_string(sizeInGB));
}

std::string DeployCacheDiskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeployCacheDiskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeployCacheDiskRequest::getCacheConfig()const
{
	return cacheConfig_;
}

void DeployCacheDiskRequest::setCacheConfig(const std::string& cacheConfig)
{
	cacheConfig_ = cacheConfig;
	setParameter("CacheConfig", cacheConfig);
}

std::string DeployCacheDiskRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeployCacheDiskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeployCacheDiskRequest::getDiskCategory()const
{
	return diskCategory_;
}

void DeployCacheDiskRequest::setDiskCategory(const std::string& diskCategory)
{
	diskCategory_ = diskCategory;
	setParameter("DiskCategory", diskCategory);
}

std::string DeployCacheDiskRequest::getGatewayId()const
{
	return gatewayId_;
}

void DeployCacheDiskRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}


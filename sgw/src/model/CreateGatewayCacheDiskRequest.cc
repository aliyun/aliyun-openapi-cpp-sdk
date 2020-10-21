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

#include <alibabacloud/sgw/model/CreateGatewayCacheDiskRequest.h>

using AlibabaCloud::Sgw::Model::CreateGatewayCacheDiskRequest;

CreateGatewayCacheDiskRequest::CreateGatewayCacheDiskRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CreateGatewayCacheDisk")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGatewayCacheDiskRequest::~CreateGatewayCacheDiskRequest()
{}

long CreateGatewayCacheDiskRequest::getCacheDiskSizeInGB()const
{
	return cacheDiskSizeInGB_;
}

void CreateGatewayCacheDiskRequest::setCacheDiskSizeInGB(long cacheDiskSizeInGB)
{
	cacheDiskSizeInGB_ = cacheDiskSizeInGB;
	setParameter("CacheDiskSizeInGB", std::to_string(cacheDiskSizeInGB));
}

std::string CreateGatewayCacheDiskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGatewayCacheDiskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGatewayCacheDiskRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGatewayCacheDiskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateGatewayCacheDiskRequest::getCacheDiskCategory()const
{
	return cacheDiskCategory_;
}

void CreateGatewayCacheDiskRequest::setCacheDiskCategory(const std::string& cacheDiskCategory)
{
	cacheDiskCategory_ = cacheDiskCategory;
	setParameter("CacheDiskCategory", cacheDiskCategory);
}

std::string CreateGatewayCacheDiskRequest::getGatewayId()const
{
	return gatewayId_;
}

void CreateGatewayCacheDiskRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}


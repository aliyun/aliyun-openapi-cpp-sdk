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

#include <alibabacloud/sgw/model/DeleteGatewayCacheDiskRequest.h>

using AlibabaCloud::Sgw::Model::DeleteGatewayCacheDiskRequest;

DeleteGatewayCacheDiskRequest::DeleteGatewayCacheDiskRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DeleteGatewayCacheDisk")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteGatewayCacheDiskRequest::~DeleteGatewayCacheDiskRequest()
{}

std::string DeleteGatewayCacheDiskRequest::getLocalFilePath()const
{
	return localFilePath_;
}

void DeleteGatewayCacheDiskRequest::setLocalFilePath(const std::string& localFilePath)
{
	localFilePath_ = localFilePath;
	setParameter("LocalFilePath", localFilePath);
}

std::string DeleteGatewayCacheDiskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteGatewayCacheDiskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteGatewayCacheDiskRequest::getCacheId()const
{
	return cacheId_;
}

void DeleteGatewayCacheDiskRequest::setCacheId(const std::string& cacheId)
{
	cacheId_ = cacheId;
	setParameter("CacheId", cacheId);
}

std::string DeleteGatewayCacheDiskRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteGatewayCacheDiskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteGatewayCacheDiskRequest::getGatewayId()const
{
	return gatewayId_;
}

void DeleteGatewayCacheDiskRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}


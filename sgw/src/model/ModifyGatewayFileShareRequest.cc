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

#include <alibabacloud/sgw/model/ModifyGatewayFileShareRequest.h>

using AlibabaCloud::Sgw::Model::ModifyGatewayFileShareRequest;

ModifyGatewayFileShareRequest::ModifyGatewayFileShareRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ModifyGatewayFileShare")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGatewayFileShareRequest::~ModifyGatewayFileShareRequest()
{}

std::string ModifyGatewayFileShareRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyGatewayFileShareRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyGatewayFileShareRequest::getCacheConfig()const
{
	return cacheConfig_;
}

void ModifyGatewayFileShareRequest::setCacheConfig(const std::string& cacheConfig)
{
	cacheConfig_ = cacheConfig;
	setParameter("CacheConfig", cacheConfig);
}

std::string ModifyGatewayFileShareRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyGatewayFileShareRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyGatewayFileShareRequest::getIndexId()const
{
	return indexId_;
}

void ModifyGatewayFileShareRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

std::string ModifyGatewayFileShareRequest::getGatewayId()const
{
	return gatewayId_;
}

void ModifyGatewayFileShareRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}


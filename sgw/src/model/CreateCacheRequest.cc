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

#include <alibabacloud/sgw/model/CreateCacheRequest.h>

using AlibabaCloud::Sgw::Model::CreateCacheRequest;

CreateCacheRequest::CreateCacheRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CreateCache")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCacheRequest::~CreateCacheRequest()
{}

long CreateCacheRequest::getSizeInGB()const
{
	return sizeInGB_;
}

void CreateCacheRequest::setSizeInGB(long sizeInGB)
{
	sizeInGB_ = sizeInGB;
	setParameter("SizeInGB", std::to_string(sizeInGB));
}

std::string CreateCacheRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateCacheRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateCacheRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateCacheRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateCacheRequest::getCategory()const
{
	return category_;
}

void CreateCacheRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string CreateCacheRequest::getGatewayId()const
{
	return gatewayId_;
}

void CreateCacheRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}


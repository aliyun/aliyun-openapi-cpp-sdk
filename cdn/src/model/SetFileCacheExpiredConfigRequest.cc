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

#include <alibabacloud/cdn/model/SetFileCacheExpiredConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetFileCacheExpiredConfigRequest;

SetFileCacheExpiredConfigRequest::SetFileCacheExpiredConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetFileCacheExpiredConfig")
{}

SetFileCacheExpiredConfigRequest::~SetFileCacheExpiredConfigRequest()
{}

std::string SetFileCacheExpiredConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetFileCacheExpiredConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetFileCacheExpiredConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetFileCacheExpiredConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetFileCacheExpiredConfigRequest::getWeight()const
{
	return weight_;
}

void SetFileCacheExpiredConfigRequest::setWeight(const std::string& weight)
{
	weight_ = weight;
	setCoreParameter("Weight", weight);
}

std::string SetFileCacheExpiredConfigRequest::getCacheContent()const
{
	return cacheContent_;
}

void SetFileCacheExpiredConfigRequest::setCacheContent(const std::string& cacheContent)
{
	cacheContent_ = cacheContent;
	setCoreParameter("CacheContent", cacheContent);
}

long SetFileCacheExpiredConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetFileCacheExpiredConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetFileCacheExpiredConfigRequest::getTTL()const
{
	return tTL_;
}

void SetFileCacheExpiredConfigRequest::setTTL(const std::string& tTL)
{
	tTL_ = tTL;
	setCoreParameter("TTL", tTL);
}


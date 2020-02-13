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

#include <alibabacloud/cdn/model/SetPathCacheExpiredConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetPathCacheExpiredConfigRequest;

SetPathCacheExpiredConfigRequest::SetPathCacheExpiredConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetPathCacheExpiredConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetPathCacheExpiredConfigRequest::~SetPathCacheExpiredConfigRequest()
{}

std::string SetPathCacheExpiredConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetPathCacheExpiredConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetPathCacheExpiredConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetPathCacheExpiredConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetPathCacheExpiredConfigRequest::getWeight()const
{
	return weight_;
}

void SetPathCacheExpiredConfigRequest::setWeight(const std::string& weight)
{
	weight_ = weight;
	setParameter("Weight", weight);
}

std::string SetPathCacheExpiredConfigRequest::getCacheContent()const
{
	return cacheContent_;
}

void SetPathCacheExpiredConfigRequest::setCacheContent(const std::string& cacheContent)
{
	cacheContent_ = cacheContent;
	setParameter("CacheContent", cacheContent);
}

long SetPathCacheExpiredConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetPathCacheExpiredConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetPathCacheExpiredConfigRequest::getTTL()const
{
	return tTL_;
}

void SetPathCacheExpiredConfigRequest::setTTL(const std::string& tTL)
{
	tTL_ = tTL;
	setParameter("TTL", tTL);
}


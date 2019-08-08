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

#include <alibabacloud/cdn/model/ModifyPathCacheExpiredConfigRequest.h>

using AlibabaCloud::Cdn::Model::ModifyPathCacheExpiredConfigRequest;

ModifyPathCacheExpiredConfigRequest::ModifyPathCacheExpiredConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ModifyPathCacheExpiredConfig")
{}

ModifyPathCacheExpiredConfigRequest::~ModifyPathCacheExpiredConfigRequest()
{}

std::string ModifyPathCacheExpiredConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyPathCacheExpiredConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyPathCacheExpiredConfigRequest::getConfigID()const
{
	return configID_;
}

void ModifyPathCacheExpiredConfigRequest::setConfigID(const std::string& configID)
{
	configID_ = configID;
	setCoreParameter("ConfigID", configID);
}

std::string ModifyPathCacheExpiredConfigRequest::getDomainName()const
{
	return domainName_;
}

void ModifyPathCacheExpiredConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string ModifyPathCacheExpiredConfigRequest::getWeight()const
{
	return weight_;
}

void ModifyPathCacheExpiredConfigRequest::setWeight(const std::string& weight)
{
	weight_ = weight;
	setCoreParameter("Weight", weight);
}

std::string ModifyPathCacheExpiredConfigRequest::getCacheContent()const
{
	return cacheContent_;
}

void ModifyPathCacheExpiredConfigRequest::setCacheContent(const std::string& cacheContent)
{
	cacheContent_ = cacheContent;
	setCoreParameter("CacheContent", cacheContent);
}

long ModifyPathCacheExpiredConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyPathCacheExpiredConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyPathCacheExpiredConfigRequest::getTTL()const
{
	return tTL_;
}

void ModifyPathCacheExpiredConfigRequest::setTTL(const std::string& tTL)
{
	tTL_ = tTL;
	setCoreParameter("TTL", tTL);
}


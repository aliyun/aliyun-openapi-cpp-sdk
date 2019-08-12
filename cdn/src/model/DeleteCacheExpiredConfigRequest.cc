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

#include <alibabacloud/cdn/model/DeleteCacheExpiredConfigRequest.h>

using AlibabaCloud::Cdn::Model::DeleteCacheExpiredConfigRequest;

DeleteCacheExpiredConfigRequest::DeleteCacheExpiredConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DeleteCacheExpiredConfig")
{}

DeleteCacheExpiredConfigRequest::~DeleteCacheExpiredConfigRequest()
{}

std::string DeleteCacheExpiredConfigRequest::getCacheType()const
{
	return cacheType_;
}

void DeleteCacheExpiredConfigRequest::setCacheType(const std::string& cacheType)
{
	cacheType_ = cacheType;
	setCoreParameter("CacheType", cacheType);
}

std::string DeleteCacheExpiredConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteCacheExpiredConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteCacheExpiredConfigRequest::getConfigID()const
{
	return configID_;
}

void DeleteCacheExpiredConfigRequest::setConfigID(const std::string& configID)
{
	configID_ = configID;
	setCoreParameter("ConfigID", configID);
}

std::string DeleteCacheExpiredConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteCacheExpiredConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DeleteCacheExpiredConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteCacheExpiredConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}


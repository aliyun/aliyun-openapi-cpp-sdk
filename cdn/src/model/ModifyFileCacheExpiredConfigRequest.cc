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

#include <alibabacloud/cdn/model/ModifyFileCacheExpiredConfigRequest.h>

using AlibabaCloud::Cdn::Model::ModifyFileCacheExpiredConfigRequest;

ModifyFileCacheExpiredConfigRequest::ModifyFileCacheExpiredConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ModifyFileCacheExpiredConfig")
{}

ModifyFileCacheExpiredConfigRequest::~ModifyFileCacheExpiredConfigRequest()
{}

std::string ModifyFileCacheExpiredConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyFileCacheExpiredConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyFileCacheExpiredConfigRequest::getConfigID()const
{
	return configID_;
}

void ModifyFileCacheExpiredConfigRequest::setConfigID(const std::string& configID)
{
	configID_ = configID;
	setCoreParameter("ConfigID", configID);
}

std::string ModifyFileCacheExpiredConfigRequest::getDomainName()const
{
	return domainName_;
}

void ModifyFileCacheExpiredConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string ModifyFileCacheExpiredConfigRequest::getWeight()const
{
	return weight_;
}

void ModifyFileCacheExpiredConfigRequest::setWeight(const std::string& weight)
{
	weight_ = weight;
	setCoreParameter("Weight", weight);
}

std::string ModifyFileCacheExpiredConfigRequest::getCacheContent()const
{
	return cacheContent_;
}

void ModifyFileCacheExpiredConfigRequest::setCacheContent(const std::string& cacheContent)
{
	cacheContent_ = cacheContent;
	setCoreParameter("CacheContent", cacheContent);
}

long ModifyFileCacheExpiredConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyFileCacheExpiredConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyFileCacheExpiredConfigRequest::getTTL()const
{
	return tTL_;
}

void ModifyFileCacheExpiredConfigRequest::setTTL(const std::string& tTL)
{
	tTL_ = tTL;
	setCoreParameter("TTL", tTL);
}


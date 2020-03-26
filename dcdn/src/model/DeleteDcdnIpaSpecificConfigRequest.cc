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

#include <alibabacloud/dcdn/model/DeleteDcdnIpaSpecificConfigRequest.h>

using AlibabaCloud::Dcdn::Model::DeleteDcdnIpaSpecificConfigRequest;

DeleteDcdnIpaSpecificConfigRequest::DeleteDcdnIpaSpecificConfigRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DeleteDcdnIpaSpecificConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDcdnIpaSpecificConfigRequest::~DeleteDcdnIpaSpecificConfigRequest()
{}

std::string DeleteDcdnIpaSpecificConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteDcdnIpaSpecificConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DeleteDcdnIpaSpecificConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDcdnIpaSpecificConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDcdnIpaSpecificConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteDcdnIpaSpecificConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteDcdnIpaSpecificConfigRequest::getConfigId()const
{
	return configId_;
}

void DeleteDcdnIpaSpecificConfigRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setParameter("ConfigId", configId);
}


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

#include <alibabacloud/scdn/model/DeleteScdnSpecificConfigRequest.h>

using AlibabaCloud::Scdn::Model::DeleteScdnSpecificConfigRequest;

DeleteScdnSpecificConfigRequest::DeleteScdnSpecificConfigRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DeleteScdnSpecificConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteScdnSpecificConfigRequest::~DeleteScdnSpecificConfigRequest()
{}

std::string DeleteScdnSpecificConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteScdnSpecificConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DeleteScdnSpecificConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteScdnSpecificConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteScdnSpecificConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteScdnSpecificConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteScdnSpecificConfigRequest::getConfigId()const
{
	return configId_;
}

void DeleteScdnSpecificConfigRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", configId);
}

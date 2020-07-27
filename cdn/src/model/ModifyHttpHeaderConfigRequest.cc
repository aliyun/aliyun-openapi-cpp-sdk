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

#include <alibabacloud/cdn/model/ModifyHttpHeaderConfigRequest.h>

using AlibabaCloud::Cdn::Model::ModifyHttpHeaderConfigRequest;

ModifyHttpHeaderConfigRequest::ModifyHttpHeaderConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ModifyHttpHeaderConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyHttpHeaderConfigRequest::~ModifyHttpHeaderConfigRequest()
{}

std::string ModifyHttpHeaderConfigRequest::getHeaderValue()const
{
	return headerValue_;
}

void ModifyHttpHeaderConfigRequest::setHeaderValue(const std::string& headerValue)
{
	headerValue_ = headerValue;
	setParameter("HeaderValue", headerValue);
}

std::string ModifyHttpHeaderConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyHttpHeaderConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyHttpHeaderConfigRequest::getDomainName()const
{
	return domainName_;
}

void ModifyHttpHeaderConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long ModifyHttpHeaderConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyHttpHeaderConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyHttpHeaderConfigRequest::getConfigID()const
{
	return configID_;
}

void ModifyHttpHeaderConfigRequest::setConfigID(const std::string& configID)
{
	configID_ = configID;
	setParameter("ConfigID", configID);
}

std::string ModifyHttpHeaderConfigRequest::getHeaderKey()const
{
	return headerKey_;
}

void ModifyHttpHeaderConfigRequest::setHeaderKey(const std::string& headerKey)
{
	headerKey_ = headerKey;
	setParameter("HeaderKey", headerKey);
}


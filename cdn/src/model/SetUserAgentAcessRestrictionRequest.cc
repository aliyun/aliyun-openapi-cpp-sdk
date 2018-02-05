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

#include <alibabacloud/cdn/model/SetUserAgentAcessRestrictionRequest.h>

using AlibabaCloud::Cdn::Model::SetUserAgentAcessRestrictionRequest;

SetUserAgentAcessRestrictionRequest::SetUserAgentAcessRestrictionRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetUserAgentAcessRestriction")
{}

SetUserAgentAcessRestrictionRequest::~SetUserAgentAcessRestrictionRequest()
{}

std::string SetUserAgentAcessRestrictionRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetUserAgentAcessRestrictionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetUserAgentAcessRestrictionRequest::getDomainName()const
{
	return domainName_;
}

void SetUserAgentAcessRestrictionRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetUserAgentAcessRestrictionRequest::getUserAgent()const
{
	return userAgent_;
}

void SetUserAgentAcessRestrictionRequest::setUserAgent(const std::string& userAgent)
{
	userAgent_ = userAgent;
	setParameter("UserAgent", userAgent);
}

long SetUserAgentAcessRestrictionRequest::getOwnerId()const
{
	return ownerId_;
}

void SetUserAgentAcessRestrictionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetUserAgentAcessRestrictionRequest::getType()const
{
	return type_;
}

void SetUserAgentAcessRestrictionRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string SetUserAgentAcessRestrictionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetUserAgentAcessRestrictionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


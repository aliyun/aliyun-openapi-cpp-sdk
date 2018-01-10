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

#include <alibabacloud/cdn/model/SetLocationAccessRestrictionRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

SetLocationAccessRestrictionRequest::SetLocationAccessRestrictionRequest() :
	CdnRequest("SetLocationAccessRestriction")
{}

SetLocationAccessRestrictionRequest::~SetLocationAccessRestrictionRequest()
{}

std::string SetLocationAccessRestrictionRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetLocationAccessRestrictionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetLocationAccessRestrictionRequest::getDomainName()const
{
	return domainName_;
}

void SetLocationAccessRestrictionRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetLocationAccessRestrictionRequest::getLocation()const
{
	return location_;
}

void SetLocationAccessRestrictionRequest::setLocation(const std::string& location)
{
	location_ = location;
	setParameter("Location", location);
}

long SetLocationAccessRestrictionRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLocationAccessRestrictionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLocationAccessRestrictionRequest::getType()const
{
	return type_;
}

void SetLocationAccessRestrictionRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string SetLocationAccessRestrictionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetLocationAccessRestrictionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


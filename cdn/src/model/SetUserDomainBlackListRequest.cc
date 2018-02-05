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

#include <alibabacloud/cdn/model/SetUserDomainBlackListRequest.h>

using AlibabaCloud::Cdn::Model::SetUserDomainBlackListRequest;

SetUserDomainBlackListRequest::SetUserDomainBlackListRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetUserDomainBlackList")
{}

SetUserDomainBlackListRequest::~SetUserDomainBlackListRequest()
{}

std::string SetUserDomainBlackListRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetUserDomainBlackListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetUserDomainBlackListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetUserDomainBlackListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SetUserDomainBlackListRequest::getDomainName()const
{
	return domainName_;
}

void SetUserDomainBlackListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetUserDomainBlackListRequest::getOwnerId()const
{
	return ownerId_;
}

void SetUserDomainBlackListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetUserDomainBlackListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetUserDomainBlackListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


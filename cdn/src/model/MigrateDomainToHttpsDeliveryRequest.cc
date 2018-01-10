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

#include <alibabacloud/cdn/model/MigrateDomainToHttpsDeliveryRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

MigrateDomainToHttpsDeliveryRequest::MigrateDomainToHttpsDeliveryRequest() :
	CdnRequest("MigrateDomainToHttpsDelivery")
{}

MigrateDomainToHttpsDeliveryRequest::~MigrateDomainToHttpsDeliveryRequest()
{}

std::string MigrateDomainToHttpsDeliveryRequest::getPrivateKey()const
{
	return privateKey_;
}

void MigrateDomainToHttpsDeliveryRequest::setPrivateKey(const std::string& privateKey)
{
	privateKey_ = privateKey;
	setParameter("PrivateKey", privateKey);
}

std::string MigrateDomainToHttpsDeliveryRequest::getServerCertificate()const
{
	return serverCertificate_;
}

void MigrateDomainToHttpsDeliveryRequest::setServerCertificate(const std::string& serverCertificate)
{
	serverCertificate_ = serverCertificate;
	setParameter("ServerCertificate", serverCertificate);
}

std::string MigrateDomainToHttpsDeliveryRequest::getSecurityToken()const
{
	return securityToken_;
}

void MigrateDomainToHttpsDeliveryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string MigrateDomainToHttpsDeliveryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void MigrateDomainToHttpsDeliveryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string MigrateDomainToHttpsDeliveryRequest::getDomainName()const
{
	return domainName_;
}

void MigrateDomainToHttpsDeliveryRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long MigrateDomainToHttpsDeliveryRequest::getOwnerId()const
{
	return ownerId_;
}

void MigrateDomainToHttpsDeliveryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string MigrateDomainToHttpsDeliveryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateDomainToHttpsDeliveryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


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

#include <alibabacloud/cdn/model/SetDomainServerCertificateRequest.h>

using AlibabaCloud::Cdn::Model::SetDomainServerCertificateRequest;

SetDomainServerCertificateRequest::SetDomainServerCertificateRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetDomainServerCertificate")
{}

SetDomainServerCertificateRequest::~SetDomainServerCertificateRequest()
{}

std::string SetDomainServerCertificateRequest::getPrivateKey()const
{
	return privateKey_;
}

void SetDomainServerCertificateRequest::setPrivateKey(const std::string& privateKey)
{
	privateKey_ = privateKey;
	setCoreParameter("PrivateKey", std::to_string(privateKey));
}

std::string SetDomainServerCertificateRequest::getForceSet()const
{
	return forceSet_;
}

void SetDomainServerCertificateRequest::setForceSet(const std::string& forceSet)
{
	forceSet_ = forceSet;
	setCoreParameter("ForceSet", std::to_string(forceSet));
}

std::string SetDomainServerCertificateRequest::getServerCertificateStatus()const
{
	return serverCertificateStatus_;
}

void SetDomainServerCertificateRequest::setServerCertificateStatus(const std::string& serverCertificateStatus)
{
	serverCertificateStatus_ = serverCertificateStatus;
	setCoreParameter("ServerCertificateStatus", std::to_string(serverCertificateStatus));
}

std::string SetDomainServerCertificateRequest::getServerCertificate()const
{
	return serverCertificate_;
}

void SetDomainServerCertificateRequest::setServerCertificate(const std::string& serverCertificate)
{
	serverCertificate_ = serverCertificate;
	setCoreParameter("ServerCertificate", std::to_string(serverCertificate));
}

std::string SetDomainServerCertificateRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetDomainServerCertificateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetDomainServerCertificateRequest::getCertType()const
{
	return certType_;
}

void SetDomainServerCertificateRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setCoreParameter("CertType", std::to_string(certType));
}

std::string SetDomainServerCertificateRequest::getCertName()const
{
	return certName_;
}

void SetDomainServerCertificateRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setCoreParameter("CertName", std::to_string(certName));
}

std::string SetDomainServerCertificateRequest::getDomainName()const
{
	return domainName_;
}

void SetDomainServerCertificateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long SetDomainServerCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDomainServerCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetDomainServerCertificateRequest::getRegion()const
{
	return region_;
}

void SetDomainServerCertificateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", std::to_string(region));
}


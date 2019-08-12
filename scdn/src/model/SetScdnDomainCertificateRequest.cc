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

#include <alibabacloud/scdn/model/SetScdnDomainCertificateRequest.h>

using AlibabaCloud::Scdn::Model::SetScdnDomainCertificateRequest;

SetScdnDomainCertificateRequest::SetScdnDomainCertificateRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "SetScdnDomainCertificate")
{}

SetScdnDomainCertificateRequest::~SetScdnDomainCertificateRequest()
{}

std::string SetScdnDomainCertificateRequest::getForceSet()const
{
	return forceSet_;
}

void SetScdnDomainCertificateRequest::setForceSet(const std::string& forceSet)
{
	forceSet_ = forceSet;
	setCoreParameter("ForceSet", std::to_string(forceSet));
}

std::string SetScdnDomainCertificateRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetScdnDomainCertificateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetScdnDomainCertificateRequest::getCertType()const
{
	return certType_;
}

void SetScdnDomainCertificateRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setCoreParameter("CertType", std::to_string(certType));
}

std::string SetScdnDomainCertificateRequest::getSSLPub()const
{
	return sSLPub_;
}

void SetScdnDomainCertificateRequest::setSSLPub(const std::string& sSLPub)
{
	sSLPub_ = sSLPub;
	setCoreParameter("SSLPub", std::to_string(sSLPub));
}

std::string SetScdnDomainCertificateRequest::getCertName()const
{
	return certName_;
}

void SetScdnDomainCertificateRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setCoreParameter("CertName", std::to_string(certName));
}

std::string SetScdnDomainCertificateRequest::getSSLProtocol()const
{
	return sSLProtocol_;
}

void SetScdnDomainCertificateRequest::setSSLProtocol(const std::string& sSLProtocol)
{
	sSLProtocol_ = sSLProtocol;
	setCoreParameter("SSLProtocol", std::to_string(sSLProtocol));
}

std::string SetScdnDomainCertificateRequest::getDomainName()const
{
	return domainName_;
}

void SetScdnDomainCertificateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long SetScdnDomainCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void SetScdnDomainCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetScdnDomainCertificateRequest::getRegion()const
{
	return region_;
}

void SetScdnDomainCertificateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", std::to_string(region));
}

std::string SetScdnDomainCertificateRequest::getSSLPri()const
{
	return sSLPri_;
}

void SetScdnDomainCertificateRequest::setSSLPri(const std::string& sSLPri)
{
	sSLPri_ = sSLPri;
	setCoreParameter("SSLPri", std::to_string(sSLPri));
}


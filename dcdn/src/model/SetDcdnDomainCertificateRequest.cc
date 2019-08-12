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

#include <alibabacloud/dcdn/model/SetDcdnDomainCertificateRequest.h>

using AlibabaCloud::Dcdn::Model::SetDcdnDomainCertificateRequest;

SetDcdnDomainCertificateRequest::SetDcdnDomainCertificateRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "SetDcdnDomainCertificate")
{}

SetDcdnDomainCertificateRequest::~SetDcdnDomainCertificateRequest()
{}

std::string SetDcdnDomainCertificateRequest::getForceSet()const
{
	return forceSet_;
}

void SetDcdnDomainCertificateRequest::setForceSet(const std::string& forceSet)
{
	forceSet_ = forceSet;
	setCoreParameter("ForceSet", std::to_string(forceSet));
}

std::string SetDcdnDomainCertificateRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetDcdnDomainCertificateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetDcdnDomainCertificateRequest::getCertType()const
{
	return certType_;
}

void SetDcdnDomainCertificateRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setCoreParameter("CertType", std::to_string(certType));
}

std::string SetDcdnDomainCertificateRequest::getSSLPub()const
{
	return sSLPub_;
}

void SetDcdnDomainCertificateRequest::setSSLPub(const std::string& sSLPub)
{
	sSLPub_ = sSLPub;
	setCoreParameter("SSLPub", std::to_string(sSLPub));
}

std::string SetDcdnDomainCertificateRequest::getCertName()const
{
	return certName_;
}

void SetDcdnDomainCertificateRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setCoreParameter("CertName", std::to_string(certName));
}

std::string SetDcdnDomainCertificateRequest::getSSLProtocol()const
{
	return sSLProtocol_;
}

void SetDcdnDomainCertificateRequest::setSSLProtocol(const std::string& sSLProtocol)
{
	sSLProtocol_ = sSLProtocol;
	setCoreParameter("SSLProtocol", std::to_string(sSLProtocol));
}

std::string SetDcdnDomainCertificateRequest::getDomainName()const
{
	return domainName_;
}

void SetDcdnDomainCertificateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long SetDcdnDomainCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDcdnDomainCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetDcdnDomainCertificateRequest::getRegion()const
{
	return region_;
}

void SetDcdnDomainCertificateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", std::to_string(region));
}

std::string SetDcdnDomainCertificateRequest::getSSLPri()const
{
	return sSLPri_;
}

void SetDcdnDomainCertificateRequest::setSSLPri(const std::string& sSLPri)
{
	sSLPri_ = sSLPri;
	setCoreParameter("SSLPri", std::to_string(sSLPri));
}


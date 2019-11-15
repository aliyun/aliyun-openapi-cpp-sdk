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

#include <alibabacloud/cdn/model/BatchSetCdnDomainServerCertificateRequest.h>

using AlibabaCloud::Cdn::Model::BatchSetCdnDomainServerCertificateRequest;

BatchSetCdnDomainServerCertificateRequest::BatchSetCdnDomainServerCertificateRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "BatchSetCdnDomainServerCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

BatchSetCdnDomainServerCertificateRequest::~BatchSetCdnDomainServerCertificateRequest()
{}

std::string BatchSetCdnDomainServerCertificateRequest::getSSLProtocol()const
{
	return sSLProtocol_;
}

void BatchSetCdnDomainServerCertificateRequest::setSSLProtocol(const std::string& sSLProtocol)
{
	sSLProtocol_ = sSLProtocol;
	setCoreParameter("SSLProtocol", sSLProtocol);
}

std::string BatchSetCdnDomainServerCertificateRequest::getSecurityToken()const
{
	return securityToken_;
}

void BatchSetCdnDomainServerCertificateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string BatchSetCdnDomainServerCertificateRequest::getCertType()const
{
	return certType_;
}

void BatchSetCdnDomainServerCertificateRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setCoreParameter("CertType", certType);
}

std::string BatchSetCdnDomainServerCertificateRequest::getSSLPri()const
{
	return sSLPri_;
}

void BatchSetCdnDomainServerCertificateRequest::setSSLPri(const std::string& sSLPri)
{
	sSLPri_ = sSLPri;
	setCoreParameter("SSLPri", sSLPri);
}

std::string BatchSetCdnDomainServerCertificateRequest::getForceSet()const
{
	return forceSet_;
}

void BatchSetCdnDomainServerCertificateRequest::setForceSet(const std::string& forceSet)
{
	forceSet_ = forceSet;
	setCoreParameter("ForceSet", forceSet);
}

std::string BatchSetCdnDomainServerCertificateRequest::getCertName()const
{
	return certName_;
}

void BatchSetCdnDomainServerCertificateRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setCoreParameter("CertName", certName);
}

std::string BatchSetCdnDomainServerCertificateRequest::getDomainName()const
{
	return domainName_;
}

void BatchSetCdnDomainServerCertificateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long BatchSetCdnDomainServerCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchSetCdnDomainServerCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchSetCdnDomainServerCertificateRequest::getSSLPub()const
{
	return sSLPub_;
}

void BatchSetCdnDomainServerCertificateRequest::setSSLPub(const std::string& sSLPub)
{
	sSLPub_ = sSLPub;
	setCoreParameter("SSLPub", sSLPub);
}

std::string BatchSetCdnDomainServerCertificateRequest::getRegion()const
{
	return region_;
}

void BatchSetCdnDomainServerCertificateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}


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

#include <alibabacloud/vod/model/SetVodDomainCertificateRequest.h>

using AlibabaCloud::Vod::Model::SetVodDomainCertificateRequest;

SetVodDomainCertificateRequest::SetVodDomainCertificateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SetVodDomainCertificate")
{}

SetVodDomainCertificateRequest::~SetVodDomainCertificateRequest()
{}

std::string SetVodDomainCertificateRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetVodDomainCertificateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetVodDomainCertificateRequest::getSSLPub()const
{
	return sSLPub_;
}

void SetVodDomainCertificateRequest::setSSLPub(const std::string& sSLPub)
{
	sSLPub_ = sSLPub;
	setCoreParameter("SSLPub", std::to_string(sSLPub));
}

std::string SetVodDomainCertificateRequest::getCertName()const
{
	return certName_;
}

void SetVodDomainCertificateRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setCoreParameter("CertName", std::to_string(certName));
}

std::string SetVodDomainCertificateRequest::getSSLProtocol()const
{
	return sSLProtocol_;
}

void SetVodDomainCertificateRequest::setSSLProtocol(const std::string& sSLProtocol)
{
	sSLProtocol_ = sSLProtocol;
	setCoreParameter("SSLProtocol", std::to_string(sSLProtocol));
}

std::string SetVodDomainCertificateRequest::getDomainName()const
{
	return domainName_;
}

void SetVodDomainCertificateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long SetVodDomainCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void SetVodDomainCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetVodDomainCertificateRequest::getRegion()const
{
	return region_;
}

void SetVodDomainCertificateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", std::to_string(region));
}

std::string SetVodDomainCertificateRequest::getSSLPri()const
{
	return sSLPri_;
}

void SetVodDomainCertificateRequest::setSSLPri(const std::string& sSLPri)
{
	sSLPri_ = sSLPri;
	setCoreParameter("SSLPri", std::to_string(sSLPri));
}


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

#include <alibabacloud/scdn/model/SetDomainServerCertificateRequest.h>

using AlibabaCloud::Scdn::Model::SetDomainServerCertificateRequest;

SetDomainServerCertificateRequest::SetDomainServerCertificateRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "SetDomainServerCertificate")
{}

SetDomainServerCertificateRequest::~SetDomainServerCertificateRequest()
{}

std::string SetDomainServerCertificateRequest::getSSLProtocol()const
{
	return sSLProtocol_;
}

void SetDomainServerCertificateRequest::setSSLProtocol(const std::string& sSLProtocol)
{
	sSLProtocol_ = sSLProtocol;
	setCoreParameter("SSLProtocol", sSLProtocol);
}

std::string SetDomainServerCertificateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetDomainServerCertificateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetDomainServerCertificateRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetDomainServerCertificateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetDomainServerCertificateRequest::getSSLPri()const
{
	return sSLPri_;
}

void SetDomainServerCertificateRequest::setSSLPri(const std::string& sSLPri)
{
	sSLPri_ = sSLPri;
	setCoreParameter("SSLPri", sSLPri);
}

std::string SetDomainServerCertificateRequest::getCertName()const
{
	return certName_;
}

void SetDomainServerCertificateRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setCoreParameter("CertName", certName);
}

std::string SetDomainServerCertificateRequest::getDomainName()const
{
	return domainName_;
}

void SetDomainServerCertificateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long SetDomainServerCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDomainServerCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetDomainServerCertificateRequest::getSSLPub()const
{
	return sSLPub_;
}

void SetDomainServerCertificateRequest::setSSLPub(const std::string& sSLPub)
{
	sSLPub_ = sSLPub;
	setCoreParameter("SSLPub", sSLPub);
}

std::string SetDomainServerCertificateRequest::getRegion()const
{
	return region_;
}

void SetDomainServerCertificateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}


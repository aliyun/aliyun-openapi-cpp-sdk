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

#include <alibabacloud/vs/model/SetVsDomainCertificateRequest.h>

using AlibabaCloud::Vs::Model::SetVsDomainCertificateRequest;

SetVsDomainCertificateRequest::SetVsDomainCertificateRequest() :
	RpcServiceRequest("vs", "2018-12-12", "SetVsDomainCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

SetVsDomainCertificateRequest::~SetVsDomainCertificateRequest()
{}

std::string SetVsDomainCertificateRequest::getSSLProtocol()const
{
	return sSLProtocol_;
}

void SetVsDomainCertificateRequest::setSSLProtocol(const std::string& sSLProtocol)
{
	sSLProtocol_ = sSLProtocol;
	setParameter("SSLProtocol", sSLProtocol);
}

std::string SetVsDomainCertificateRequest::getCertType()const
{
	return certType_;
}

void SetVsDomainCertificateRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setParameter("CertType", certType);
}

std::string SetVsDomainCertificateRequest::getShowLog()const
{
	return showLog_;
}

void SetVsDomainCertificateRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string SetVsDomainCertificateRequest::getSSLPri()const
{
	return sSLPri_;
}

void SetVsDomainCertificateRequest::setSSLPri(const std::string& sSLPri)
{
	sSLPri_ = sSLPri;
	setParameter("SSLPri", sSLPri);
}

std::string SetVsDomainCertificateRequest::getForceSet()const
{
	return forceSet_;
}

void SetVsDomainCertificateRequest::setForceSet(const std::string& forceSet)
{
	forceSet_ = forceSet;
	setParameter("ForceSet", forceSet);
}

std::string SetVsDomainCertificateRequest::getCertName()const
{
	return certName_;
}

void SetVsDomainCertificateRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setParameter("CertName", certName);
}

std::string SetVsDomainCertificateRequest::getDomainName()const
{
	return domainName_;
}

void SetVsDomainCertificateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetVsDomainCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void SetVsDomainCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetVsDomainCertificateRequest::getSSLPub()const
{
	return sSLPub_;
}

void SetVsDomainCertificateRequest::setSSLPub(const std::string& sSLPub)
{
	sSLPub_ = sSLPub;
	setParameter("SSLPub", sSLPub);
}

std::string SetVsDomainCertificateRequest::getRegion()const
{
	return region_;
}

void SetVsDomainCertificateRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}


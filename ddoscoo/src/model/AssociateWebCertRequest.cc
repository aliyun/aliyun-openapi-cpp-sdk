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

#include <alibabacloud/ddoscoo/model/AssociateWebCertRequest.h>

using AlibabaCloud::Ddoscoo::Model::AssociateWebCertRequest;

AssociateWebCertRequest::AssociateWebCertRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "AssociateWebCert")
{
	setMethod(HttpRequest::Method::Post);
}

AssociateWebCertRequest::~AssociateWebCertRequest()
{}

std::string AssociateWebCertRequest::getCert()const
{
	return cert_;
}

void AssociateWebCertRequest::setCert(const std::string& cert)
{
	cert_ = cert;
	setParameter("Cert", cert);
}

int AssociateWebCertRequest::getCertId()const
{
	return certId_;
}

void AssociateWebCertRequest::setCertId(int certId)
{
	certId_ = certId;
	setParameter("CertId", std::to_string(certId));
}

std::string AssociateWebCertRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AssociateWebCertRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AssociateWebCertRequest::getSourceIp()const
{
	return sourceIp_;
}

void AssociateWebCertRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string AssociateWebCertRequest::getKey()const
{
	return key_;
}

void AssociateWebCertRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

std::string AssociateWebCertRequest::getCertName()const
{
	return certName_;
}

void AssociateWebCertRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setParameter("CertName", certName);
}

std::string AssociateWebCertRequest::getDomain()const
{
	return domain_;
}

void AssociateWebCertRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}


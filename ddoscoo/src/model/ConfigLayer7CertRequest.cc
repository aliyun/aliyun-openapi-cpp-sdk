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

#include <alibabacloud/ddoscoo/model/ConfigLayer7CertRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigLayer7CertRequest;

ConfigLayer7CertRequest::ConfigLayer7CertRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ConfigLayer7Cert")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigLayer7CertRequest::~ConfigLayer7CertRequest()
{}

std::string ConfigLayer7CertRequest::getCert()const
{
	return cert_;
}

void ConfigLayer7CertRequest::setCert(const std::string& cert)
{
	cert_ = cert;
	setParameter("Cert", cert);
}

int ConfigLayer7CertRequest::getCertId()const
{
	return certId_;
}

void ConfigLayer7CertRequest::setCertId(int certId)
{
	certId_ = certId;
	setParameter("CertId", std::to_string(certId));
}

std::string ConfigLayer7CertRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ConfigLayer7CertRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ConfigLayer7CertRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigLayer7CertRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ConfigLayer7CertRequest::getKey()const
{
	return key_;
}

void ConfigLayer7CertRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

std::string ConfigLayer7CertRequest::getCertName()const
{
	return certName_;
}

void ConfigLayer7CertRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setParameter("CertName", certName);
}

std::string ConfigLayer7CertRequest::getDomain()const
{
	return domain_;
}

void ConfigLayer7CertRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}


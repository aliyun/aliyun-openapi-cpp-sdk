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

#include <alibabacloud/waf-openapi/model/CreateCertificateRequest.h>

using AlibabaCloud::Waf_openapi::Model::CreateCertificateRequest;

CreateCertificateRequest::CreateCertificateRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "CreateCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCertificateRequest::~CreateCertificateRequest()
{}

std::string CreateCertificateRequest::getCertificate()const
{
	return certificate_;
}

void CreateCertificateRequest::setCertificate(const std::string& certificate)
{
	certificate_ = certificate;
	setParameter("Certificate", certificate);
}

std::string CreateCertificateRequest::getPrivateKey()const
{
	return privateKey_;
}

void CreateCertificateRequest::setPrivateKey(const std::string& privateKey)
{
	privateKey_ = privateKey;
	setParameter("PrivateKey", privateKey);
}

std::string CreateCertificateRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCertificateRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateCertificateRequest::getLang()const
{
	return lang_;
}

void CreateCertificateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateCertificateRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateCertificateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateCertificateRequest::getDomain()const
{
	return domain_;
}

void CreateCertificateRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string CreateCertificateRequest::getCertificateName()const
{
	return certificateName_;
}

void CreateCertificateRequest::setCertificateName(const std::string& certificateName)
{
	certificateName_ = certificateName;
	setParameter("CertificateName", certificateName);
}

long CreateCertificateRequest::getHttpsCertId()const
{
	return httpsCertId_;
}

void CreateCertificateRequest::setHttpsCertId(long httpsCertId)
{
	httpsCertId_ = httpsCertId;
	setParameter("HttpsCertId", std::to_string(httpsCertId));
}


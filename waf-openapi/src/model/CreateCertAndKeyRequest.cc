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

#include <alibabacloud/waf-openapi/model/CreateCertAndKeyRequest.h>

using AlibabaCloud::Waf_openapi::Model::CreateCertAndKeyRequest;

CreateCertAndKeyRequest::CreateCertAndKeyRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "CreateCertAndKey")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCertAndKeyRequest::~CreateCertAndKeyRequest()
{}

std::string CreateCertAndKeyRequest::getCert()const
{
	return cert_;
}

void CreateCertAndKeyRequest::setCert(const std::string& cert)
{
	cert_ = cert;
	setParameter("Cert", cert);
}

std::string CreateCertAndKeyRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCertAndKeyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateCertAndKeyRequest::getHttpsCertName()const
{
	return httpsCertName_;
}

void CreateCertAndKeyRequest::setHttpsCertName(const std::string& httpsCertName)
{
	httpsCertName_ = httpsCertName;
	setParameter("HttpsCertName", httpsCertName);
}

std::string CreateCertAndKeyRequest::getLang()const
{
	return lang_;
}

void CreateCertAndKeyRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateCertAndKeyRequest::getKey()const
{
	return key_;
}

void CreateCertAndKeyRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

std::string CreateCertAndKeyRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateCertAndKeyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateCertAndKeyRequest::getDomain()const
{
	return domain_;
}

void CreateCertAndKeyRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string CreateCertAndKeyRequest::getRegion()const
{
	return region_;
}

void CreateCertAndKeyRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}


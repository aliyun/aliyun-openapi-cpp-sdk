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

#include <alibabacloud/cas/model/CreateCertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateCertificateRequest;

CreateCertificateRequest::CreateCertificateRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateCertificate")
{}

CreateCertificateRequest::~CreateCertificateRequest()
{}

std::string CreateCertificateRequest::getCert()const
{
	return cert_;
}

void CreateCertificateRequest::setCert(const std::string& cert)
{
	cert_ = cert;
	setCoreParameter("Cert", cert);
}

std::string CreateCertificateRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateCertificateRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateCertificateRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCertificateRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateCertificateRequest::getLang()const
{
	return lang_;
}

void CreateCertificateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateCertificateRequest::getKey()const
{
	return key_;
}

void CreateCertificateRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", key);
}

std::string CreateCertificateRequest::getName()const
{
	return name_;
}

void CreateCertificateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}


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

#include <alibabacloud/cas/model/CreateCertificateNameRequest.h>

using AlibabaCloud::Cas::Model::CreateCertificateNameRequest;

CreateCertificateNameRequest::CreateCertificateNameRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateCertificateName")
{}

CreateCertificateNameRequest::~CreateCertificateNameRequest()
{}

std::string CreateCertificateNameRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCertificateNameRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

long CreateCertificateNameRequest::getCertificateId()const
{
	return certificateId_;
}

void CreateCertificateNameRequest::setCertificateId(long certificateId)
{
	certificateId_ = certificateId;
	setCoreParameter("CertificateId", certificateId);
}

std::string CreateCertificateNameRequest::getName()const
{
	return name_;
}

void CreateCertificateNameRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateCertificateNameRequest::getLang()const
{
	return lang_;
}

void CreateCertificateNameRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}


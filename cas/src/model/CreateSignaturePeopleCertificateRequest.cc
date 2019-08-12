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

#include <alibabacloud/cas/model/CreateSignaturePeopleCertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateSignaturePeopleCertificateRequest;

CreateSignaturePeopleCertificateRequest::CreateSignaturePeopleCertificateRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateSignaturePeopleCertificate")
{}

CreateSignaturePeopleCertificateRequest::~CreateSignaturePeopleCertificateRequest()
{}

std::string CreateSignaturePeopleCertificateRequest::getPeopleName()const
{
	return peopleName_;
}

void CreateSignaturePeopleCertificateRequest::setPeopleName(const std::string& peopleName)
{
	peopleName_ = peopleName;
	setCoreParameter("PeopleName", std::to_string(peopleName));
}

std::string CreateSignaturePeopleCertificateRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateSignaturePeopleCertificateRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string CreateSignaturePeopleCertificateRequest::getMobile()const
{
	return mobile_;
}

void CreateSignaturePeopleCertificateRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setCoreParameter("Mobile", std::to_string(mobile));
}

std::string CreateSignaturePeopleCertificateRequest::getIdentityNumber()const
{
	return identityNumber_;
}

void CreateSignaturePeopleCertificateRequest::setIdentityNumber(const std::string& identityNumber)
{
	identityNumber_ = identityNumber;
	setCoreParameter("IdentityNumber", std::to_string(identityNumber));
}

std::string CreateSignaturePeopleCertificateRequest::getLang()const
{
	return lang_;
}

void CreateSignaturePeopleCertificateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string CreateSignaturePeopleCertificateRequest::getEmail()const
{
	return email_;
}

void CreateSignaturePeopleCertificateRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", std::to_string(email));
}


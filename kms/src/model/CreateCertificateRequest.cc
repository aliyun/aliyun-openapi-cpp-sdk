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

#include <alibabacloud/kms/model/CreateCertificateRequest.h>

using AlibabaCloud::Kms::Model::CreateCertificateRequest;

CreateCertificateRequest::CreateCertificateRequest() :
	RpcServiceRequest("kms", "2016-01-20", "CreateCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCertificateRequest::~CreateCertificateRequest()
{}

std::string CreateCertificateRequest::getProtectionLevel()const
{
	return protectionLevel_;
}

void CreateCertificateRequest::setProtectionLevel(const std::string& protectionLevel)
{
	protectionLevel_ = protectionLevel;
	setParameter("ProtectionLevel", protectionLevel);
}

std::string CreateCertificateRequest::getSubject()const
{
	return subject_;
}

void CreateCertificateRequest::setSubject(const std::string& subject)
{
	subject_ = subject;
	setParameter("Subject", subject);
}

std::map<std::string, std::string> CreateCertificateRequest::getSubjectAlternativeNames()const
{
	return subjectAlternativeNames_;
}

void CreateCertificateRequest::setSubjectAlternativeNames(const std::map<std::string, std::string>& subjectAlternativeNames)
{
	subjectAlternativeNames_ = subjectAlternativeNames;
	setJsonParameters("SubjectAlternativeNames", subjectAlternativeNames);
}

std::string CreateCertificateRequest::getKeySpec()const
{
	return keySpec_;
}

void CreateCertificateRequest::setKeySpec(const std::string& keySpec)
{
	keySpec_ = keySpec;
	setParameter("KeySpec", keySpec);
}


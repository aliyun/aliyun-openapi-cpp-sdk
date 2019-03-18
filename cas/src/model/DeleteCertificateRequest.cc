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

#include <alibabacloud/cas/model/DeleteCertificateRequest.h>

using AlibabaCloud::Cas::Model::DeleteCertificateRequest;

DeleteCertificateRequest::DeleteCertificateRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DeleteCertificate")
{}

DeleteCertificateRequest::~DeleteCertificateRequest()
{}

std::string DeleteCertificateRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteCertificateRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DeleteCertificateRequest::getCertificateId()const
{
	return certificateId_;
}

void DeleteCertificateRequest::setCertificateId(long certificateId)
{
	certificateId_ = certificateId;
	setParameter("CertificateId", std::to_string(certificateId));
}

std::string DeleteCertificateRequest::getLang()const
{
	return lang_;
}

void DeleteCertificateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}


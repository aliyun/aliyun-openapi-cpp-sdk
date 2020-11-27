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

#include <alibabacloud/kms/model/ImportCertificateRequest.h>

using AlibabaCloud::Kms::Model::ImportCertificateRequest;

ImportCertificateRequest::ImportCertificateRequest() :
	RpcServiceRequest("kms", "2016-01-20", "ImportCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

ImportCertificateRequest::~ImportCertificateRequest()
{}

std::string ImportCertificateRequest::getPKCS12Blob()const
{
	return pKCS12Blob_;
}

void ImportCertificateRequest::setPKCS12Blob(const std::string& pKCS12Blob)
{
	pKCS12Blob_ = pKCS12Blob;
	setParameter("PKCS12Blob", pKCS12Blob);
}

std::string ImportCertificateRequest::getPassphrase()const
{
	return passphrase_;
}

void ImportCertificateRequest::setPassphrase(const std::string& passphrase)
{
	passphrase_ = passphrase;
	setParameter("Passphrase", passphrase);
}


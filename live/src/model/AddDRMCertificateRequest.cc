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

#include <alibabacloud/live/model/AddDRMCertificateRequest.h>

using AlibabaCloud::Live::Model::AddDRMCertificateRequest;

AddDRMCertificateRequest::AddDRMCertificateRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddDRMCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

AddDRMCertificateRequest::~AddDRMCertificateRequest()
{}

std::string AddDRMCertificateRequest::getServCert()const
{
	return servCert_;
}

void AddDRMCertificateRequest::setServCert(const std::string& servCert)
{
	servCert_ = servCert;
	setParameter("ServCert", servCert);
}

std::string AddDRMCertificateRequest::getDescription()const
{
	return description_;
}

void AddDRMCertificateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AddDRMCertificateRequest::getPrivateKey()const
{
	return privateKey_;
}

void AddDRMCertificateRequest::setPrivateKey(const std::string& privateKey)
{
	privateKey_ = privateKey;
	setParameter("PrivateKey", privateKey);
}

std::string AddDRMCertificateRequest::getCertName()const
{
	return certName_;
}

void AddDRMCertificateRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setParameter("CertName", certName);
}

long AddDRMCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void AddDRMCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddDRMCertificateRequest::getAsk()const
{
	return ask_;
}

void AddDRMCertificateRequest::setAsk(const std::string& ask)
{
	ask_ = ask;
	setParameter("Ask", ask);
}

std::string AddDRMCertificateRequest::getPassphrase()const
{
	return passphrase_;
}

void AddDRMCertificateRequest::setPassphrase(const std::string& passphrase)
{
	passphrase_ = passphrase;
	setParameter("Passphrase", passphrase);
}


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

#include <alibabacloud/kms/model/ImportEncryptionCertificateRequest.h>

using AlibabaCloud::Kms::Model::ImportEncryptionCertificateRequest;

ImportEncryptionCertificateRequest::ImportEncryptionCertificateRequest() :
	RpcServiceRequest("kms", "2016-01-20", "ImportEncryptionCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

ImportEncryptionCertificateRequest::~ImportEncryptionCertificateRequest()
{}

std::string ImportEncryptionCertificateRequest::getAsymmetricAlgorithm()const
{
	return asymmetricAlgorithm_;
}

void ImportEncryptionCertificateRequest::setAsymmetricAlgorithm(const std::string& asymmetricAlgorithm)
{
	asymmetricAlgorithm_ = asymmetricAlgorithm;
	setParameter("AsymmetricAlgorithm", asymmetricAlgorithm);
}

std::string ImportEncryptionCertificateRequest::getSymmetricAlgorithm()const
{
	return symmetricAlgorithm_;
}

void ImportEncryptionCertificateRequest::setSymmetricAlgorithm(const std::string& symmetricAlgorithm)
{
	symmetricAlgorithm_ = symmetricAlgorithm;
	setParameter("SymmetricAlgorithm", symmetricAlgorithm);
}

std::string ImportEncryptionCertificateRequest::getEncryptedPrivateKey()const
{
	return encryptedPrivateKey_;
}

void ImportEncryptionCertificateRequest::setEncryptedPrivateKey(const std::string& encryptedPrivateKey)
{
	encryptedPrivateKey_ = encryptedPrivateKey;
	setParameter("EncryptedPrivateKey", encryptedPrivateKey);
}

std::string ImportEncryptionCertificateRequest::getEncryptedSymmetricKey()const
{
	return encryptedSymmetricKey_;
}

void ImportEncryptionCertificateRequest::setEncryptedSymmetricKey(const std::string& encryptedSymmetricKey)
{
	encryptedSymmetricKey_ = encryptedSymmetricKey;
	setParameter("EncryptedSymmetricKey", encryptedSymmetricKey);
}

std::string ImportEncryptionCertificateRequest::getCertificateId()const
{
	return certificateId_;
}

void ImportEncryptionCertificateRequest::setCertificateId(const std::string& certificateId)
{
	certificateId_ = certificateId;
	setParameter("CertificateId", certificateId);
}

std::string ImportEncryptionCertificateRequest::getCertificate()const
{
	return certificate_;
}

void ImportEncryptionCertificateRequest::setCertificate(const std::string& certificate)
{
	certificate_ = certificate;
	setParameter("Certificate", certificate);
}

std::string ImportEncryptionCertificateRequest::getCertificateChain()const
{
	return certificateChain_;
}

void ImportEncryptionCertificateRequest::setCertificateChain(const std::string& certificateChain)
{
	certificateChain_ = certificateChain;
	setParameter("CertificateChain", certificateChain);
}


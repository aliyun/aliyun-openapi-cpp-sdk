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

#include <alibabacloud/kms/model/CertificatePublicKeyEncryptRequest.h>

using AlibabaCloud::Kms::Model::CertificatePublicKeyEncryptRequest;

CertificatePublicKeyEncryptRequest::CertificatePublicKeyEncryptRequest()
    : RpcServiceRequest("kms", "2016-01-20", "CertificatePublicKeyEncrypt") {
  setMethod(HttpRequest::Method::Post);
}

CertificatePublicKeyEncryptRequest::~CertificatePublicKeyEncryptRequest() {}

std::string CertificatePublicKeyEncryptRequest::getCertificateId() const {
  return certificateId_;
}

void CertificatePublicKeyEncryptRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string CertificatePublicKeyEncryptRequest::getPlaintext() const {
  return plaintext_;
}

void CertificatePublicKeyEncryptRequest::setPlaintext(const std::string &plaintext) {
  plaintext_ = plaintext;
  setParameter(std::string("Plaintext"), plaintext);
}

std::string CertificatePublicKeyEncryptRequest::getAlgorithm() const {
  return algorithm_;
}

void CertificatePublicKeyEncryptRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}


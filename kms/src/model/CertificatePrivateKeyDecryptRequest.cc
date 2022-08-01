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

#include <alibabacloud/kms/model/CertificatePrivateKeyDecryptRequest.h>

using AlibabaCloud::Kms::Model::CertificatePrivateKeyDecryptRequest;

CertificatePrivateKeyDecryptRequest::CertificatePrivateKeyDecryptRequest()
    : RpcServiceRequest("kms", "2016-01-20", "CertificatePrivateKeyDecrypt") {
  setMethod(HttpRequest::Method::Post);
}

CertificatePrivateKeyDecryptRequest::~CertificatePrivateKeyDecryptRequest() {}

std::string CertificatePrivateKeyDecryptRequest::getCertificateId() const {
  return certificateId_;
}

void CertificatePrivateKeyDecryptRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string CertificatePrivateKeyDecryptRequest::getAlgorithm() const {
  return algorithm_;
}

void CertificatePrivateKeyDecryptRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string CertificatePrivateKeyDecryptRequest::getCiphertextBlob() const {
  return ciphertextBlob_;
}

void CertificatePrivateKeyDecryptRequest::setCiphertextBlob(const std::string &ciphertextBlob) {
  ciphertextBlob_ = ciphertextBlob;
  setParameter(std::string("CiphertextBlob"), ciphertextBlob);
}


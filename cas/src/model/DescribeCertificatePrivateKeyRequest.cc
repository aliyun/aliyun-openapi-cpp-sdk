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

#include <alibabacloud/cas/model/DescribeCertificatePrivateKeyRequest.h>

using AlibabaCloud::Cas::Model::DescribeCertificatePrivateKeyRequest;

DescribeCertificatePrivateKeyRequest::DescribeCertificatePrivateKeyRequest()
    : RpcServiceRequest("cas", "2020-06-30", "DescribeCertificatePrivateKey") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCertificatePrivateKeyRequest::~DescribeCertificatePrivateKeyRequest() {}

std::string DescribeCertificatePrivateKeyRequest::getIdentifier() const {
  return identifier_;
}

void DescribeCertificatePrivateKeyRequest::setIdentifier(const std::string &identifier) {
  identifier_ = identifier;
  setParameter(std::string("Identifier"), identifier);
}

std::string DescribeCertificatePrivateKeyRequest::getEncryptedCode() const {
  return encryptedCode_;
}

void DescribeCertificatePrivateKeyRequest::setEncryptedCode(const std::string &encryptedCode) {
  encryptedCode_ = encryptedCode;
  setParameter(std::string("EncryptedCode"), encryptedCode);
}


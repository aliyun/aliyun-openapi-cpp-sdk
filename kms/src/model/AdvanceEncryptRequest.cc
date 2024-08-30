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

#include <alibabacloud/kms/model/AdvanceEncryptRequest.h>

using AlibabaCloud::Kms::Model::AdvanceEncryptRequest;

AdvanceEncryptRequest::AdvanceEncryptRequest()
    : RpcServiceRequest("kms", "2016-01-20", "AdvanceEncrypt") {
  setMethod(HttpRequest::Method::Post);
}

AdvanceEncryptRequest::~AdvanceEncryptRequest() {}

std::string AdvanceEncryptRequest::getPaddingMode() const {
  return paddingMode_;
}

void AdvanceEncryptRequest::setPaddingMode(const std::string &paddingMode) {
  paddingMode_ = paddingMode;
  setParameter(std::string("PaddingMode"), paddingMode);
}

std::string AdvanceEncryptRequest::getAad() const {
  return aad_;
}

void AdvanceEncryptRequest::setAad(const std::string &aad) {
  aad_ = aad;
  setParameter(std::string("Aad"), aad);
}

std::string AdvanceEncryptRequest::getKeyId() const {
  return keyId_;
}

void AdvanceEncryptRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string AdvanceEncryptRequest::getPlaintext() const {
  return plaintext_;
}

void AdvanceEncryptRequest::setPlaintext(const std::string &plaintext) {
  plaintext_ = plaintext;
  setParameter(std::string("Plaintext"), plaintext);
}

std::string AdvanceEncryptRequest::getIv() const {
  return iv_;
}

void AdvanceEncryptRequest::setIv(const std::string &iv) {
  iv_ = iv;
  setParameter(std::string("Iv"), iv);
}

std::string AdvanceEncryptRequest::getAlgorithm() const {
  return algorithm_;
}

void AdvanceEncryptRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}


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

#include <alibabacloud/kms/model/AsymmetricEncryptRequest.h>

using AlibabaCloud::Kms::Model::AsymmetricEncryptRequest;

AsymmetricEncryptRequest::AsymmetricEncryptRequest()
    : RpcServiceRequest("kms", "2016-01-20", "AsymmetricEncrypt") {
  setMethod(HttpRequest::Method::Post);
}

AsymmetricEncryptRequest::~AsymmetricEncryptRequest() {}

std::string AsymmetricEncryptRequest::getDryRun() const {
  return dryRun_;
}

void AsymmetricEncryptRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string AsymmetricEncryptRequest::getKeyVersionId() const {
  return keyVersionId_;
}

void AsymmetricEncryptRequest::setKeyVersionId(const std::string &keyVersionId) {
  keyVersionId_ = keyVersionId;
  setParameter(std::string("KeyVersionId"), keyVersionId);
}

std::string AsymmetricEncryptRequest::getKeyId() const {
  return keyId_;
}

void AsymmetricEncryptRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string AsymmetricEncryptRequest::getPlaintext() const {
  return plaintext_;
}

void AsymmetricEncryptRequest::setPlaintext(const std::string &plaintext) {
  plaintext_ = plaintext;
  setParameter(std::string("Plaintext"), plaintext);
}

std::string AsymmetricEncryptRequest::getAlgorithm() const {
  return algorithm_;
}

void AsymmetricEncryptRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}


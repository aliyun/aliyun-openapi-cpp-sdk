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

#include <alibabacloud/kms/model/AsymmetricDecryptRequest.h>

using AlibabaCloud::Kms::Model::AsymmetricDecryptRequest;

AsymmetricDecryptRequest::AsymmetricDecryptRequest()
    : RpcServiceRequest("kms", "2016-01-20", "AsymmetricDecrypt") {
  setMethod(HttpRequest::Method::Post);
}

AsymmetricDecryptRequest::~AsymmetricDecryptRequest() {}

std::string AsymmetricDecryptRequest::getDryRun() const {
  return dryRun_;
}

void AsymmetricDecryptRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string AsymmetricDecryptRequest::getKeyVersionId() const {
  return keyVersionId_;
}

void AsymmetricDecryptRequest::setKeyVersionId(const std::string &keyVersionId) {
  keyVersionId_ = keyVersionId;
  setParameter(std::string("KeyVersionId"), keyVersionId);
}

std::string AsymmetricDecryptRequest::getKeyId() const {
  return keyId_;
}

void AsymmetricDecryptRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string AsymmetricDecryptRequest::getCiphertextBlob() const {
  return ciphertextBlob_;
}

void AsymmetricDecryptRequest::setCiphertextBlob(const std::string &ciphertextBlob) {
  ciphertextBlob_ = ciphertextBlob;
  setParameter(std::string("CiphertextBlob"), ciphertextBlob);
}

std::string AsymmetricDecryptRequest::getAlgorithm() const {
  return algorithm_;
}

void AsymmetricDecryptRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}


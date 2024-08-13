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

#include <alibabacloud/kms/model/AsymmetricSignRequest.h>

using AlibabaCloud::Kms::Model::AsymmetricSignRequest;

AsymmetricSignRequest::AsymmetricSignRequest()
    : RpcServiceRequest("kms", "2016-01-20", "AsymmetricSign") {
  setMethod(HttpRequest::Method::Post);
}

AsymmetricSignRequest::~AsymmetricSignRequest() {}

std::string AsymmetricSignRequest::getDryRun() const {
  return dryRun_;
}

void AsymmetricSignRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string AsymmetricSignRequest::getKeyVersionId() const {
  return keyVersionId_;
}

void AsymmetricSignRequest::setKeyVersionId(const std::string &keyVersionId) {
  keyVersionId_ = keyVersionId;
  setParameter(std::string("KeyVersionId"), keyVersionId);
}

std::string AsymmetricSignRequest::getKeyId() const {
  return keyId_;
}

void AsymmetricSignRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string AsymmetricSignRequest::getDigest() const {
  return digest_;
}

void AsymmetricSignRequest::setDigest(const std::string &digest) {
  digest_ = digest;
  setParameter(std::string("Digest"), digest);
}

std::string AsymmetricSignRequest::getAlgorithm() const {
  return algorithm_;
}

void AsymmetricSignRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}


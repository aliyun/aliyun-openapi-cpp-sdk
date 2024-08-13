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

#include <alibabacloud/kms/model/AsymmetricVerifyRequest.h>

using AlibabaCloud::Kms::Model::AsymmetricVerifyRequest;

AsymmetricVerifyRequest::AsymmetricVerifyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "AsymmetricVerify") {
  setMethod(HttpRequest::Method::Post);
}

AsymmetricVerifyRequest::~AsymmetricVerifyRequest() {}

std::string AsymmetricVerifyRequest::getDryRun() const {
  return dryRun_;
}

void AsymmetricVerifyRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string AsymmetricVerifyRequest::getKeyVersionId() const {
  return keyVersionId_;
}

void AsymmetricVerifyRequest::setKeyVersionId(const std::string &keyVersionId) {
  keyVersionId_ = keyVersionId;
  setParameter(std::string("KeyVersionId"), keyVersionId);
}

std::string AsymmetricVerifyRequest::getKeyId() const {
  return keyId_;
}

void AsymmetricVerifyRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string AsymmetricVerifyRequest::getDigest() const {
  return digest_;
}

void AsymmetricVerifyRequest::setDigest(const std::string &digest) {
  digest_ = digest;
  setParameter(std::string("Digest"), digest);
}

std::string AsymmetricVerifyRequest::getValue() const {
  return value_;
}

void AsymmetricVerifyRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string AsymmetricVerifyRequest::getAlgorithm() const {
  return algorithm_;
}

void AsymmetricVerifyRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}


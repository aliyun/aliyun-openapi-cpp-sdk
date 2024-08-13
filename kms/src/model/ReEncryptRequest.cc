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

#include <alibabacloud/kms/model/ReEncryptRequest.h>

using AlibabaCloud::Kms::Model::ReEncryptRequest;

ReEncryptRequest::ReEncryptRequest()
    : RpcServiceRequest("kms", "2016-01-20", "ReEncrypt") {
  setMethod(HttpRequest::Method::Post);
}

ReEncryptRequest::~ReEncryptRequest() {}

std::string ReEncryptRequest::getDestinationEncryptionContext() const {
  return destinationEncryptionContext_;
}

void ReEncryptRequest::setDestinationEncryptionContext(const std::string &destinationEncryptionContext) {
  destinationEncryptionContext_ = destinationEncryptionContext;
  setParameter(std::string("DestinationEncryptionContext"), destinationEncryptionContext);
}

std::string ReEncryptRequest::getDryRun() const {
  return dryRun_;
}

void ReEncryptRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string ReEncryptRequest::getSourceKeyId() const {
  return sourceKeyId_;
}

void ReEncryptRequest::setSourceKeyId(const std::string &sourceKeyId) {
  sourceKeyId_ = sourceKeyId;
  setParameter(std::string("SourceKeyId"), sourceKeyId);
}

std::string ReEncryptRequest::getSourceEncryptionAlgorithm() const {
  return sourceEncryptionAlgorithm_;
}

void ReEncryptRequest::setSourceEncryptionAlgorithm(const std::string &sourceEncryptionAlgorithm) {
  sourceEncryptionAlgorithm_ = sourceEncryptionAlgorithm;
  setParameter(std::string("SourceEncryptionAlgorithm"), sourceEncryptionAlgorithm);
}

std::string ReEncryptRequest::getSourceKeyVersionId() const {
  return sourceKeyVersionId_;
}

void ReEncryptRequest::setSourceKeyVersionId(const std::string &sourceKeyVersionId) {
  sourceKeyVersionId_ = sourceKeyVersionId;
  setParameter(std::string("SourceKeyVersionId"), sourceKeyVersionId);
}

std::string ReEncryptRequest::getDestinationKeyId() const {
  return destinationKeyId_;
}

void ReEncryptRequest::setDestinationKeyId(const std::string &destinationKeyId) {
  destinationKeyId_ = destinationKeyId;
  setParameter(std::string("DestinationKeyId"), destinationKeyId);
}

std::string ReEncryptRequest::getSourceEncryptionContext() const {
  return sourceEncryptionContext_;
}

void ReEncryptRequest::setSourceEncryptionContext(const std::string &sourceEncryptionContext) {
  sourceEncryptionContext_ = sourceEncryptionContext;
  setParameter(std::string("SourceEncryptionContext"), sourceEncryptionContext);
}

std::string ReEncryptRequest::getCiphertextBlob() const {
  return ciphertextBlob_;
}

void ReEncryptRequest::setCiphertextBlob(const std::string &ciphertextBlob) {
  ciphertextBlob_ = ciphertextBlob;
  setParameter(std::string("CiphertextBlob"), ciphertextBlob);
}


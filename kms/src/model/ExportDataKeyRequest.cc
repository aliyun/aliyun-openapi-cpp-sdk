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

#include <alibabacloud/kms/model/ExportDataKeyRequest.h>

using AlibabaCloud::Kms::Model::ExportDataKeyRequest;

ExportDataKeyRequest::ExportDataKeyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "ExportDataKey") {
  setMethod(HttpRequest::Method::Post);
}

ExportDataKeyRequest::~ExportDataKeyRequest() {}

std::string ExportDataKeyRequest::getDryRun() const {
  return dryRun_;
}

void ExportDataKeyRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string ExportDataKeyRequest::getPublicKeyBlob() const {
  return publicKeyBlob_;
}

void ExportDataKeyRequest::setPublicKeyBlob(const std::string &publicKeyBlob) {
  publicKeyBlob_ = publicKeyBlob;
  setParameter(std::string("PublicKeyBlob"), publicKeyBlob);
}

std::string ExportDataKeyRequest::getEncryptionContext() const {
  return encryptionContext_;
}

void ExportDataKeyRequest::setEncryptionContext(const std::string &encryptionContext) {
  encryptionContext_ = encryptionContext;
  setParameter(std::string("EncryptionContext"), encryptionContext);
}

std::string ExportDataKeyRequest::getWrappingAlgorithm() const {
  return wrappingAlgorithm_;
}

void ExportDataKeyRequest::setWrappingAlgorithm(const std::string &wrappingAlgorithm) {
  wrappingAlgorithm_ = wrappingAlgorithm;
  setParameter(std::string("WrappingAlgorithm"), wrappingAlgorithm);
}

std::string ExportDataKeyRequest::getCiphertextBlob() const {
  return ciphertextBlob_;
}

void ExportDataKeyRequest::setCiphertextBlob(const std::string &ciphertextBlob) {
  ciphertextBlob_ = ciphertextBlob;
  setParameter(std::string("CiphertextBlob"), ciphertextBlob);
}

std::string ExportDataKeyRequest::getWrappingKeySpec() const {
  return wrappingKeySpec_;
}

void ExportDataKeyRequest::setWrappingKeySpec(const std::string &wrappingKeySpec) {
  wrappingKeySpec_ = wrappingKeySpec;
  setParameter(std::string("WrappingKeySpec"), wrappingKeySpec);
}


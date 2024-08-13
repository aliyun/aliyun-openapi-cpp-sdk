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

#include <alibabacloud/kms/model/GenerateAndExportDataKeyRequest.h>

using AlibabaCloud::Kms::Model::GenerateAndExportDataKeyRequest;

GenerateAndExportDataKeyRequest::GenerateAndExportDataKeyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "GenerateAndExportDataKey") {
  setMethod(HttpRequest::Method::Post);
}

GenerateAndExportDataKeyRequest::~GenerateAndExportDataKeyRequest() {}

std::string GenerateAndExportDataKeyRequest::getDryRun() const {
  return dryRun_;
}

void GenerateAndExportDataKeyRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string GenerateAndExportDataKeyRequest::getKeyId() const {
  return keyId_;
}

void GenerateAndExportDataKeyRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string GenerateAndExportDataKeyRequest::getKeySpec() const {
  return keySpec_;
}

void GenerateAndExportDataKeyRequest::setKeySpec(const std::string &keySpec) {
  keySpec_ = keySpec;
  setParameter(std::string("KeySpec"), keySpec);
}

int GenerateAndExportDataKeyRequest::getNumberOfBytes() const {
  return numberOfBytes_;
}

void GenerateAndExportDataKeyRequest::setNumberOfBytes(int numberOfBytes) {
  numberOfBytes_ = numberOfBytes;
  setParameter(std::string("NumberOfBytes"), std::to_string(numberOfBytes));
}

std::string GenerateAndExportDataKeyRequest::getPublicKeyBlob() const {
  return publicKeyBlob_;
}

void GenerateAndExportDataKeyRequest::setPublicKeyBlob(const std::string &publicKeyBlob) {
  publicKeyBlob_ = publicKeyBlob;
  setParameter(std::string("PublicKeyBlob"), publicKeyBlob);
}

std::string GenerateAndExportDataKeyRequest::getEncryptionContext() const {
  return encryptionContext_;
}

void GenerateAndExportDataKeyRequest::setEncryptionContext(const std::string &encryptionContext) {
  encryptionContext_ = encryptionContext;
  setParameter(std::string("EncryptionContext"), encryptionContext);
}

std::string GenerateAndExportDataKeyRequest::getWrappingAlgorithm() const {
  return wrappingAlgorithm_;
}

void GenerateAndExportDataKeyRequest::setWrappingAlgorithm(const std::string &wrappingAlgorithm) {
  wrappingAlgorithm_ = wrappingAlgorithm;
  setParameter(std::string("WrappingAlgorithm"), wrappingAlgorithm);
}

std::string GenerateAndExportDataKeyRequest::getWrappingKeySpec() const {
  return wrappingKeySpec_;
}

void GenerateAndExportDataKeyRequest::setWrappingKeySpec(const std::string &wrappingKeySpec) {
  wrappingKeySpec_ = wrappingKeySpec;
  setParameter(std::string("WrappingKeySpec"), wrappingKeySpec);
}


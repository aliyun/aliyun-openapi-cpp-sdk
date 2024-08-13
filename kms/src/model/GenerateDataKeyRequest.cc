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

#include <alibabacloud/kms/model/GenerateDataKeyRequest.h>

using AlibabaCloud::Kms::Model::GenerateDataKeyRequest;

GenerateDataKeyRequest::GenerateDataKeyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "GenerateDataKey") {
  setMethod(HttpRequest::Method::Post);
}

GenerateDataKeyRequest::~GenerateDataKeyRequest() {}

std::string GenerateDataKeyRequest::getDryRun() const {
  return dryRun_;
}

void GenerateDataKeyRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string GenerateDataKeyRequest::getKeyId() const {
  return keyId_;
}

void GenerateDataKeyRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string GenerateDataKeyRequest::getKeySpec() const {
  return keySpec_;
}

void GenerateDataKeyRequest::setKeySpec(const std::string &keySpec) {
  keySpec_ = keySpec;
  setParameter(std::string("KeySpec"), keySpec);
}

int GenerateDataKeyRequest::getNumberOfBytes() const {
  return numberOfBytes_;
}

void GenerateDataKeyRequest::setNumberOfBytes(int numberOfBytes) {
  numberOfBytes_ = numberOfBytes;
  setParameter(std::string("NumberOfBytes"), std::to_string(numberOfBytes));
}

std::string GenerateDataKeyRequest::getEncryptionContext() const {
  return encryptionContext_;
}

void GenerateDataKeyRequest::setEncryptionContext(const std::string &encryptionContext) {
  encryptionContext_ = encryptionContext;
  setParameter(std::string("EncryptionContext"), encryptionContext);
}


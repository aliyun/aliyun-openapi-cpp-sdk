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

#include <alibabacloud/kms/model/GenerateDataKeyWithoutPlaintextRequest.h>

using AlibabaCloud::Kms::Model::GenerateDataKeyWithoutPlaintextRequest;

GenerateDataKeyWithoutPlaintextRequest::GenerateDataKeyWithoutPlaintextRequest()
    : RpcServiceRequest("kms", "2016-01-20", "GenerateDataKeyWithoutPlaintext") {
  setMethod(HttpRequest::Method::Post);
}

GenerateDataKeyWithoutPlaintextRequest::~GenerateDataKeyWithoutPlaintextRequest() {}

std::string GenerateDataKeyWithoutPlaintextRequest::getDryRun() const {
  return dryRun_;
}

void GenerateDataKeyWithoutPlaintextRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string GenerateDataKeyWithoutPlaintextRequest::getKeyId() const {
  return keyId_;
}

void GenerateDataKeyWithoutPlaintextRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string GenerateDataKeyWithoutPlaintextRequest::getKeySpec() const {
  return keySpec_;
}

void GenerateDataKeyWithoutPlaintextRequest::setKeySpec(const std::string &keySpec) {
  keySpec_ = keySpec;
  setParameter(std::string("KeySpec"), keySpec);
}

int GenerateDataKeyWithoutPlaintextRequest::getNumberOfBytes() const {
  return numberOfBytes_;
}

void GenerateDataKeyWithoutPlaintextRequest::setNumberOfBytes(int numberOfBytes) {
  numberOfBytes_ = numberOfBytes;
  setParameter(std::string("NumberOfBytes"), std::to_string(numberOfBytes));
}

std::string GenerateDataKeyWithoutPlaintextRequest::getEncryptionContext() const {
  return encryptionContext_;
}

void GenerateDataKeyWithoutPlaintextRequest::setEncryptionContext(const std::string &encryptionContext) {
  encryptionContext_ = encryptionContext;
  setParameter(std::string("EncryptionContext"), encryptionContext);
}


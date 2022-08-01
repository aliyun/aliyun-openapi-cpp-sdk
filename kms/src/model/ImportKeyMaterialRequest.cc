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

#include <alibabacloud/kms/model/ImportKeyMaterialRequest.h>

using AlibabaCloud::Kms::Model::ImportKeyMaterialRequest;

ImportKeyMaterialRequest::ImportKeyMaterialRequest()
    : RpcServiceRequest("kms", "2016-01-20", "ImportKeyMaterial") {
  setMethod(HttpRequest::Method::Post);
}

ImportKeyMaterialRequest::~ImportKeyMaterialRequest() {}

std::string ImportKeyMaterialRequest::getImportToken() const {
  return importToken_;
}

void ImportKeyMaterialRequest::setImportToken(const std::string &importToken) {
  importToken_ = importToken;
  setParameter(std::string("ImportToken"), importToken);
}

std::string ImportKeyMaterialRequest::getEncryptedKeyMaterial() const {
  return encryptedKeyMaterial_;
}

void ImportKeyMaterialRequest::setEncryptedKeyMaterial(const std::string &encryptedKeyMaterial) {
  encryptedKeyMaterial_ = encryptedKeyMaterial;
  setParameter(std::string("EncryptedKeyMaterial"), encryptedKeyMaterial);
}

long ImportKeyMaterialRequest::getKeyMaterialExpireUnix() const {
  return keyMaterialExpireUnix_;
}

void ImportKeyMaterialRequest::setKeyMaterialExpireUnix(long keyMaterialExpireUnix) {
  keyMaterialExpireUnix_ = keyMaterialExpireUnix;
  setParameter(std::string("KeyMaterialExpireUnix"), std::to_string(keyMaterialExpireUnix));
}

std::string ImportKeyMaterialRequest::getKeyId() const {
  return keyId_;
}

void ImportKeyMaterialRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}


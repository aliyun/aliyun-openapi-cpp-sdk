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

#include <alibabacloud/sae/model/CreateSecretRequest.h>

using AlibabaCloud::Sae::Model::CreateSecretRequest;

CreateSecretRequest::CreateSecretRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/secret/secret"};
  setMethod(HttpRequest::Method::Post);
}

CreateSecretRequest::~CreateSecretRequest() {}

std::string CreateSecretRequest::getSecretType() const {
  return secretType_;
}

void CreateSecretRequest::setSecretType(const std::string &secretType) {
  secretType_ = secretType;
  setParameter(std::string("SecretType"), secretType);
}

std::string CreateSecretRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateSecretRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreateSecretRequest::getSecretData() const {
  return secretData_;
}

void CreateSecretRequest::setSecretData(const std::string &secretData) {
  secretData_ = secretData;
  setParameter(std::string("SecretData"), secretData);
}

std::string CreateSecretRequest::getSecretName() const {
  return secretName_;
}

void CreateSecretRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}


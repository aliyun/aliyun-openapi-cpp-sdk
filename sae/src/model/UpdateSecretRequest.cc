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

#include <alibabacloud/sae/model/UpdateSecretRequest.h>

using AlibabaCloud::Sae::Model::UpdateSecretRequest;

UpdateSecretRequest::UpdateSecretRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/secret/secret"};
  setMethod(HttpRequest::Method::Put);
}

UpdateSecretRequest::~UpdateSecretRequest() {}

std::string UpdateSecretRequest::getNamespaceId() const {
  return namespaceId_;
}

void UpdateSecretRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

long UpdateSecretRequest::getSecretId() const {
  return secretId_;
}

void UpdateSecretRequest::setSecretId(long secretId) {
  secretId_ = secretId;
  setParameter(std::string("SecretId"), std::to_string(secretId));
}

std::string UpdateSecretRequest::getSecretData() const {
  return secretData_;
}

void UpdateSecretRequest::setSecretData(const std::string &secretData) {
  secretData_ = secretData;
  setParameter(std::string("SecretData"), secretData);
}


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

#include <alibabacloud/kms/model/UpdateSecretRequest.h>

using AlibabaCloud::Kms::Model::UpdateSecretRequest;

UpdateSecretRequest::UpdateSecretRequest()
    : RpcServiceRequest("kms", "2016-01-20", "UpdateSecret") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSecretRequest::~UpdateSecretRequest() {}

std::string UpdateSecretRequest::getDescription() const {
  return description_;
}

void UpdateSecretRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateSecretRequest::getSecretName() const {
  return secretName_;
}

void UpdateSecretRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

std::string UpdateSecretRequest::getExtendedConfigCustomData() const {
  return extendedConfigCustomData_;
}

void UpdateSecretRequest::setExtendedConfigCustomData(const std::string &extendedConfigCustomData) {
  extendedConfigCustomData_ = extendedConfigCustomData;
  setParameter(std::string("ExtendedConfig.CustomData"), extendedConfigCustomData);
}


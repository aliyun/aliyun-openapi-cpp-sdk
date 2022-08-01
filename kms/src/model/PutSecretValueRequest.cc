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

#include <alibabacloud/kms/model/PutSecretValueRequest.h>

using AlibabaCloud::Kms::Model::PutSecretValueRequest;

PutSecretValueRequest::PutSecretValueRequest()
    : RpcServiceRequest("kms", "2016-01-20", "PutSecretValue") {
  setMethod(HttpRequest::Method::Post);
}

PutSecretValueRequest::~PutSecretValueRequest() {}

std::string PutSecretValueRequest::getVersionId() const {
  return versionId_;
}

void PutSecretValueRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string PutSecretValueRequest::getVersionStages() const {
  return versionStages_;
}

void PutSecretValueRequest::setVersionStages(const std::string &versionStages) {
  versionStages_ = versionStages;
  setParameter(std::string("VersionStages"), versionStages);
}

std::string PutSecretValueRequest::getSecretData() const {
  return secretData_;
}

void PutSecretValueRequest::setSecretData(const std::string &secretData) {
  secretData_ = secretData;
  setParameter(std::string("SecretData"), secretData);
}

std::string PutSecretValueRequest::getSecretName() const {
  return secretName_;
}

void PutSecretValueRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

std::string PutSecretValueRequest::getSecretDataType() const {
  return secretDataType_;
}

void PutSecretValueRequest::setSecretDataType(const std::string &secretDataType) {
  secretDataType_ = secretDataType;
  setParameter(std::string("SecretDataType"), secretDataType);
}


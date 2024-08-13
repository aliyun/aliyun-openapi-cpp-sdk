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

#include <alibabacloud/kms/model/GetSecretValueRequest.h>

using AlibabaCloud::Kms::Model::GetSecretValueRequest;

GetSecretValueRequest::GetSecretValueRequest()
    : RpcServiceRequest("kms", "2016-01-20", "GetSecretValue") {
  setMethod(HttpRequest::Method::Post);
}

GetSecretValueRequest::~GetSecretValueRequest() {}

std::string GetSecretValueRequest::getDryRun() const {
  return dryRun_;
}

void GetSecretValueRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string GetSecretValueRequest::getVersionId() const {
  return versionId_;
}

void GetSecretValueRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string GetSecretValueRequest::getVersionStage() const {
  return versionStage_;
}

void GetSecretValueRequest::setVersionStage(const std::string &versionStage) {
  versionStage_ = versionStage;
  setParameter(std::string("VersionStage"), versionStage);
}

std::string GetSecretValueRequest::getSecretName() const {
  return secretName_;
}

void GetSecretValueRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

bool GetSecretValueRequest::getFetchExtendedConfig() const {
  return fetchExtendedConfig_;
}

void GetSecretValueRequest::setFetchExtendedConfig(bool fetchExtendedConfig) {
  fetchExtendedConfig_ = fetchExtendedConfig;
  setParameter(std::string("FetchExtendedConfig"), fetchExtendedConfig ? "true" : "false");
}


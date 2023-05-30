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

#include <alibabacloud/kms/model/UpdateSecretVersionStageRequest.h>

using AlibabaCloud::Kms::Model::UpdateSecretVersionStageRequest;

UpdateSecretVersionStageRequest::UpdateSecretVersionStageRequest()
    : RpcServiceRequest("kms", "2016-01-20", "UpdateSecretVersionStage") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSecretVersionStageRequest::~UpdateSecretVersionStageRequest() {}

std::string UpdateSecretVersionStageRequest::getMoveToVersion() const {
  return moveToVersion_;
}

void UpdateSecretVersionStageRequest::setMoveToVersion(const std::string &moveToVersion) {
  moveToVersion_ = moveToVersion;
  setParameter(std::string("MoveToVersion"), moveToVersion);
}

std::string UpdateSecretVersionStageRequest::getRemoveFromVersion() const {
  return removeFromVersion_;
}

void UpdateSecretVersionStageRequest::setRemoveFromVersion(const std::string &removeFromVersion) {
  removeFromVersion_ = removeFromVersion;
  setParameter(std::string("RemoveFromVersion"), removeFromVersion);
}

std::string UpdateSecretVersionStageRequest::getVersionStage() const {
  return versionStage_;
}

void UpdateSecretVersionStageRequest::setVersionStage(const std::string &versionStage) {
  versionStage_ = versionStage;
  setParameter(std::string("VersionStage"), versionStage);
}

std::string UpdateSecretVersionStageRequest::getSecretName() const {
  return secretName_;
}

void UpdateSecretVersionStageRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}


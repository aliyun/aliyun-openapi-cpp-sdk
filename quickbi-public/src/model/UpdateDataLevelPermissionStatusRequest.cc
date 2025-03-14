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

#include <alibabacloud/quickbi-public/model/UpdateDataLevelPermissionStatusRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateDataLevelPermissionStatusRequest;

UpdateDataLevelPermissionStatusRequest::UpdateDataLevelPermissionStatusRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateDataLevelPermissionStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDataLevelPermissionStatusRequest::~UpdateDataLevelPermissionStatusRequest() {}

int UpdateDataLevelPermissionStatusRequest::getIsOpen() const {
  return isOpen_;
}

void UpdateDataLevelPermissionStatusRequest::setIsOpen(int isOpen) {
  isOpen_ = isOpen;
  setParameter(std::string("IsOpen"), std::to_string(isOpen));
}

std::string UpdateDataLevelPermissionStatusRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateDataLevelPermissionStatusRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateDataLevelPermissionStatusRequest::getCubeId() const {
  return cubeId_;
}

void UpdateDataLevelPermissionStatusRequest::setCubeId(const std::string &cubeId) {
  cubeId_ = cubeId;
  setParameter(std::string("CubeId"), cubeId);
}

std::string UpdateDataLevelPermissionStatusRequest::getRuleType() const {
  return ruleType_;
}

void UpdateDataLevelPermissionStatusRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), ruleType);
}

std::string UpdateDataLevelPermissionStatusRequest::getSignType() const {
  return signType_;
}

void UpdateDataLevelPermissionStatusRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}


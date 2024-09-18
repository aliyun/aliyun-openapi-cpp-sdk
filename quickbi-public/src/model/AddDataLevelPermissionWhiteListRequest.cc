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

#include <alibabacloud/quickbi-public/model/AddDataLevelPermissionWhiteListRequest.h>

using AlibabaCloud::Quickbi_public::Model::AddDataLevelPermissionWhiteListRequest;

AddDataLevelPermissionWhiteListRequest::AddDataLevelPermissionWhiteListRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AddDataLevelPermissionWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

AddDataLevelPermissionWhiteListRequest::~AddDataLevelPermissionWhiteListRequest() {}

std::string AddDataLevelPermissionWhiteListRequest::getTargetType() const {
  return targetType_;
}

void AddDataLevelPermissionWhiteListRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string AddDataLevelPermissionWhiteListRequest::getClientToken() const {
  return clientToken_;
}

void AddDataLevelPermissionWhiteListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddDataLevelPermissionWhiteListRequest::getAccessPoint() const {
  return accessPoint_;
}

void AddDataLevelPermissionWhiteListRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string AddDataLevelPermissionWhiteListRequest::getCubeId() const {
  return cubeId_;
}

void AddDataLevelPermissionWhiteListRequest::setCubeId(const std::string &cubeId) {
  cubeId_ = cubeId;
  setParameter(std::string("CubeId"), cubeId);
}

std::string AddDataLevelPermissionWhiteListRequest::getTargetIds() const {
  return targetIds_;
}

void AddDataLevelPermissionWhiteListRequest::setTargetIds(const std::string &targetIds) {
  targetIds_ = targetIds;
  setParameter(std::string("TargetIds"), targetIds);
}

std::string AddDataLevelPermissionWhiteListRequest::getRuleType() const {
  return ruleType_;
}

void AddDataLevelPermissionWhiteListRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), ruleType);
}

std::string AddDataLevelPermissionWhiteListRequest::getSignType() const {
  return signType_;
}

void AddDataLevelPermissionWhiteListRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string AddDataLevelPermissionWhiteListRequest::getOperateType() const {
  return operateType_;
}

void AddDataLevelPermissionWhiteListRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}


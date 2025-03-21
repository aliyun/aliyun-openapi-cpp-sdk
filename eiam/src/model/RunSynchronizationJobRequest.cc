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

#include <alibabacloud/eiam/model/RunSynchronizationJobRequest.h>

using AlibabaCloud::Eiam::Model::RunSynchronizationJobRequest;

RunSynchronizationJobRequest::RunSynchronizationJobRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "RunSynchronizationJob") {
  setMethod(HttpRequest::Method::Post);
}

RunSynchronizationJobRequest::~RunSynchronizationJobRequest() {}

std::string RunSynchronizationJobRequest::getTargetId() const {
  return targetId_;
}

void RunSynchronizationJobRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string RunSynchronizationJobRequest::getTargetType() const {
  return targetType_;
}

void RunSynchronizationJobRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string RunSynchronizationJobRequest::getDescription() const {
  return description_;
}

void RunSynchronizationJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

RunSynchronizationJobRequest::SynchronizationScopeConfig RunSynchronizationJobRequest::getSynchronizationScopeConfig() const {
  return synchronizationScopeConfig_;
}

void RunSynchronizationJobRequest::setSynchronizationScopeConfig(const RunSynchronizationJobRequest::SynchronizationScopeConfig &synchronizationScopeConfig) {
  synchronizationScopeConfig_ = synchronizationScopeConfig;
  for(int dep1 = 0; dep1 != synchronizationScopeConfig.organizationalUnitIds.size(); dep1++) {
    setParameter(std::string("SynchronizationScopeConfig") + ".OrganizationalUnitIds." + std::to_string(dep1 + 1), synchronizationScopeConfig.organizationalUnitIds[dep1]);
  }
  for(int dep1 = 0; dep1 != synchronizationScopeConfig.userIds.size(); dep1++) {
    setParameter(std::string("SynchronizationScopeConfig") + ".UserIds." + std::to_string(dep1 + 1), synchronizationScopeConfig.userIds[dep1]);
  }
  for(int dep1 = 0; dep1 != synchronizationScopeConfig.groupIds.size(); dep1++) {
    setParameter(std::string("SynchronizationScopeConfig") + ".GroupIds." + std::to_string(dep1 + 1), synchronizationScopeConfig.groupIds[dep1]);
  }
}

std::string RunSynchronizationJobRequest::getInstanceId() const {
  return instanceId_;
}

void RunSynchronizationJobRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool RunSynchronizationJobRequest::getPasswordInitialization() const {
  return passwordInitialization_;
}

void RunSynchronizationJobRequest::setPasswordInitialization(bool passwordInitialization) {
  passwordInitialization_ = passwordInitialization;
  setParameter(std::string("PasswordInitialization"), passwordInitialization ? "true" : "false");
}

std::vector<RunSynchronizationJobRequest::std::string> RunSynchronizationJobRequest::getUserIdentityTypes() const {
  return userIdentityTypes_;
}

void RunSynchronizationJobRequest::setUserIdentityTypes(const std::vector<RunSynchronizationJobRequest::std::string> &userIdentityTypes) {
  userIdentityTypes_ = userIdentityTypes;
  for(int dep1 = 0; dep1 != userIdentityTypes.size(); dep1++) {
    setParameter(std::string("UserIdentityTypes") + "." + std::to_string(dep1 + 1), userIdentityTypes[dep1]);
  }
}


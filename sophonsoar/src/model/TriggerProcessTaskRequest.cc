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

#include <alibabacloud/sophonsoar/model/TriggerProcessTaskRequest.h>

using AlibabaCloud::Sophonsoar::Model::TriggerProcessTaskRequest;

TriggerProcessTaskRequest::TriggerProcessTaskRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "TriggerProcessTask") {
  setMethod(HttpRequest::Method::Post);
}

TriggerProcessTaskRequest::~TriggerProcessTaskRequest() {}

std::string TriggerProcessTaskRequest::getActionType() const {
  return actionType_;
}

void TriggerProcessTaskRequest::setActionType(const std::string &actionType) {
  actionType_ = actionType;
  setParameter(std::string("ActionType"), actionType);
}

std::string TriggerProcessTaskRequest::getRoleFor() const {
  return roleFor_;
}

void TriggerProcessTaskRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string TriggerProcessTaskRequest::getRoleType() const {
  return roleType_;
}

void TriggerProcessTaskRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string TriggerProcessTaskRequest::getLang() const {
  return lang_;
}

void TriggerProcessTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string TriggerProcessTaskRequest::getTaskId() const {
  return taskId_;
}

void TriggerProcessTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}


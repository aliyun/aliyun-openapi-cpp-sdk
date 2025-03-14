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

#include <alibabacloud/sophonsoar/model/DebugPlaybookRequest.h>

using AlibabaCloud::Sophonsoar::Model::DebugPlaybookRequest;

DebugPlaybookRequest::DebugPlaybookRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DebugPlaybook") {
  setMethod(HttpRequest::Method::Post);
}

DebugPlaybookRequest::~DebugPlaybookRequest() {}

std::string DebugPlaybookRequest::getRoleFor() const {
  return roleFor_;
}

void DebugPlaybookRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DebugPlaybookRequest::getTaskflow() const {
  return taskflow_;
}

void DebugPlaybookRequest::setTaskflow(const std::string &taskflow) {
  taskflow_ = taskflow;
  setBodyParameter(std::string("Taskflow"), taskflow);
}

std::string DebugPlaybookRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void DebugPlaybookRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string DebugPlaybookRequest::getRecord() const {
  return record_;
}

void DebugPlaybookRequest::setRecord(const std::string &record) {
  record_ = record;
  setBodyParameter(std::string("Record"), record);
}

std::string DebugPlaybookRequest::getRoleType() const {
  return roleType_;
}

void DebugPlaybookRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DebugPlaybookRequest::getLang() const {
  return lang_;
}

void DebugPlaybookRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setBodyParameter(std::string("Lang"), lang);
}


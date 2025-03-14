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

#include <alibabacloud/sophonsoar/model/ModifyPlaybookRequest.h>

using AlibabaCloud::Sophonsoar::Model::ModifyPlaybookRequest;

ModifyPlaybookRequest::ModifyPlaybookRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "ModifyPlaybook") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPlaybookRequest::~ModifyPlaybookRequest() {}

std::string ModifyPlaybookRequest::getRoleFor() const {
  return roleFor_;
}

void ModifyPlaybookRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string ModifyPlaybookRequest::getTaskflow() const {
  return taskflow_;
}

void ModifyPlaybookRequest::setTaskflow(const std::string &taskflow) {
  taskflow_ = taskflow;
  setBodyParameter(std::string("Taskflow"), taskflow);
}

std::string ModifyPlaybookRequest::getDescription() const {
  return description_;
}

void ModifyPlaybookRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string ModifyPlaybookRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void ModifyPlaybookRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string ModifyPlaybookRequest::getDisplayName() const {
  return displayName_;
}

void ModifyPlaybookRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setBodyParameter(std::string("DisplayName"), displayName);
}

std::string ModifyPlaybookRequest::getRoleType() const {
  return roleType_;
}

void ModifyPlaybookRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string ModifyPlaybookRequest::getLang() const {
  return lang_;
}

void ModifyPlaybookRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setBodyParameter(std::string("Lang"), lang);
}


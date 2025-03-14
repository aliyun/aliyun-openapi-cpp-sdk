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

#include <alibabacloud/sophonsoar/model/CreatePlaybookRequest.h>

using AlibabaCloud::Sophonsoar::Model::CreatePlaybookRequest;

CreatePlaybookRequest::CreatePlaybookRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "CreatePlaybook") {
  setMethod(HttpRequest::Method::Post);
}

CreatePlaybookRequest::~CreatePlaybookRequest() {}

std::string CreatePlaybookRequest::getRoleFor() const {
  return roleFor_;
}

void CreatePlaybookRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string CreatePlaybookRequest::getTaskflowType() const {
  return taskflowType_;
}

void CreatePlaybookRequest::setTaskflowType(const std::string &taskflowType) {
  taskflowType_ = taskflowType;
  setBodyParameter(std::string("TaskflowType"), taskflowType);
}

std::string CreatePlaybookRequest::getDescription() const {
  return description_;
}

void CreatePlaybookRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreatePlaybookRequest::getDisplayName() const {
  return displayName_;
}

void CreatePlaybookRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setBodyParameter(std::string("DisplayName"), displayName);
}

std::string CreatePlaybookRequest::getRoleType() const {
  return roleType_;
}

void CreatePlaybookRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string CreatePlaybookRequest::getLang() const {
  return lang_;
}

void CreatePlaybookRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setBodyParameter(std::string("Lang"), lang);
}


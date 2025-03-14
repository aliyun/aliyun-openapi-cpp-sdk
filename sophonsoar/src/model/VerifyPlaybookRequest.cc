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

#include <alibabacloud/sophonsoar/model/VerifyPlaybookRequest.h>

using AlibabaCloud::Sophonsoar::Model::VerifyPlaybookRequest;

VerifyPlaybookRequest::VerifyPlaybookRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "VerifyPlaybook") {
  setMethod(HttpRequest::Method::Post);
}

VerifyPlaybookRequest::~VerifyPlaybookRequest() {}

std::string VerifyPlaybookRequest::getRoleFor() const {
  return roleFor_;
}

void VerifyPlaybookRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string VerifyPlaybookRequest::getTaskFlow() const {
  return taskFlow_;
}

void VerifyPlaybookRequest::setTaskFlow(const std::string &taskFlow) {
  taskFlow_ = taskFlow;
  setBodyParameter(std::string("TaskFlow"), taskFlow);
}

std::string VerifyPlaybookRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void VerifyPlaybookRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string VerifyPlaybookRequest::getRoleType() const {
  return roleType_;
}

void VerifyPlaybookRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string VerifyPlaybookRequest::getLang() const {
  return lang_;
}

void VerifyPlaybookRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setBodyParameter(std::string("Lang"), lang);
}


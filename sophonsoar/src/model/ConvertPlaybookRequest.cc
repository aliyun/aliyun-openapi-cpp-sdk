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

#include <alibabacloud/sophonsoar/model/ConvertPlaybookRequest.h>

using AlibabaCloud::Sophonsoar::Model::ConvertPlaybookRequest;

ConvertPlaybookRequest::ConvertPlaybookRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "ConvertPlaybook") {
  setMethod(HttpRequest::Method::Post);
}

ConvertPlaybookRequest::~ConvertPlaybookRequest() {}

long ConvertPlaybookRequest::getRoleFor() const {
  return roleFor_;
}

void ConvertPlaybookRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string ConvertPlaybookRequest::getTaskflow() const {
  return taskflow_;
}

void ConvertPlaybookRequest::setTaskflow(const std::string &taskflow) {
  taskflow_ = taskflow;
  setBodyParameter(std::string("Taskflow"), taskflow);
}

std::string ConvertPlaybookRequest::getRoleType() const {
  return roleType_;
}

void ConvertPlaybookRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string ConvertPlaybookRequest::getLang() const {
  return lang_;
}

void ConvertPlaybookRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


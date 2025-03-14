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

#include <alibabacloud/sophonsoar/model/DescribeSophonCommandsRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeSophonCommandsRequest;

DescribeSophonCommandsRequest::DescribeSophonCommandsRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeSophonCommands") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSophonCommandsRequest::~DescribeSophonCommandsRequest() {}

std::string DescribeSophonCommandsRequest::getActionType() const {
  return actionType_;
}

void DescribeSophonCommandsRequest::setActionType(const std::string &actionType) {
  actionType_ = actionType;
  setParameter(std::string("ActionType"), actionType);
}

std::string DescribeSophonCommandsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeSophonCommandsRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeSophonCommandsRequest::getName() const {
  return name_;
}

void DescribeSophonCommandsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeSophonCommandsRequest::getRoleType() const {
  return roleType_;
}

void DescribeSophonCommandsRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeSophonCommandsRequest::getLang() const {
  return lang_;
}

void DescribeSophonCommandsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


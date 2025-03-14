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

#include <alibabacloud/sophonsoar/model/RenamePlaybookNodeRequest.h>

using AlibabaCloud::Sophonsoar::Model::RenamePlaybookNodeRequest;

RenamePlaybookNodeRequest::RenamePlaybookNodeRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "RenamePlaybookNode") {
  setMethod(HttpRequest::Method::Post);
}

RenamePlaybookNodeRequest::~RenamePlaybookNodeRequest() {}

std::string RenamePlaybookNodeRequest::getRoleFor() const {
  return roleFor_;
}

void RenamePlaybookNodeRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string RenamePlaybookNodeRequest::getNewNodeName() const {
  return newNodeName_;
}

void RenamePlaybookNodeRequest::setNewNodeName(const std::string &newNodeName) {
  newNodeName_ = newNodeName;
  setParameter(std::string("NewNodeName"), newNodeName);
}

std::string RenamePlaybookNodeRequest::getOldNodeName() const {
  return oldNodeName_;
}

void RenamePlaybookNodeRequest::setOldNodeName(const std::string &oldNodeName) {
  oldNodeName_ = oldNodeName;
  setParameter(std::string("OldNodeName"), oldNodeName);
}

std::string RenamePlaybookNodeRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void RenamePlaybookNodeRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string RenamePlaybookNodeRequest::getRoleType() const {
  return roleType_;
}

void RenamePlaybookNodeRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string RenamePlaybookNodeRequest::getLang() const {
  return lang_;
}

void RenamePlaybookNodeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


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

#include <alibabacloud/sophonsoar/model/ComparePlaybooksRequest.h>

using AlibabaCloud::Sophonsoar::Model::ComparePlaybooksRequest;

ComparePlaybooksRequest::ComparePlaybooksRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "ComparePlaybooks") {
  setMethod(HttpRequest::Method::Post);
}

ComparePlaybooksRequest::~ComparePlaybooksRequest() {}

int ComparePlaybooksRequest::getOldPlaybookReleaseId() const {
  return oldPlaybookReleaseId_;
}

void ComparePlaybooksRequest::setOldPlaybookReleaseId(int oldPlaybookReleaseId) {
  oldPlaybookReleaseId_ = oldPlaybookReleaseId;
  setParameter(std::string("OldPlaybookReleaseId"), std::to_string(oldPlaybookReleaseId));
}

int ComparePlaybooksRequest::getNewPlaybookReleaseId() const {
  return newPlaybookReleaseId_;
}

void ComparePlaybooksRequest::setNewPlaybookReleaseId(int newPlaybookReleaseId) {
  newPlaybookReleaseId_ = newPlaybookReleaseId;
  setParameter(std::string("NewPlaybookReleaseId"), std::to_string(newPlaybookReleaseId));
}

std::string ComparePlaybooksRequest::getRoleFor() const {
  return roleFor_;
}

void ComparePlaybooksRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string ComparePlaybooksRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void ComparePlaybooksRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string ComparePlaybooksRequest::getRoleType() const {
  return roleType_;
}

void ComparePlaybooksRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string ComparePlaybooksRequest::getLang() const {
  return lang_;
}

void ComparePlaybooksRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


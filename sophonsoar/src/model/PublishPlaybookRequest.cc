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

#include <alibabacloud/sophonsoar/model/PublishPlaybookRequest.h>

using AlibabaCloud::Sophonsoar::Model::PublishPlaybookRequest;

PublishPlaybookRequest::PublishPlaybookRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "PublishPlaybook") {
  setMethod(HttpRequest::Method::Post);
}

PublishPlaybookRequest::~PublishPlaybookRequest() {}

std::string PublishPlaybookRequest::getRoleFor() const {
  return roleFor_;
}

void PublishPlaybookRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string PublishPlaybookRequest::getDescription() const {
  return description_;
}

void PublishPlaybookRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string PublishPlaybookRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void PublishPlaybookRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string PublishPlaybookRequest::getRoleType() const {
  return roleType_;
}

void PublishPlaybookRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string PublishPlaybookRequest::getLang() const {
  return lang_;
}

void PublishPlaybookRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setBodyParameter(std::string("Lang"), lang);
}


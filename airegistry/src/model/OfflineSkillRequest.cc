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

#include <alibabacloud/airegistry/model/OfflineSkillRequest.h>

using AlibabaCloud::AIRegistry::Model::OfflineSkillRequest;

OfflineSkillRequest::OfflineSkillRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "OfflineSkill") {
  setMethod(HttpRequest::Method::Post);
}

OfflineSkillRequest::~OfflineSkillRequest() {}

std::string OfflineSkillRequest::getNamespaceId() const {
  return namespaceId_;
}

void OfflineSkillRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string OfflineSkillRequest::getSkillVersion() const {
  return skillVersion_;
}

void OfflineSkillRequest::setSkillVersion(const std::string &skillVersion) {
  skillVersion_ = skillVersion;
  setParameter(std::string("SkillVersion"), skillVersion);
}

std::string OfflineSkillRequest::getScope() const {
  return scope_;
}

void OfflineSkillRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string OfflineSkillRequest::getSkillName() const {
  return skillName_;
}

void OfflineSkillRequest::setSkillName(const std::string &skillName) {
  skillName_ = skillName;
  setParameter(std::string("SkillName"), skillName);
}


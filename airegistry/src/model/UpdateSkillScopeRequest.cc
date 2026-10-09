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

#include <alibabacloud/airegistry/model/UpdateSkillScopeRequest.h>

using AlibabaCloud::AIRegistry::Model::UpdateSkillScopeRequest;

UpdateSkillScopeRequest::UpdateSkillScopeRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "UpdateSkillScope") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSkillScopeRequest::~UpdateSkillScopeRequest() {}

std::string UpdateSkillScopeRequest::getNamespaceId() const {
  return namespaceId_;
}

void UpdateSkillScopeRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string UpdateSkillScopeRequest::getScope() const {
  return scope_;
}

void UpdateSkillScopeRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string UpdateSkillScopeRequest::getSkillName() const {
  return skillName_;
}

void UpdateSkillScopeRequest::setSkillName(const std::string &skillName) {
  skillName_ = skillName;
  setParameter(std::string("SkillName"), skillName);
}


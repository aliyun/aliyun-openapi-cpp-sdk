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

#include <alibabacloud/airegistry/model/SubmitSkillVersionRequest.h>

using AlibabaCloud::AIRegistry::Model::SubmitSkillVersionRequest;

SubmitSkillVersionRequest::SubmitSkillVersionRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "SubmitSkillVersion") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSkillVersionRequest::~SubmitSkillVersionRequest() {}

std::string SubmitSkillVersionRequest::getNamespaceId() const {
  return namespaceId_;
}

void SubmitSkillVersionRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string SubmitSkillVersionRequest::getSkillVersion() const {
  return skillVersion_;
}

void SubmitSkillVersionRequest::setSkillVersion(const std::string &skillVersion) {
  skillVersion_ = skillVersion;
  setParameter(std::string("SkillVersion"), skillVersion);
}

std::string SubmitSkillVersionRequest::getSkillName() const {
  return skillName_;
}

void SubmitSkillVersionRequest::setSkillName(const std::string &skillName) {
  skillName_ = skillName;
  setParameter(std::string("SkillName"), skillName);
}


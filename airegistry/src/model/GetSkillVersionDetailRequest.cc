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

#include <alibabacloud/airegistry/model/GetSkillVersionDetailRequest.h>

using AlibabaCloud::AIRegistry::Model::GetSkillVersionDetailRequest;

GetSkillVersionDetailRequest::GetSkillVersionDetailRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "GetSkillVersionDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetSkillVersionDetailRequest::~GetSkillVersionDetailRequest() {}

std::string GetSkillVersionDetailRequest::getNamespaceId() const {
  return namespaceId_;
}

void GetSkillVersionDetailRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string GetSkillVersionDetailRequest::getSkillVersion() const {
  return skillVersion_;
}

void GetSkillVersionDetailRequest::setSkillVersion(const std::string &skillVersion) {
  skillVersion_ = skillVersion;
  setParameter(std::string("SkillVersion"), skillVersion);
}

std::string GetSkillVersionDetailRequest::getSkillName() const {
  return skillName_;
}

void GetSkillVersionDetailRequest::setSkillName(const std::string &skillName) {
  skillName_ = skillName;
  setParameter(std::string("SkillName"), skillName);
}


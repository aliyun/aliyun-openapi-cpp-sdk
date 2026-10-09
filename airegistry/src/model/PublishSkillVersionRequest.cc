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

#include <alibabacloud/airegistry/model/PublishSkillVersionRequest.h>

using AlibabaCloud::AIRegistry::Model::PublishSkillVersionRequest;

PublishSkillVersionRequest::PublishSkillVersionRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "PublishSkillVersion") {
  setMethod(HttpRequest::Method::Post);
}

PublishSkillVersionRequest::~PublishSkillVersionRequest() {}

std::string PublishSkillVersionRequest::getNamespaceId() const {
  return namespaceId_;
}

void PublishSkillVersionRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

bool PublishSkillVersionRequest::getUpdateLatestLabel() const {
  return updateLatestLabel_;
}

void PublishSkillVersionRequest::setUpdateLatestLabel(bool updateLatestLabel) {
  updateLatestLabel_ = updateLatestLabel;
  setParameter(std::string("UpdateLatestLabel"), updateLatestLabel ? "true" : "false");
}

std::string PublishSkillVersionRequest::getSkillVersion() const {
  return skillVersion_;
}

void PublishSkillVersionRequest::setSkillVersion(const std::string &skillVersion) {
  skillVersion_ = skillVersion;
  setParameter(std::string("SkillVersion"), skillVersion);
}

std::string PublishSkillVersionRequest::getSkillName() const {
  return skillName_;
}

void PublishSkillVersionRequest::setSkillName(const std::string &skillName) {
  skillName_ = skillName;
  setParameter(std::string("SkillName"), skillName);
}


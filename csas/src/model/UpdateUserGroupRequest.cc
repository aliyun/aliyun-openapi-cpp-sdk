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

#include <alibabacloud/csas/model/UpdateUserGroupRequest.h>

using AlibabaCloud::Csas::Model::UpdateUserGroupRequest;

UpdateUserGroupRequest::UpdateUserGroupRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateUserGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserGroupRequest::~UpdateUserGroupRequest() {}

std::string UpdateUserGroupRequest::getUserGroupId() const {
  return userGroupId_;
}

void UpdateUserGroupRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setBodyParameter(std::string("UserGroupId"), userGroupId);
}

std::string UpdateUserGroupRequest::getDescription() const {
  return description_;
}

void UpdateUserGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateUserGroupRequest::getSourceIp() const {
  return sourceIp_;
}

void UpdateUserGroupRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string UpdateUserGroupRequest::getModifyType() const {
  return modifyType_;
}

void UpdateUserGroupRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setBodyParameter(std::string("ModifyType"), modifyType);
}

std::vector<UpdateUserGroupRequest::Attributes> UpdateUserGroupRequest::getAttributes() const {
  return attributes_;
}

void UpdateUserGroupRequest::setAttributes(const std::vector<UpdateUserGroupRequest::Attributes> &attributes) {
  attributes_ = attributes;
  for(int dep1 = 0; dep1 != attributes.size(); dep1++) {
    setBodyParameter(std::string("Attributes") + "." + std::to_string(dep1 + 1) + ".UserGroupType", attributes[dep1].userGroupType);
    setBodyParameter(std::string("Attributes") + "." + std::to_string(dep1 + 1) + ".IdpId", std::to_string(attributes[dep1].idpId));
    setBodyParameter(std::string("Attributes") + "." + std::to_string(dep1 + 1) + ".Value", attributes[dep1].value);
    setBodyParameter(std::string("Attributes") + "." + std::to_string(dep1 + 1) + ".Relation", attributes[dep1].relation);
  }
}


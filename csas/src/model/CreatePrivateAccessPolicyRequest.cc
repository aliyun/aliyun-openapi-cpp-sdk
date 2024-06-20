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

#include <alibabacloud/csas/model/CreatePrivateAccessPolicyRequest.h>

using AlibabaCloud::Csas::Model::CreatePrivateAccessPolicyRequest;

CreatePrivateAccessPolicyRequest::CreatePrivateAccessPolicyRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreatePrivateAccessPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreatePrivateAccessPolicyRequest::~CreatePrivateAccessPolicyRequest() {}

std::string CreatePrivateAccessPolicyRequest::getDescription() const {
  return description_;
}

void CreatePrivateAccessPolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreatePrivateAccessPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void CreatePrivateAccessPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<CreatePrivateAccessPolicyRequest::CustomUserAttributes> CreatePrivateAccessPolicyRequest::getCustomUserAttributes() const {
  return customUserAttributes_;
}

void CreatePrivateAccessPolicyRequest::setCustomUserAttributes(const std::vector<CreatePrivateAccessPolicyRequest::CustomUserAttributes> &customUserAttributes) {
  customUserAttributes_ = customUserAttributes;
  for(int dep1 = 0; dep1 != customUserAttributes.size(); dep1++) {
    setBodyParameter(std::string("CustomUserAttributes") + "." + std::to_string(dep1 + 1) + ".UserGroupType", customUserAttributes[dep1].userGroupType);
    setBodyParameter(std::string("CustomUserAttributes") + "." + std::to_string(dep1 + 1) + ".IdpId", std::to_string(customUserAttributes[dep1].idpId));
    setBodyParameter(std::string("CustomUserAttributes") + "." + std::to_string(dep1 + 1) + ".Value", customUserAttributes[dep1].value);
    setBodyParameter(std::string("CustomUserAttributes") + "." + std::to_string(dep1 + 1) + ".Relation", customUserAttributes[dep1].relation);
  }
}

std::vector<CreatePrivateAccessPolicyRequest::std::string> CreatePrivateAccessPolicyRequest::getTagIds() const {
  return tagIds_;
}

void CreatePrivateAccessPolicyRequest::setTagIds(const std::vector<CreatePrivateAccessPolicyRequest::std::string> &tagIds) {
  tagIds_ = tagIds;
  for(int dep1 = 0; dep1 != tagIds.size(); dep1++) {
    setBodyParameter(std::string("TagIds") + "." + std::to_string(dep1 + 1), tagIds[dep1]);
  }
}

std::string CreatePrivateAccessPolicyRequest::getDeviceAttributeId() const {
  return deviceAttributeId_;
}

void CreatePrivateAccessPolicyRequest::setDeviceAttributeId(const std::string &deviceAttributeId) {
  deviceAttributeId_ = deviceAttributeId;
  setBodyParameter(std::string("DeviceAttributeId"), deviceAttributeId);
}

std::vector<CreatePrivateAccessPolicyRequest::std::string> CreatePrivateAccessPolicyRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void CreatePrivateAccessPolicyRequest::setUserGroupIds(const std::vector<CreatePrivateAccessPolicyRequest::std::string> &userGroupIds) {
  userGroupIds_ = userGroupIds;
  for(int dep1 = 0; dep1 != userGroupIds.size(); dep1++) {
    setBodyParameter(std::string("UserGroupIds") + "." + std::to_string(dep1 + 1), userGroupIds[dep1]);
  }
}

std::string CreatePrivateAccessPolicyRequest::getPolicyAction() const {
  return policyAction_;
}

void CreatePrivateAccessPolicyRequest::setPolicyAction(const std::string &policyAction) {
  policyAction_ = policyAction;
  setBodyParameter(std::string("PolicyAction"), policyAction);
}

int CreatePrivateAccessPolicyRequest::getPriority() const {
  return priority_;
}

void CreatePrivateAccessPolicyRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreatePrivateAccessPolicyRequest::getDeviceAttributeAction() const {
  return deviceAttributeAction_;
}

void CreatePrivateAccessPolicyRequest::setDeviceAttributeAction(const std::string &deviceAttributeAction) {
  deviceAttributeAction_ = deviceAttributeAction;
  setBodyParameter(std::string("DeviceAttributeAction"), deviceAttributeAction);
}

std::vector<CreatePrivateAccessPolicyRequest::std::string> CreatePrivateAccessPolicyRequest::getApplicationIds() const {
  return applicationIds_;
}

void CreatePrivateAccessPolicyRequest::setApplicationIds(const std::vector<CreatePrivateAccessPolicyRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setBodyParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string CreatePrivateAccessPolicyRequest::getUserGroupMode() const {
  return userGroupMode_;
}

void CreatePrivateAccessPolicyRequest::setUserGroupMode(const std::string &userGroupMode) {
  userGroupMode_ = userGroupMode;
  setBodyParameter(std::string("UserGroupMode"), userGroupMode);
}

std::string CreatePrivateAccessPolicyRequest::getName() const {
  return name_;
}

void CreatePrivateAccessPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreatePrivateAccessPolicyRequest::getApplicationType() const {
  return applicationType_;
}

void CreatePrivateAccessPolicyRequest::setApplicationType(const std::string &applicationType) {
  applicationType_ = applicationType;
  setBodyParameter(std::string("ApplicationType"), applicationType);
}

std::string CreatePrivateAccessPolicyRequest::getStatus() const {
  return status_;
}

void CreatePrivateAccessPolicyRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}


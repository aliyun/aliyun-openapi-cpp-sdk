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

#include <alibabacloud/csas/model/UpdatePrivateAccessPolicyRequest.h>

using AlibabaCloud::Csas::Model::UpdatePrivateAccessPolicyRequest;

UpdatePrivateAccessPolicyRequest::UpdatePrivateAccessPolicyRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdatePrivateAccessPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrivateAccessPolicyRequest::~UpdatePrivateAccessPolicyRequest() {}

std::string UpdatePrivateAccessPolicyRequest::getDescription() const {
  return description_;
}

void UpdatePrivateAccessPolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdatePrivateAccessPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void UpdatePrivateAccessPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string UpdatePrivateAccessPolicyRequest::getPolicyId() const {
  return policyId_;
}

void UpdatePrivateAccessPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setBodyParameter(std::string("PolicyId"), policyId);
}

std::vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes> UpdatePrivateAccessPolicyRequest::getCustomUserAttributes() const {
  return customUserAttributes_;
}

void UpdatePrivateAccessPolicyRequest::setCustomUserAttributes(const std::vector<UpdatePrivateAccessPolicyRequest::CustomUserAttributes> &customUserAttributes) {
  customUserAttributes_ = customUserAttributes;
  for(int dep1 = 0; dep1 != customUserAttributes.size(); dep1++) {
    setBodyParameter(std::string("CustomUserAttributes") + "." + std::to_string(dep1 + 1) + ".UserGroupType", customUserAttributes[dep1].userGroupType);
    setBodyParameter(std::string("CustomUserAttributes") + "." + std::to_string(dep1 + 1) + ".IdpId", std::to_string(customUserAttributes[dep1].idpId));
    setBodyParameter(std::string("CustomUserAttributes") + "." + std::to_string(dep1 + 1) + ".Value", customUserAttributes[dep1].value);
    setBodyParameter(std::string("CustomUserAttributes") + "." + std::to_string(dep1 + 1) + ".Relation", customUserAttributes[dep1].relation);
  }
}

std::vector<UpdatePrivateAccessPolicyRequest::std::string> UpdatePrivateAccessPolicyRequest::getTagIds() const {
  return tagIds_;
}

void UpdatePrivateAccessPolicyRequest::setTagIds(const std::vector<UpdatePrivateAccessPolicyRequest::std::string> &tagIds) {
  tagIds_ = tagIds;
  for(int dep1 = 0; dep1 != tagIds.size(); dep1++) {
    setBodyParameter(std::string("TagIds") + "." + std::to_string(dep1 + 1), tagIds[dep1]);
  }
}

std::string UpdatePrivateAccessPolicyRequest::getDeviceAttributeId() const {
  return deviceAttributeId_;
}

void UpdatePrivateAccessPolicyRequest::setDeviceAttributeId(const std::string &deviceAttributeId) {
  deviceAttributeId_ = deviceAttributeId;
  setBodyParameter(std::string("DeviceAttributeId"), deviceAttributeId);
}

std::vector<UpdatePrivateAccessPolicyRequest::std::string> UpdatePrivateAccessPolicyRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void UpdatePrivateAccessPolicyRequest::setUserGroupIds(const std::vector<UpdatePrivateAccessPolicyRequest::std::string> &userGroupIds) {
  userGroupIds_ = userGroupIds;
  for(int dep1 = 0; dep1 != userGroupIds.size(); dep1++) {
    setBodyParameter(std::string("UserGroupIds") + "." + std::to_string(dep1 + 1), userGroupIds[dep1]);
  }
}

std::string UpdatePrivateAccessPolicyRequest::getPolicyAction() const {
  return policyAction_;
}

void UpdatePrivateAccessPolicyRequest::setPolicyAction(const std::string &policyAction) {
  policyAction_ = policyAction;
  setBodyParameter(std::string("PolicyAction"), policyAction);
}

int UpdatePrivateAccessPolicyRequest::getPriority() const {
  return priority_;
}

void UpdatePrivateAccessPolicyRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdatePrivateAccessPolicyRequest::getDeviceAttributeAction() const {
  return deviceAttributeAction_;
}

void UpdatePrivateAccessPolicyRequest::setDeviceAttributeAction(const std::string &deviceAttributeAction) {
  deviceAttributeAction_ = deviceAttributeAction;
  setBodyParameter(std::string("DeviceAttributeAction"), deviceAttributeAction);
}

std::vector<UpdatePrivateAccessPolicyRequest::std::string> UpdatePrivateAccessPolicyRequest::getApplicationIds() const {
  return applicationIds_;
}

void UpdatePrivateAccessPolicyRequest::setApplicationIds(const std::vector<UpdatePrivateAccessPolicyRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setBodyParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string UpdatePrivateAccessPolicyRequest::getUserGroupMode() const {
  return userGroupMode_;
}

void UpdatePrivateAccessPolicyRequest::setUserGroupMode(const std::string &userGroupMode) {
  userGroupMode_ = userGroupMode;
  setBodyParameter(std::string("UserGroupMode"), userGroupMode);
}

std::string UpdatePrivateAccessPolicyRequest::getModifyType() const {
  return modifyType_;
}

void UpdatePrivateAccessPolicyRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setBodyParameter(std::string("ModifyType"), modifyType);
}

std::string UpdatePrivateAccessPolicyRequest::getApplicationType() const {
  return applicationType_;
}

void UpdatePrivateAccessPolicyRequest::setApplicationType(const std::string &applicationType) {
  applicationType_ = applicationType;
  setBodyParameter(std::string("ApplicationType"), applicationType);
}

std::string UpdatePrivateAccessPolicyRequest::getStatus() const {
  return status_;
}

void UpdatePrivateAccessPolicyRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}


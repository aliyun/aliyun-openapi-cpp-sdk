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

#include <alibabacloud/eiam/model/UpdateCustomPrivacyPolicyRequest.h>

using AlibabaCloud::Eiam::Model::UpdateCustomPrivacyPolicyRequest;

UpdateCustomPrivacyPolicyRequest::UpdateCustomPrivacyPolicyRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateCustomPrivacyPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCustomPrivacyPolicyRequest::~UpdateCustomPrivacyPolicyRequest() {}

std::string UpdateCustomPrivacyPolicyRequest::getDefaultLanguageCode() const {
  return defaultLanguageCode_;
}

void UpdateCustomPrivacyPolicyRequest::setDefaultLanguageCode(const std::string &defaultLanguageCode) {
  defaultLanguageCode_ = defaultLanguageCode;
  setParameter(std::string("DefaultLanguageCode"), defaultLanguageCode);
}

std::string UpdateCustomPrivacyPolicyRequest::getUserConsentType() const {
  return userConsentType_;
}

void UpdateCustomPrivacyPolicyRequest::setUserConsentType(const std::string &userConsentType) {
  userConsentType_ = userConsentType;
  setParameter(std::string("UserConsentType"), userConsentType);
}

std::vector<UpdateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents> UpdateCustomPrivacyPolicyRequest::getCustomPrivacyPolicyContents() const {
  return customPrivacyPolicyContents_;
}

void UpdateCustomPrivacyPolicyRequest::setCustomPrivacyPolicyContents(const std::vector<UpdateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents> &customPrivacyPolicyContents) {
  customPrivacyPolicyContents_ = customPrivacyPolicyContents;
  for(int dep1 = 0; dep1 != customPrivacyPolicyContents.size(); dep1++) {
    setParameter(std::string("CustomPrivacyPolicyContents") + "." + std::to_string(dep1 + 1) + ".CustomPrivacyPolicyTip", customPrivacyPolicyContents[dep1].customPrivacyPolicyTip);
    setParameter(std::string("CustomPrivacyPolicyContents") + "." + std::to_string(dep1 + 1) + ".LanguageCode", customPrivacyPolicyContents[dep1].languageCode);
    for(int dep2 = 0; dep2 != customPrivacyPolicyContents[dep1].customPrivacyPolicyItems.size(); dep2++) {
      setParameter(std::string("CustomPrivacyPolicyContents") + "." + std::to_string(dep1 + 1) + ".CustomPrivacyPolicyItems." + std::to_string(dep2 + 1) + ".CustomPrivacyPolicyItemUrl", customPrivacyPolicyContents[dep1].customPrivacyPolicyItems[dep2].customPrivacyPolicyItemUrl);
      setParameter(std::string("CustomPrivacyPolicyContents") + "." + std::to_string(dep1 + 1) + ".CustomPrivacyPolicyItems." + std::to_string(dep2 + 1) + ".CustomPrivacyPolicyItemName", customPrivacyPolicyContents[dep1].customPrivacyPolicyItems[dep2].customPrivacyPolicyItemName);
    }
  }
}

std::string UpdateCustomPrivacyPolicyRequest::getCustomPrivacyPolicyId() const {
  return customPrivacyPolicyId_;
}

void UpdateCustomPrivacyPolicyRequest::setCustomPrivacyPolicyId(const std::string &customPrivacyPolicyId) {
  customPrivacyPolicyId_ = customPrivacyPolicyId;
  setParameter(std::string("CustomPrivacyPolicyId"), customPrivacyPolicyId);
}

std::string UpdateCustomPrivacyPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateCustomPrivacyPolicyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateCustomPrivacyPolicyRequest::getCustomPrivacyPolicyName() const {
  return customPrivacyPolicyName_;
}

void UpdateCustomPrivacyPolicyRequest::setCustomPrivacyPolicyName(const std::string &customPrivacyPolicyName) {
  customPrivacyPolicyName_ = customPrivacyPolicyName;
  setParameter(std::string("CustomPrivacyPolicyName"), customPrivacyPolicyName);
}


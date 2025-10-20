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

#include <alibabacloud/eiam/model/UpdateApplicationFederatedCredentialRequest.h>

using AlibabaCloud::Eiam::Model::UpdateApplicationFederatedCredentialRequest;

UpdateApplicationFederatedCredentialRequest::UpdateApplicationFederatedCredentialRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateApplicationFederatedCredential") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationFederatedCredentialRequest::~UpdateApplicationFederatedCredentialRequest() {}

std::string UpdateApplicationFederatedCredentialRequest::getApplicationFederatedCredentialId() const {
  return applicationFederatedCredentialId_;
}

void UpdateApplicationFederatedCredentialRequest::setApplicationFederatedCredentialId(const std::string &applicationFederatedCredentialId) {
  applicationFederatedCredentialId_ = applicationFederatedCredentialId;
  setParameter(std::string("ApplicationFederatedCredentialId"), applicationFederatedCredentialId);
}

std::vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings> UpdateApplicationFederatedCredentialRequest::getAttributeMappings() const {
  return attributeMappings_;
}

void UpdateApplicationFederatedCredentialRequest::setAttributeMappings(const std::vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings> &attributeMappings) {
  attributeMappings_ = attributeMappings;
  for(int dep1 = 0; dep1 != attributeMappings.size(); dep1++) {
    setParameter(std::string("AttributeMappings") + "." + std::to_string(dep1 + 1) + ".SourceValueExpression", attributeMappings[dep1].sourceValueExpression);
    setParameter(std::string("AttributeMappings") + "." + std::to_string(dep1 + 1) + ".TargetField", attributeMappings[dep1].targetField);
  }
}

std::string UpdateApplicationFederatedCredentialRequest::getApplicationId() const {
  return applicationId_;
}

void UpdateApplicationFederatedCredentialRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string UpdateApplicationFederatedCredentialRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateApplicationFederatedCredentialRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateApplicationFederatedCredentialRequest::getVerificationCondition() const {
  return verificationCondition_;
}

void UpdateApplicationFederatedCredentialRequest::setVerificationCondition(const std::string &verificationCondition) {
  verificationCondition_ = verificationCondition;
  setParameter(std::string("VerificationCondition"), verificationCondition);
}


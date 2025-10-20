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

#include <alibabacloud/eiam/model/CreateApplicationFederatedCredentialRequest.h>

using AlibabaCloud::Eiam::Model::CreateApplicationFederatedCredentialRequest;

CreateApplicationFederatedCredentialRequest::CreateApplicationFederatedCredentialRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateApplicationFederatedCredential") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationFederatedCredentialRequest::~CreateApplicationFederatedCredentialRequest() {}

std::string CreateApplicationFederatedCredentialRequest::getDescription() const {
  return description_;
}

void CreateApplicationFederatedCredentialRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> CreateApplicationFederatedCredentialRequest::getAttributeMappings() const {
  return attributeMappings_;
}

void CreateApplicationFederatedCredentialRequest::setAttributeMappings(const std::vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> &attributeMappings) {
  attributeMappings_ = attributeMappings;
  for(int dep1 = 0; dep1 != attributeMappings.size(); dep1++) {
    setParameter(std::string("AttributeMappings") + "." + std::to_string(dep1 + 1) + ".SourceValueExpression", attributeMappings[dep1].sourceValueExpression);
    setParameter(std::string("AttributeMappings") + "." + std::to_string(dep1 + 1) + ".TargetField", attributeMappings[dep1].targetField);
  }
}

std::string CreateApplicationFederatedCredentialRequest::getFederatedCredentialProviderId() const {
  return federatedCredentialProviderId_;
}

void CreateApplicationFederatedCredentialRequest::setFederatedCredentialProviderId(const std::string &federatedCredentialProviderId) {
  federatedCredentialProviderId_ = federatedCredentialProviderId;
  setParameter(std::string("FederatedCredentialProviderId"), federatedCredentialProviderId);
}

std::string CreateApplicationFederatedCredentialRequest::getApplicationId() const {
  return applicationId_;
}

void CreateApplicationFederatedCredentialRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string CreateApplicationFederatedCredentialRequest::getApplicationFederatedCredentialName() const {
  return applicationFederatedCredentialName_;
}

void CreateApplicationFederatedCredentialRequest::setApplicationFederatedCredentialName(const std::string &applicationFederatedCredentialName) {
  applicationFederatedCredentialName_ = applicationFederatedCredentialName;
  setParameter(std::string("ApplicationFederatedCredentialName"), applicationFederatedCredentialName);
}

std::string CreateApplicationFederatedCredentialRequest::getInstanceId() const {
  return instanceId_;
}

void CreateApplicationFederatedCredentialRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateApplicationFederatedCredentialRequest::getVerificationCondition() const {
  return verificationCondition_;
}

void CreateApplicationFederatedCredentialRequest::setVerificationCondition(const std::string &verificationCondition) {
  verificationCondition_ = verificationCondition;
  setParameter(std::string("VerificationCondition"), verificationCondition);
}

std::string CreateApplicationFederatedCredentialRequest::getApplicationFederatedCredentialType() const {
  return applicationFederatedCredentialType_;
}

void CreateApplicationFederatedCredentialRequest::setApplicationFederatedCredentialType(const std::string &applicationFederatedCredentialType) {
  applicationFederatedCredentialType_ = applicationFederatedCredentialType;
  setParameter(std::string("ApplicationFederatedCredentialType"), applicationFederatedCredentialType);
}


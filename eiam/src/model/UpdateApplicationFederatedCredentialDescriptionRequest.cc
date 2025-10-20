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

#include <alibabacloud/eiam/model/UpdateApplicationFederatedCredentialDescriptionRequest.h>

using AlibabaCloud::Eiam::Model::UpdateApplicationFederatedCredentialDescriptionRequest;

UpdateApplicationFederatedCredentialDescriptionRequest::UpdateApplicationFederatedCredentialDescriptionRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateApplicationFederatedCredentialDescription") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationFederatedCredentialDescriptionRequest::~UpdateApplicationFederatedCredentialDescriptionRequest() {}

std::string UpdateApplicationFederatedCredentialDescriptionRequest::getApplicationFederatedCredentialId() const {
  return applicationFederatedCredentialId_;
}

void UpdateApplicationFederatedCredentialDescriptionRequest::setApplicationFederatedCredentialId(const std::string &applicationFederatedCredentialId) {
  applicationFederatedCredentialId_ = applicationFederatedCredentialId;
  setParameter(std::string("ApplicationFederatedCredentialId"), applicationFederatedCredentialId);
}

std::string UpdateApplicationFederatedCredentialDescriptionRequest::getDescription() const {
  return description_;
}

void UpdateApplicationFederatedCredentialDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateApplicationFederatedCredentialDescriptionRequest::getApplicationId() const {
  return applicationId_;
}

void UpdateApplicationFederatedCredentialDescriptionRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string UpdateApplicationFederatedCredentialDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateApplicationFederatedCredentialDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


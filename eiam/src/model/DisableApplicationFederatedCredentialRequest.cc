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

#include <alibabacloud/eiam/model/DisableApplicationFederatedCredentialRequest.h>

using AlibabaCloud::Eiam::Model::DisableApplicationFederatedCredentialRequest;

DisableApplicationFederatedCredentialRequest::DisableApplicationFederatedCredentialRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "DisableApplicationFederatedCredential") {
  setMethod(HttpRequest::Method::Post);
}

DisableApplicationFederatedCredentialRequest::~DisableApplicationFederatedCredentialRequest() {}

std::string DisableApplicationFederatedCredentialRequest::getApplicationFederatedCredentialId() const {
  return applicationFederatedCredentialId_;
}

void DisableApplicationFederatedCredentialRequest::setApplicationFederatedCredentialId(const std::string &applicationFederatedCredentialId) {
  applicationFederatedCredentialId_ = applicationFederatedCredentialId;
  setParameter(std::string("ApplicationFederatedCredentialId"), applicationFederatedCredentialId);
}

std::string DisableApplicationFederatedCredentialRequest::getApplicationId() const {
  return applicationId_;
}

void DisableApplicationFederatedCredentialRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string DisableApplicationFederatedCredentialRequest::getInstanceId() const {
  return instanceId_;
}

void DisableApplicationFederatedCredentialRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


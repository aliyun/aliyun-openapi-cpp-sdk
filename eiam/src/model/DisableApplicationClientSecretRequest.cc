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

#include <alibabacloud/eiam/model/DisableApplicationClientSecretRequest.h>

using AlibabaCloud::Eiam::Model::DisableApplicationClientSecretRequest;

DisableApplicationClientSecretRequest::DisableApplicationClientSecretRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "DisableApplicationClientSecret") {
  setMethod(HttpRequest::Method::Post);
}

DisableApplicationClientSecretRequest::~DisableApplicationClientSecretRequest() {}

std::string DisableApplicationClientSecretRequest::getApplicationId() const {
  return applicationId_;
}

void DisableApplicationClientSecretRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string DisableApplicationClientSecretRequest::getSecretId() const {
  return secretId_;
}

void DisableApplicationClientSecretRequest::setSecretId(const std::string &secretId) {
  secretId_ = secretId;
  setParameter(std::string("SecretId"), secretId);
}

std::string DisableApplicationClientSecretRequest::getInstanceId() const {
  return instanceId_;
}

void DisableApplicationClientSecretRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


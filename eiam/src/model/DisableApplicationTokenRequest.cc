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

#include <alibabacloud/eiam/model/DisableApplicationTokenRequest.h>

using AlibabaCloud::Eiam::Model::DisableApplicationTokenRequest;

DisableApplicationTokenRequest::DisableApplicationTokenRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "DisableApplicationToken") {
  setMethod(HttpRequest::Method::Post);
}

DisableApplicationTokenRequest::~DisableApplicationTokenRequest() {}

std::string DisableApplicationTokenRequest::getApplicationId() const {
  return applicationId_;
}

void DisableApplicationTokenRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string DisableApplicationTokenRequest::getApplicationTokenId() const {
  return applicationTokenId_;
}

void DisableApplicationTokenRequest::setApplicationTokenId(const std::string &applicationTokenId) {
  applicationTokenId_ = applicationTokenId;
  setParameter(std::string("ApplicationTokenId"), applicationTokenId);
}

std::string DisableApplicationTokenRequest::getInstanceId() const {
  return instanceId_;
}

void DisableApplicationTokenRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


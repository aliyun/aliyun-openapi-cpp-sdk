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

#include <alibabacloud/eiam/model/EnableApplicationTokenRequest.h>

using AlibabaCloud::Eiam::Model::EnableApplicationTokenRequest;

EnableApplicationTokenRequest::EnableApplicationTokenRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "EnableApplicationToken") {
  setMethod(HttpRequest::Method::Post);
}

EnableApplicationTokenRequest::~EnableApplicationTokenRequest() {}

std::string EnableApplicationTokenRequest::getApplicationId() const {
  return applicationId_;
}

void EnableApplicationTokenRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string EnableApplicationTokenRequest::getApplicationTokenId() const {
  return applicationTokenId_;
}

void EnableApplicationTokenRequest::setApplicationTokenId(const std::string &applicationTokenId) {
  applicationTokenId_ = applicationTokenId;
  setParameter(std::string("ApplicationTokenId"), applicationTokenId);
}

std::string EnableApplicationTokenRequest::getInstanceId() const {
  return instanceId_;
}

void EnableApplicationTokenRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


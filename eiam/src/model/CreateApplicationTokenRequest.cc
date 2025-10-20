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

#include <alibabacloud/eiam/model/CreateApplicationTokenRequest.h>

using AlibabaCloud::Eiam::Model::CreateApplicationTokenRequest;

CreateApplicationTokenRequest::CreateApplicationTokenRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateApplicationToken") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationTokenRequest::~CreateApplicationTokenRequest() {}

long CreateApplicationTokenRequest::getExpirationTime() const {
  return expirationTime_;
}

void CreateApplicationTokenRequest::setExpirationTime(long expirationTime) {
  expirationTime_ = expirationTime;
  setParameter(std::string("ExpirationTime"), std::to_string(expirationTime));
}

std::string CreateApplicationTokenRequest::getApplicationId() const {
  return applicationId_;
}

void CreateApplicationTokenRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string CreateApplicationTokenRequest::getApplicationTokenType() const {
  return applicationTokenType_;
}

void CreateApplicationTokenRequest::setApplicationTokenType(const std::string &applicationTokenType) {
  applicationTokenType_ = applicationTokenType;
  setParameter(std::string("ApplicationTokenType"), applicationTokenType);
}

std::string CreateApplicationTokenRequest::getInstanceId() const {
  return instanceId_;
}

void CreateApplicationTokenRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


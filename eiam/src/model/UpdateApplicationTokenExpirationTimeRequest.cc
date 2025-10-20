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

#include <alibabacloud/eiam/model/UpdateApplicationTokenExpirationTimeRequest.h>

using AlibabaCloud::Eiam::Model::UpdateApplicationTokenExpirationTimeRequest;

UpdateApplicationTokenExpirationTimeRequest::UpdateApplicationTokenExpirationTimeRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateApplicationTokenExpirationTime") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationTokenExpirationTimeRequest::~UpdateApplicationTokenExpirationTimeRequest() {}

long UpdateApplicationTokenExpirationTimeRequest::getExpirationTime() const {
  return expirationTime_;
}

void UpdateApplicationTokenExpirationTimeRequest::setExpirationTime(long expirationTime) {
  expirationTime_ = expirationTime;
  setParameter(std::string("ExpirationTime"), std::to_string(expirationTime));
}

std::string UpdateApplicationTokenExpirationTimeRequest::getApplicationId() const {
  return applicationId_;
}

void UpdateApplicationTokenExpirationTimeRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string UpdateApplicationTokenExpirationTimeRequest::getApplicationTokenId() const {
  return applicationTokenId_;
}

void UpdateApplicationTokenExpirationTimeRequest::setApplicationTokenId(const std::string &applicationTokenId) {
  applicationTokenId_ = applicationTokenId;
  setParameter(std::string("ApplicationTokenId"), applicationTokenId);
}

std::string UpdateApplicationTokenExpirationTimeRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateApplicationTokenExpirationTimeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


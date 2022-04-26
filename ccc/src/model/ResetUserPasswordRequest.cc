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

#include <alibabacloud/ccc/model/ResetUserPasswordRequest.h>

using AlibabaCloud::CCC::Model::ResetUserPasswordRequest;

ResetUserPasswordRequest::ResetUserPasswordRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ResetUserPassword") {
  setMethod(HttpRequest::Method::Post);
}

ResetUserPasswordRequest::~ResetUserPasswordRequest() {}

std::string ResetUserPasswordRequest::getUserId() const {
  return userId_;
}

void ResetUserPasswordRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ResetUserPasswordRequest::getPassword() const {
  return password_;
}

void ResetUserPasswordRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ResetUserPasswordRequest::getInstanceId() const {
  return instanceId_;
}

void ResetUserPasswordRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


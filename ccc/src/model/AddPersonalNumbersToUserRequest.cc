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

#include <alibabacloud/ccc/model/AddPersonalNumbersToUserRequest.h>

using AlibabaCloud::CCC::Model::AddPersonalNumbersToUserRequest;

AddPersonalNumbersToUserRequest::AddPersonalNumbersToUserRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "AddPersonalNumbersToUser") {
  setMethod(HttpRequest::Method::Post);
}

AddPersonalNumbersToUserRequest::~AddPersonalNumbersToUserRequest() {}

std::string AddPersonalNumbersToUserRequest::getUserId() const {
  return userId_;
}

void AddPersonalNumbersToUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string AddPersonalNumbersToUserRequest::getNumberList() const {
  return numberList_;
}

void AddPersonalNumbersToUserRequest::setNumberList(const std::string &numberList) {
  numberList_ = numberList;
  setParameter(std::string("NumberList"), numberList);
}

std::string AddPersonalNumbersToUserRequest::getInstanceId() const {
  return instanceId_;
}

void AddPersonalNumbersToUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


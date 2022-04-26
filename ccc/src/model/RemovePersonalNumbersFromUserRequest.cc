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

#include <alibabacloud/ccc/model/RemovePersonalNumbersFromUserRequest.h>

using AlibabaCloud::CCC::Model::RemovePersonalNumbersFromUserRequest;

RemovePersonalNumbersFromUserRequest::RemovePersonalNumbersFromUserRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "RemovePersonalNumbersFromUser") {
  setMethod(HttpRequest::Method::Post);
}

RemovePersonalNumbersFromUserRequest::~RemovePersonalNumbersFromUserRequest() {}

std::string RemovePersonalNumbersFromUserRequest::getUserId() const {
  return userId_;
}

void RemovePersonalNumbersFromUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string RemovePersonalNumbersFromUserRequest::getNumberList() const {
  return numberList_;
}

void RemovePersonalNumbersFromUserRequest::setNumberList(const std::string &numberList) {
  numberList_ = numberList;
  setParameter(std::string("NumberList"), numberList);
}

std::string RemovePersonalNumbersFromUserRequest::getInstanceId() const {
  return instanceId_;
}

void RemovePersonalNumbersFromUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


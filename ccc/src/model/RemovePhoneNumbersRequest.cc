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

#include <alibabacloud/ccc/model/RemovePhoneNumbersRequest.h>

using AlibabaCloud::CCC::Model::RemovePhoneNumbersRequest;

RemovePhoneNumbersRequest::RemovePhoneNumbersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "RemovePhoneNumbers") {
  setMethod(HttpRequest::Method::Post);
}

RemovePhoneNumbersRequest::~RemovePhoneNumbersRequest() {}

std::string RemovePhoneNumbersRequest::getNumberList() const {
  return numberList_;
}

void RemovePhoneNumbersRequest::setNumberList(const std::string &numberList) {
  numberList_ = numberList;
  setParameter(std::string("NumberList"), numberList);
}

std::string RemovePhoneNumbersRequest::getInstanceId() const {
  return instanceId_;
}

void RemovePhoneNumbersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool RemovePhoneNumbersRequest::getForce() const {
  return force_;
}

void RemovePhoneNumbersRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}


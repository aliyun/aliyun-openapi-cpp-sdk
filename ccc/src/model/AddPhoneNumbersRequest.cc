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

#include <alibabacloud/ccc/model/AddPhoneNumbersRequest.h>

using AlibabaCloud::CCC::Model::AddPhoneNumbersRequest;

AddPhoneNumbersRequest::AddPhoneNumbersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "AddPhoneNumbers") {
  setMethod(HttpRequest::Method::Post);
}

AddPhoneNumbersRequest::~AddPhoneNumbersRequest() {}

std::string AddPhoneNumbersRequest::getContactFlowId() const {
  return contactFlowId_;
}

void AddPhoneNumbersRequest::setContactFlowId(const std::string &contactFlowId) {
  contactFlowId_ = contactFlowId;
  setParameter(std::string("ContactFlowId"), contactFlowId);
}

std::string AddPhoneNumbersRequest::getUsage() const {
  return usage_;
}

void AddPhoneNumbersRequest::setUsage(const std::string &usage) {
  usage_ = usage;
  setParameter(std::string("Usage"), usage);
}

std::string AddPhoneNumbersRequest::getNumberGroupId() const {
  return numberGroupId_;
}

void AddPhoneNumbersRequest::setNumberGroupId(const std::string &numberGroupId) {
  numberGroupId_ = numberGroupId;
  setParameter(std::string("NumberGroupId"), numberGroupId);
}

std::string AddPhoneNumbersRequest::getNumberList() const {
  return numberList_;
}

void AddPhoneNumbersRequest::setNumberList(const std::string &numberList) {
  numberList_ = numberList;
  setParameter(std::string("NumberList"), numberList);
}

std::string AddPhoneNumbersRequest::getInstanceId() const {
  return instanceId_;
}

void AddPhoneNumbersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


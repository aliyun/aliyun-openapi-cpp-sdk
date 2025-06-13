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

#include <alibabacloud/ram/model/BindMFADeviceRequest.h>

using AlibabaCloud::Ram::Model::BindMFADeviceRequest;

BindMFADeviceRequest::BindMFADeviceRequest()
    : RpcServiceRequest("ram", "2015-05-01", "BindMFADevice") {
  setMethod(HttpRequest::Method::Post);
}

BindMFADeviceRequest::~BindMFADeviceRequest() {}

std::string BindMFADeviceRequest::getAuthenticationCode2() const {
  return authenticationCode2_;
}

void BindMFADeviceRequest::setAuthenticationCode2(const std::string &authenticationCode2) {
  authenticationCode2_ = authenticationCode2;
  setParameter(std::string("AuthenticationCode2"), authenticationCode2);
}

std::string BindMFADeviceRequest::getAuthenticationCode1() const {
  return authenticationCode1_;
}

void BindMFADeviceRequest::setAuthenticationCode1(const std::string &authenticationCode1) {
  authenticationCode1_ = authenticationCode1;
  setParameter(std::string("AuthenticationCode1"), authenticationCode1);
}

std::string BindMFADeviceRequest::getSerialNumber() const {
  return serialNumber_;
}

void BindMFADeviceRequest::setSerialNumber(const std::string &serialNumber) {
  serialNumber_ = serialNumber;
  setParameter(std::string("SerialNumber"), serialNumber);
}

std::string BindMFADeviceRequest::getUserName() const {
  return userName_;
}

void BindMFADeviceRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}


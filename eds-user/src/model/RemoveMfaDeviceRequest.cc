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

#include <alibabacloud/eds-user/model/RemoveMfaDeviceRequest.h>

using AlibabaCloud::Eds_user::Model::RemoveMfaDeviceRequest;

RemoveMfaDeviceRequest::RemoveMfaDeviceRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "RemoveMfaDevice") {
  setMethod(HttpRequest::Method::Post);
}

RemoveMfaDeviceRequest::~RemoveMfaDeviceRequest() {}

std::string RemoveMfaDeviceRequest::getSerialNumber() const {
  return serialNumber_;
}

void RemoveMfaDeviceRequest::setSerialNumber(const std::string &serialNumber) {
  serialNumber_ = serialNumber;
  setParameter(std::string("SerialNumber"), serialNumber);
}

std::string RemoveMfaDeviceRequest::getAdDomain() const {
  return adDomain_;
}

void RemoveMfaDeviceRequest::setAdDomain(const std::string &adDomain) {
  adDomain_ = adDomain;
  setParameter(std::string("AdDomain"), adDomain);
}


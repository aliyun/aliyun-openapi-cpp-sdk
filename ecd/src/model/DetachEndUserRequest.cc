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

#include <alibabacloud/ecd/model/DetachEndUserRequest.h>

using AlibabaCloud::Ecd::Model::DetachEndUserRequest;

DetachEndUserRequest::DetachEndUserRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DetachEndUser") {
  setMethod(HttpRequest::Method::Post);
}

DetachEndUserRequest::~DetachEndUserRequest() {}

std::string DetachEndUserRequest::getClientType() const {
  return clientType_;
}

void DetachEndUserRequest::setClientType(const std::string &clientType) {
  clientType_ = clientType;
  setParameter(std::string("ClientType"), clientType);
}

std::string DetachEndUserRequest::getDeviceId() const {
  return deviceId_;
}

void DetachEndUserRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string DetachEndUserRequest::getAdDomain() const {
  return adDomain_;
}

void DetachEndUserRequest::setAdDomain(const std::string &adDomain) {
  adDomain_ = adDomain;
  setParameter(std::string("AdDomain"), adDomain);
}

std::string DetachEndUserRequest::getEndUserId() const {
  return endUserId_;
}

void DetachEndUserRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string DetachEndUserRequest::getDirectoryId() const {
  return directoryId_;
}

void DetachEndUserRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::string DetachEndUserRequest::getRegion() const {
  return region_;
}

void DetachEndUserRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


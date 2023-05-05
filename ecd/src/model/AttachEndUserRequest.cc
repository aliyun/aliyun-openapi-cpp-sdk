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

#include <alibabacloud/ecd/model/AttachEndUserRequest.h>

using AlibabaCloud::Ecd::Model::AttachEndUserRequest;

AttachEndUserRequest::AttachEndUserRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "AttachEndUser") {
  setMethod(HttpRequest::Method::Post);
}

AttachEndUserRequest::~AttachEndUserRequest() {}

int AttachEndUserRequest::getClientType() const {
  return clientType_;
}

void AttachEndUserRequest::setClientType(int clientType) {
  clientType_ = clientType;
  setParameter(std::string("ClientType"), std::to_string(clientType));
}

std::string AttachEndUserRequest::getUserType() const {
  return userType_;
}

void AttachEndUserRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

std::string AttachEndUserRequest::getDeviceId() const {
  return deviceId_;
}

void AttachEndUserRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string AttachEndUserRequest::getAdDomain() const {
  return adDomain_;
}

void AttachEndUserRequest::setAdDomain(const std::string &adDomain) {
  adDomain_ = adDomain;
  setParameter(std::string("AdDomain"), adDomain);
}

std::string AttachEndUserRequest::getRegionId() const {
  return regionId_;
}

void AttachEndUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachEndUserRequest::getEndUserId() const {
  return endUserId_;
}

void AttachEndUserRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string AttachEndUserRequest::getDirectoryId() const {
  return directoryId_;
}

void AttachEndUserRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}


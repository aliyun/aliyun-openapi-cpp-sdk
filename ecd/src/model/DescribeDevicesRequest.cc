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

#include <alibabacloud/ecd/model/DescribeDevicesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeDevicesRequest;

DescribeDevicesRequest::DescribeDevicesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeDevices") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDevicesRequest::~DescribeDevicesRequest() {}

std::string DescribeDevicesRequest::getClientType() const {
  return clientType_;
}

void DescribeDevicesRequest::setClientType(const std::string &clientType) {
  clientType_ = clientType;
  setParameter(std::string("ClientType"), clientType);
}

std::string DescribeDevicesRequest::getUserType() const {
  return userType_;
}

void DescribeDevicesRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

std::string DescribeDevicesRequest::getDeviceId() const {
  return deviceId_;
}

void DescribeDevicesRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

int DescribeDevicesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDevicesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDevicesRequest::getAdDomain() const {
  return adDomain_;
}

void DescribeDevicesRequest::setAdDomain(const std::string &adDomain) {
  adDomain_ = adDomain;
  setParameter(std::string("AdDomain"), adDomain);
}

int DescribeDevicesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDevicesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDevicesRequest::getEndUserId() const {
  return endUserId_;
}

void DescribeDevicesRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string DescribeDevicesRequest::getDirectoryId() const {
  return directoryId_;
}

void DescribeDevicesRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::string DescribeDevicesRequest::getRegion() const {
  return region_;
}

void DescribeDevicesRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


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

#include <alibabacloud/ecd/model/CreateRAMDirectoryRequest.h>

using AlibabaCloud::Ecd::Model::CreateRAMDirectoryRequest;

CreateRAMDirectoryRequest::CreateRAMDirectoryRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateRAMDirectory") {
  setMethod(HttpRequest::Method::Post);
}

CreateRAMDirectoryRequest::~CreateRAMDirectoryRequest() {}

std::string CreateRAMDirectoryRequest::getDesktopAccessType() const {
  return desktopAccessType_;
}

void CreateRAMDirectoryRequest::setDesktopAccessType(const std::string &desktopAccessType) {
  desktopAccessType_ = desktopAccessType;
  setParameter(std::string("DesktopAccessType"), desktopAccessType);
}

bool CreateRAMDirectoryRequest::getEnableInternetAccess() const {
  return enableInternetAccess_;
}

void CreateRAMDirectoryRequest::setEnableInternetAccess(bool enableInternetAccess) {
  enableInternetAccess_ = enableInternetAccess;
  setParameter(std::string("EnableInternetAccess"), enableInternetAccess ? "true" : "false");
}

std::string CreateRAMDirectoryRequest::getDirectoryName() const {
  return directoryName_;
}

void CreateRAMDirectoryRequest::setDirectoryName(const std::string &directoryName) {
  directoryName_ = directoryName;
  setParameter(std::string("DirectoryName"), directoryName);
}

std::vector<std::string> CreateRAMDirectoryRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateRAMDirectoryRequest::setVSwitchId(const std::vector<std::string> &vSwitchId) {
  vSwitchId_ = vSwitchId;
}

std::string CreateRAMDirectoryRequest::getRegionId() const {
  return regionId_;
}

void CreateRAMDirectoryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateRAMDirectoryRequest::getEnableAdminAccess() const {
  return enableAdminAccess_;
}

void CreateRAMDirectoryRequest::setEnableAdminAccess(bool enableAdminAccess) {
  enableAdminAccess_ = enableAdminAccess;
  setParameter(std::string("EnableAdminAccess"), enableAdminAccess ? "true" : "false");
}


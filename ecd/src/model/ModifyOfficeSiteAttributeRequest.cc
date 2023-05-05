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

#include <alibabacloud/ecd/model/ModifyOfficeSiteAttributeRequest.h>

using AlibabaCloud::Ecd::Model::ModifyOfficeSiteAttributeRequest;

ModifyOfficeSiteAttributeRequest::ModifyOfficeSiteAttributeRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyOfficeSiteAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyOfficeSiteAttributeRequest::~ModifyOfficeSiteAttributeRequest() {}

std::string ModifyOfficeSiteAttributeRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ModifyOfficeSiteAttributeRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string ModifyOfficeSiteAttributeRequest::getDesktopAccessType() const {
  return desktopAccessType_;
}

void ModifyOfficeSiteAttributeRequest::setDesktopAccessType(const std::string &desktopAccessType) {
  desktopAccessType_ = desktopAccessType;
  setParameter(std::string("DesktopAccessType"), desktopAccessType);
}

std::string ModifyOfficeSiteAttributeRequest::getOfficeSiteName() const {
  return officeSiteName_;
}

void ModifyOfficeSiteAttributeRequest::setOfficeSiteName(const std::string &officeSiteName) {
  officeSiteName_ = officeSiteName;
  setParameter(std::string("OfficeSiteName"), officeSiteName);
}

bool ModifyOfficeSiteAttributeRequest::getNeedVerifyLoginRisk() const {
  return needVerifyLoginRisk_;
}

void ModifyOfficeSiteAttributeRequest::setNeedVerifyLoginRisk(bool needVerifyLoginRisk) {
  needVerifyLoginRisk_ = needVerifyLoginRisk;
  setParameter(std::string("NeedVerifyLoginRisk"), needVerifyLoginRisk ? "true" : "false");
}

bool ModifyOfficeSiteAttributeRequest::getNeedVerifyZeroDevice() const {
  return needVerifyZeroDevice_;
}

void ModifyOfficeSiteAttributeRequest::setNeedVerifyZeroDevice(bool needVerifyZeroDevice) {
  needVerifyZeroDevice_ = needVerifyZeroDevice;
  setParameter(std::string("NeedVerifyZeroDevice"), needVerifyZeroDevice ? "true" : "false");
}

std::string ModifyOfficeSiteAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyOfficeSiteAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyOfficeSiteAttributeRequest::getEnableAdminAccess() const {
  return enableAdminAccess_;
}

void ModifyOfficeSiteAttributeRequest::setEnableAdminAccess(bool enableAdminAccess) {
  enableAdminAccess_ = enableAdminAccess;
  setParameter(std::string("EnableAdminAccess"), enableAdminAccess ? "true" : "false");
}


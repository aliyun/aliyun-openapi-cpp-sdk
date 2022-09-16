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

#include <alibabacloud/ecd/model/ModifyOfficeSiteCrossDesktopAccessRequest.h>

using AlibabaCloud::Ecd::Model::ModifyOfficeSiteCrossDesktopAccessRequest;

ModifyOfficeSiteCrossDesktopAccessRequest::ModifyOfficeSiteCrossDesktopAccessRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyOfficeSiteCrossDesktopAccess") {
  setMethod(HttpRequest::Method::Post);
}

ModifyOfficeSiteCrossDesktopAccessRequest::~ModifyOfficeSiteCrossDesktopAccessRequest() {}

std::string ModifyOfficeSiteCrossDesktopAccessRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ModifyOfficeSiteCrossDesktopAccessRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

bool ModifyOfficeSiteCrossDesktopAccessRequest::getEnableCrossDesktopAccess() const {
  return enableCrossDesktopAccess_;
}

void ModifyOfficeSiteCrossDesktopAccessRequest::setEnableCrossDesktopAccess(bool enableCrossDesktopAccess) {
  enableCrossDesktopAccess_ = enableCrossDesktopAccess;
  setParameter(std::string("EnableCrossDesktopAccess"), enableCrossDesktopAccess ? "true" : "false");
}

std::string ModifyOfficeSiteCrossDesktopAccessRequest::getRegionId() const {
  return regionId_;
}

void ModifyOfficeSiteCrossDesktopAccessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


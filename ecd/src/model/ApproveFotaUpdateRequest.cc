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

#include <alibabacloud/ecd/model/ApproveFotaUpdateRequest.h>

using AlibabaCloud::Ecd::Model::ApproveFotaUpdateRequest;

ApproveFotaUpdateRequest::ApproveFotaUpdateRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ApproveFotaUpdate") {
  setMethod(HttpRequest::Method::Post);
}

ApproveFotaUpdateRequest::~ApproveFotaUpdateRequest() {}

std::string ApproveFotaUpdateRequest::getAppVersion() const {
  return appVersion_;
}

void ApproveFotaUpdateRequest::setAppVersion(const std::string &appVersion) {
  appVersion_ = appVersion;
  setParameter(std::string("AppVersion"), appVersion);
}

std::string ApproveFotaUpdateRequest::getRegionId() const {
  return regionId_;
}

void ApproveFotaUpdateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ApproveFotaUpdateRequest::getDesktopId() const {
  return desktopId_;
}

void ApproveFotaUpdateRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}


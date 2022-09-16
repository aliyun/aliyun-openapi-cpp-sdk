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

#include <alibabacloud/ecd/model/DisableDesktopsInGroupRequest.h>

using AlibabaCloud::Ecd::Model::DisableDesktopsInGroupRequest;

DisableDesktopsInGroupRequest::DisableDesktopsInGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DisableDesktopsInGroup") {
  setMethod(HttpRequest::Method::Post);
}

DisableDesktopsInGroupRequest::~DisableDesktopsInGroupRequest() {}

std::vector<std::string> DisableDesktopsInGroupRequest::getDesktopIds() const {
  return desktopIds_;
}

void DisableDesktopsInGroupRequest::setDesktopIds(const std::vector<std::string> &desktopIds) {
  desktopIds_ = desktopIds;
}

std::string DisableDesktopsInGroupRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void DisableDesktopsInGroupRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string DisableDesktopsInGroupRequest::getRegionId() const {
  return regionId_;
}

void DisableDesktopsInGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


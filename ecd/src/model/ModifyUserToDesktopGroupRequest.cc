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

#include <alibabacloud/ecd/model/ModifyUserToDesktopGroupRequest.h>

using AlibabaCloud::Ecd::Model::ModifyUserToDesktopGroupRequest;

ModifyUserToDesktopGroupRequest::ModifyUserToDesktopGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyUserToDesktopGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyUserToDesktopGroupRequest::~ModifyUserToDesktopGroupRequest() {}

std::vector<std::string> ModifyUserToDesktopGroupRequest::getOldEndUserIds() const {
  return oldEndUserIds_;
}

void ModifyUserToDesktopGroupRequest::setOldEndUserIds(const std::vector<std::string> &oldEndUserIds) {
  oldEndUserIds_ = oldEndUserIds;
}

std::string ModifyUserToDesktopGroupRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void ModifyUserToDesktopGroupRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string ModifyUserToDesktopGroupRequest::getRegionId() const {
  return regionId_;
}

void ModifyUserToDesktopGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ModifyUserToDesktopGroupRequest::getNewEndUserIds() const {
  return newEndUserIds_;
}

void ModifyUserToDesktopGroupRequest::setNewEndUserIds(const std::vector<std::string> &newEndUserIds) {
  newEndUserIds_ = newEndUserIds;
}


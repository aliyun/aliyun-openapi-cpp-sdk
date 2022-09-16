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

#include <alibabacloud/ecd/model/RemoveUserFromDesktopGroupRequest.h>

using AlibabaCloud::Ecd::Model::RemoveUserFromDesktopGroupRequest;

RemoveUserFromDesktopGroupRequest::RemoveUserFromDesktopGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "RemoveUserFromDesktopGroup") {
  setMethod(HttpRequest::Method::Post);
}

RemoveUserFromDesktopGroupRequest::~RemoveUserFromDesktopGroupRequest() {}

std::vector<std::string> RemoveUserFromDesktopGroupRequest::getEndUserIds() const {
  return endUserIds_;
}

void RemoveUserFromDesktopGroupRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

std::string RemoveUserFromDesktopGroupRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void RemoveUserFromDesktopGroupRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string RemoveUserFromDesktopGroupRequest::getRegionId() const {
  return regionId_;
}

void RemoveUserFromDesktopGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> RemoveUserFromDesktopGroupRequest::getDesktopGroupIds() const {
  return desktopGroupIds_;
}

void RemoveUserFromDesktopGroupRequest::setDesktopGroupIds(const std::vector<std::string> &desktopGroupIds) {
  desktopGroupIds_ = desktopGroupIds;
}


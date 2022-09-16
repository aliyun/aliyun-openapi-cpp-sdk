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

#include <alibabacloud/ecd/model/AddUserToDesktopGroupRequest.h>

using AlibabaCloud::Ecd::Model::AddUserToDesktopGroupRequest;

AddUserToDesktopGroupRequest::AddUserToDesktopGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "AddUserToDesktopGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddUserToDesktopGroupRequest::~AddUserToDesktopGroupRequest() {}

std::vector<std::string> AddUserToDesktopGroupRequest::getEndUserIds() const {
  return endUserIds_;
}

void AddUserToDesktopGroupRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

std::string AddUserToDesktopGroupRequest::getClientToken() const {
  return clientToken_;
}

void AddUserToDesktopGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddUserToDesktopGroupRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void AddUserToDesktopGroupRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string AddUserToDesktopGroupRequest::getRegionId() const {
  return regionId_;
}

void AddUserToDesktopGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> AddUserToDesktopGroupRequest::getDesktopGroupIds() const {
  return desktopGroupIds_;
}

void AddUserToDesktopGroupRequest::setDesktopGroupIds(const std::vector<std::string> &desktopGroupIds) {
  desktopGroupIds_ = desktopGroupIds;
}


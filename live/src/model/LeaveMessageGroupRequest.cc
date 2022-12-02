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

#include <alibabacloud/live/model/LeaveMessageGroupRequest.h>

using AlibabaCloud::Live::Model::LeaveMessageGroupRequest;

LeaveMessageGroupRequest::LeaveMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "LeaveMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

LeaveMessageGroupRequest::~LeaveMessageGroupRequest() {}

std::string LeaveMessageGroupRequest::getUserId() const {
  return userId_;
}

void LeaveMessageGroupRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

int LeaveMessageGroupRequest::getBroadCastType() const {
  return broadCastType_;
}

void LeaveMessageGroupRequest::setBroadCastType(int broadCastType) {
  broadCastType_ = broadCastType;
  setBodyParameter(std::string("BroadCastType"), std::to_string(broadCastType));
}

bool LeaveMessageGroupRequest::getBroadCastStatistics() const {
  return broadCastStatistics_;
}

void LeaveMessageGroupRequest::setBroadCastStatistics(bool broadCastStatistics) {
  broadCastStatistics_ = broadCastStatistics;
  setBodyParameter(std::string("BroadCastStatistics"), broadCastStatistics ? "true" : "false");
}

std::string LeaveMessageGroupRequest::getGroupId() const {
  return groupId_;
}

void LeaveMessageGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string LeaveMessageGroupRequest::getAppId() const {
  return appId_;
}

void LeaveMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}


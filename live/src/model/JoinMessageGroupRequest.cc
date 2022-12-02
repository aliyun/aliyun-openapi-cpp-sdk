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

#include <alibabacloud/live/model/JoinMessageGroupRequest.h>

using AlibabaCloud::Live::Model::JoinMessageGroupRequest;

JoinMessageGroupRequest::JoinMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "JoinMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

JoinMessageGroupRequest::~JoinMessageGroupRequest() {}

std::string JoinMessageGroupRequest::getUserId() const {
  return userId_;
}

void JoinMessageGroupRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

int JoinMessageGroupRequest::getBroadCastType() const {
  return broadCastType_;
}

void JoinMessageGroupRequest::setBroadCastType(int broadCastType) {
  broadCastType_ = broadCastType;
  setBodyParameter(std::string("BroadCastType"), std::to_string(broadCastType));
}

bool JoinMessageGroupRequest::getBroadCastStatistics() const {
  return broadCastStatistics_;
}

void JoinMessageGroupRequest::setBroadCastStatistics(bool broadCastStatistics) {
  broadCastStatistics_ = broadCastStatistics;
  setBodyParameter(std::string("BroadCastStatistics"), broadCastStatistics ? "true" : "false");
}

std::string JoinMessageGroupRequest::getGroupId() const {
  return groupId_;
}

void JoinMessageGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string JoinMessageGroupRequest::getAppId() const {
  return appId_;
}

void JoinMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}


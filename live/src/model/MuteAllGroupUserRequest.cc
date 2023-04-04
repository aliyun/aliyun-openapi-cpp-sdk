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

#include <alibabacloud/live/model/MuteAllGroupUserRequest.h>

using AlibabaCloud::Live::Model::MuteAllGroupUserRequest;

MuteAllGroupUserRequest::MuteAllGroupUserRequest()
    : RpcServiceRequest("live", "2016-11-01", "MuteAllGroupUser") {
  setMethod(HttpRequest::Method::Post);
}

MuteAllGroupUserRequest::~MuteAllGroupUserRequest() {}

std::string MuteAllGroupUserRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void MuteAllGroupUserRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setBodyParameter(std::string("OperatorUserId"), operatorUserId);
}

int MuteAllGroupUserRequest::getBroadCastType() const {
  return broadCastType_;
}

void MuteAllGroupUserRequest::setBroadCastType(int broadCastType) {
  broadCastType_ = broadCastType;
  setBodyParameter(std::string("BroadCastType"), std::to_string(broadCastType));
}

std::string MuteAllGroupUserRequest::getGroupId() const {
  return groupId_;
}

void MuteAllGroupUserRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string MuteAllGroupUserRequest::getAppId() const {
  return appId_;
}

void MuteAllGroupUserRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}


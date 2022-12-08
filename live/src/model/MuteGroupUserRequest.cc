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

#include <alibabacloud/live/model/MuteGroupUserRequest.h>

using AlibabaCloud::Live::Model::MuteGroupUserRequest;

MuteGroupUserRequest::MuteGroupUserRequest()
    : RpcServiceRequest("live", "2016-11-01", "MuteGroupUser") {
  setMethod(HttpRequest::Method::Post);
}

MuteGroupUserRequest::~MuteGroupUserRequest() {}

std::vector<MuteGroupUserRequest::std::string> MuteGroupUserRequest::getMuteUserList() const {
  return muteUserList_;
}

void MuteGroupUserRequest::setMuteUserList(const std::vector<MuteGroupUserRequest::std::string> &muteUserList) {
  muteUserList_ = muteUserList;
  for(int dep1 = 0; dep1 != muteUserList.size(); dep1++) {
    setBodyParameter(std::string("MuteUserList") + "." + std::to_string(dep1 + 1), muteUserList[dep1]);
  }
}

std::string MuteGroupUserRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void MuteGroupUserRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setBodyParameter(std::string("OperatorUserId"), operatorUserId);
}

int MuteGroupUserRequest::getBroadCastType() const {
  return broadCastType_;
}

void MuteGroupUserRequest::setBroadCastType(int broadCastType) {
  broadCastType_ = broadCastType;
  setBodyParameter(std::string("BroadCastType"), std::to_string(broadCastType));
}

std::string MuteGroupUserRequest::getGroupId() const {
  return groupId_;
}

void MuteGroupUserRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

int MuteGroupUserRequest::getMuteTime() const {
  return muteTime_;
}

void MuteGroupUserRequest::setMuteTime(int muteTime) {
  muteTime_ = muteTime;
  setBodyParameter(std::string("MuteTime"), std::to_string(muteTime));
}

std::string MuteGroupUserRequest::getAppId() const {
  return appId_;
}

void MuteGroupUserRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}


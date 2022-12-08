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

#include <alibabacloud/live/model/CancelMuteGroupUserRequest.h>

using AlibabaCloud::Live::Model::CancelMuteGroupUserRequest;

CancelMuteGroupUserRequest::CancelMuteGroupUserRequest()
    : RpcServiceRequest("live", "2016-11-01", "CancelMuteGroupUser") {
  setMethod(HttpRequest::Method::Post);
}

CancelMuteGroupUserRequest::~CancelMuteGroupUserRequest() {}

std::vector<CancelMuteGroupUserRequest::std::string> CancelMuteGroupUserRequest::getCancelMuteUserList() const {
  return cancelMuteUserList_;
}

void CancelMuteGroupUserRequest::setCancelMuteUserList(const std::vector<CancelMuteGroupUserRequest::std::string> &cancelMuteUserList) {
  cancelMuteUserList_ = cancelMuteUserList;
  for(int dep1 = 0; dep1 != cancelMuteUserList.size(); dep1++) {
    setBodyParameter(std::string("CancelMuteUserList") + "." + std::to_string(dep1 + 1), cancelMuteUserList[dep1]);
  }
}

std::string CancelMuteGroupUserRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void CancelMuteGroupUserRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setBodyParameter(std::string("OperatorUserId"), operatorUserId);
}

int CancelMuteGroupUserRequest::getBroadCastType() const {
  return broadCastType_;
}

void CancelMuteGroupUserRequest::setBroadCastType(int broadCastType) {
  broadCastType_ = broadCastType;
  setBodyParameter(std::string("BroadCastType"), std::to_string(broadCastType));
}

std::string CancelMuteGroupUserRequest::getGroupId() const {
  return groupId_;
}

void CancelMuteGroupUserRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string CancelMuteGroupUserRequest::getAppId() const {
  return appId_;
}

void CancelMuteGroupUserRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}


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

#include <alibabacloud/live/model/CancelMuteAllGroupUserRequest.h>

using AlibabaCloud::Live::Model::CancelMuteAllGroupUserRequest;

CancelMuteAllGroupUserRequest::CancelMuteAllGroupUserRequest()
    : RpcServiceRequest("live", "2016-11-01", "CancelMuteAllGroupUser") {
  setMethod(HttpRequest::Method::Post);
}

CancelMuteAllGroupUserRequest::~CancelMuteAllGroupUserRequest() {}

std::string CancelMuteAllGroupUserRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void CancelMuteAllGroupUserRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setBodyParameter(std::string("OperatorUserId"), operatorUserId);
}

int CancelMuteAllGroupUserRequest::getBroadCastType() const {
  return broadCastType_;
}

void CancelMuteAllGroupUserRequest::setBroadCastType(int broadCastType) {
  broadCastType_ = broadCastType;
  setBodyParameter(std::string("BroadCastType"), std::to_string(broadCastType));
}

std::string CancelMuteAllGroupUserRequest::getGroupId() const {
  return groupId_;
}

void CancelMuteAllGroupUserRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string CancelMuteAllGroupUserRequest::getAppId() const {
  return appId_;
}

void CancelMuteAllGroupUserRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}


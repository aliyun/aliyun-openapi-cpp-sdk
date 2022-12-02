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

#include <alibabacloud/live/model/SendLikeRequest.h>

using AlibabaCloud::Live::Model::SendLikeRequest;

SendLikeRequest::SendLikeRequest()
    : RpcServiceRequest("live", "2016-11-01", "SendLike") {
  setMethod(HttpRequest::Method::Post);
}

SendLikeRequest::~SendLikeRequest() {}

std::string SendLikeRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void SendLikeRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setBodyParameter(std::string("OperatorUserId"), operatorUserId);
}

int SendLikeRequest::getBroadCastType() const {
  return broadCastType_;
}

void SendLikeRequest::setBroadCastType(int broadCastType) {
  broadCastType_ = broadCastType;
  setBodyParameter(std::string("BroadCastType"), std::to_string(broadCastType));
}

std::string SendLikeRequest::getGroupId() const {
  return groupId_;
}

void SendLikeRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string SendLikeRequest::getCount() const {
  return count_;
}

void SendLikeRequest::setCount(const std::string &count) {
  count_ = count;
  setBodyParameter(std::string("Count"), count);
}

std::string SendLikeRequest::getAppId() const {
  return appId_;
}

void SendLikeRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}


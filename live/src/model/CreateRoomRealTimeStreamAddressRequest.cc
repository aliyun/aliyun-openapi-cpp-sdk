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

#include <alibabacloud/live/model/CreateRoomRealTimeStreamAddressRequest.h>

using AlibabaCloud::Live::Model::CreateRoomRealTimeStreamAddressRequest;

CreateRoomRealTimeStreamAddressRequest::CreateRoomRealTimeStreamAddressRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateRoomRealTimeStreamAddress") {
  setMethod(HttpRequest::Method::Get);
}

CreateRoomRealTimeStreamAddressRequest::~CreateRoomRealTimeStreamAddressRequest() {}

int CreateRoomRealTimeStreamAddressRequest::getExpireTime() const {
  return expireTime_;
}

void CreateRoomRealTimeStreamAddressRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string CreateRoomRealTimeStreamAddressRequest::getUserId() const {
  return userId_;
}

void CreateRoomRealTimeStreamAddressRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateRoomRealTimeStreamAddressRequest::getAppId() const {
  return appId_;
}

void CreateRoomRealTimeStreamAddressRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateRoomRealTimeStreamAddressRequest::getDisplayName() const {
  return displayName_;
}

void CreateRoomRealTimeStreamAddressRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateRoomRealTimeStreamAddressRequest::getChannelId() const {
  return channelId_;
}

void CreateRoomRealTimeStreamAddressRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}


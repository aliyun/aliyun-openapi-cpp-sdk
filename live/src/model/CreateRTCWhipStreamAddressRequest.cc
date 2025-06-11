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

#include <alibabacloud/live/model/CreateRTCWhipStreamAddressRequest.h>

using AlibabaCloud::Live::Model::CreateRTCWhipStreamAddressRequest;

CreateRTCWhipStreamAddressRequest::CreateRTCWhipStreamAddressRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateRTCWhipStreamAddress") {
  setMethod(HttpRequest::Method::Post);
}

CreateRTCWhipStreamAddressRequest::~CreateRTCWhipStreamAddressRequest() {}

int CreateRTCWhipStreamAddressRequest::getExpireTime() const {
  return expireTime_;
}

void CreateRTCWhipStreamAddressRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string CreateRTCWhipStreamAddressRequest::getClientToken() const {
  return clientToken_;
}

void CreateRTCWhipStreamAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRTCWhipStreamAddressRequest::getUserId() const {
  return userId_;
}

void CreateRTCWhipStreamAddressRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateRTCWhipStreamAddressRequest::getAppId() const {
  return appId_;
}

void CreateRTCWhipStreamAddressRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateRTCWhipStreamAddressRequest::getDisplayName() const {
  return displayName_;
}

void CreateRTCWhipStreamAddressRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateRTCWhipStreamAddressRequest::getChannelId() const {
  return channelId_;
}

void CreateRTCWhipStreamAddressRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}


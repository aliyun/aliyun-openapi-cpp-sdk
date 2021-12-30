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

#include <alibabacloud/rtc/model/CreateEventSubscribeRequest.h>

using AlibabaCloud::Rtc::Model::CreateEventSubscribeRequest;

CreateEventSubscribeRequest::CreateEventSubscribeRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "CreateEventSubscribe") {
  setMethod(HttpRequest::Method::Post);
}

CreateEventSubscribeRequest::~CreateEventSubscribeRequest() {}

std::string CreateEventSubscribeRequest::getClientToken() const {
  return clientToken_;
}

void CreateEventSubscribeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateEventSubscribeRequest::getNeedCallbackAuth() const {
  return needCallbackAuth_;
}

void CreateEventSubscribeRequest::setNeedCallbackAuth(bool needCallbackAuth) {
  needCallbackAuth_ = needCallbackAuth;
  setParameter(std::string("NeedCallbackAuth"), needCallbackAuth ? "true" : "false");
}

std::vector<std::string> CreateEventSubscribeRequest::getEvents() const {
  return events_;
}

void CreateEventSubscribeRequest::setEvents(const std::vector<std::string> &events) {
  events_ = events;
}

std::string CreateEventSubscribeRequest::getShowLog() const {
  return showLog_;
}

void CreateEventSubscribeRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

long CreateEventSubscribeRequest::getOwnerId() const {
  return ownerId_;
}

void CreateEventSubscribeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> CreateEventSubscribeRequest::getUsers() const {
  return users_;
}

void CreateEventSubscribeRequest::setUsers(const std::vector<std::string> &users) {
  users_ = users;
}

std::string CreateEventSubscribeRequest::getAppId() const {
  return appId_;
}

void CreateEventSubscribeRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateEventSubscribeRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void CreateEventSubscribeRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

std::string CreateEventSubscribeRequest::getChannelId() const {
  return channelId_;
}

void CreateEventSubscribeRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}


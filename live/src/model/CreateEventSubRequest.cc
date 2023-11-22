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

#include <alibabacloud/live/model/CreateEventSubRequest.h>

using AlibabaCloud::Live::Model::CreateEventSubRequest;

CreateEventSubRequest::CreateEventSubRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateEventSub") {
  setMethod(HttpRequest::Method::Post);
}

CreateEventSubRequest::~CreateEventSubRequest() {}

std::vector<std::string> CreateEventSubRequest::getUsers() const {
  return users_;
}

void CreateEventSubRequest::setUsers(const std::vector<std::string> &users) {
  users_ = users;
}

std::string CreateEventSubRequest::getAppId() const {
  return appId_;
}

void CreateEventSubRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateEventSubRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void CreateEventSubRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

std::string CreateEventSubRequest::getChannelId() const {
  return channelId_;
}

void CreateEventSubRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

std::vector<std::string> CreateEventSubRequest::getEvents() const {
  return events_;
}

void CreateEventSubRequest::setEvents(const std::vector<std::string> &events) {
  events_ = events;
}


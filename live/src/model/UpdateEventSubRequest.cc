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

#include <alibabacloud/live/model/UpdateEventSubRequest.h>

using AlibabaCloud::Live::Model::UpdateEventSubRequest;

UpdateEventSubRequest::UpdateEventSubRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateEventSub") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEventSubRequest::~UpdateEventSubRequest() {}

std::string UpdateEventSubRequest::getSubscribeId() const {
  return subscribeId_;
}

void UpdateEventSubRequest::setSubscribeId(const std::string &subscribeId) {
  subscribeId_ = subscribeId;
  setParameter(std::string("SubscribeId"), subscribeId);
}

std::vector<std::string> UpdateEventSubRequest::getUsers() const {
  return users_;
}

void UpdateEventSubRequest::setUsers(const std::vector<std::string> &users) {
  users_ = users;
}

std::string UpdateEventSubRequest::getAppId() const {
  return appId_;
}

void UpdateEventSubRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateEventSubRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void UpdateEventSubRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

std::string UpdateEventSubRequest::getChannelId() const {
  return channelId_;
}

void UpdateEventSubRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

std::vector<std::string> UpdateEventSubRequest::getEvents() const {
  return events_;
}

void UpdateEventSubRequest::setEvents(const std::vector<std::string> &events) {
  events_ = events;
}


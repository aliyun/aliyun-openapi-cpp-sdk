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

#include <alibabacloud/rtc/model/DeleteEventSubscribeRequest.h>

using AlibabaCloud::Rtc::Model::DeleteEventSubscribeRequest;

DeleteEventSubscribeRequest::DeleteEventSubscribeRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "DeleteEventSubscribe") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEventSubscribeRequest::~DeleteEventSubscribeRequest() {}

std::string DeleteEventSubscribeRequest::getSubscribeId() const {
  return subscribeId_;
}

void DeleteEventSubscribeRequest::setSubscribeId(const std::string &subscribeId) {
  subscribeId_ = subscribeId;
  setParameter(std::string("SubscribeId"), subscribeId);
}

std::string DeleteEventSubscribeRequest::getShowLog() const {
  return showLog_;
}

void DeleteEventSubscribeRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

long DeleteEventSubscribeRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteEventSubscribeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteEventSubscribeRequest::getAppId() const {
  return appId_;
}

void DeleteEventSubscribeRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}


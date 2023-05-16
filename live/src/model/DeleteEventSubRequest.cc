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

#include <alibabacloud/live/model/DeleteEventSubRequest.h>

using AlibabaCloud::Live::Model::DeleteEventSubRequest;

DeleteEventSubRequest::DeleteEventSubRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteEventSub") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEventSubRequest::~DeleteEventSubRequest() {}

std::string DeleteEventSubRequest::getSubscribeId() const {
  return subscribeId_;
}

void DeleteEventSubRequest::setSubscribeId(const std::string &subscribeId) {
  subscribeId_ = subscribeId;
  setParameter(std::string("SubscribeId"), subscribeId);
}

std::string DeleteEventSubRequest::getAppId() const {
  return appId_;
}

void DeleteEventSubRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}


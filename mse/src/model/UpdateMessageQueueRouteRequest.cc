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

#include <alibabacloud/mse/model/UpdateMessageQueueRouteRequest.h>

using AlibabaCloud::Mse::Model::UpdateMessageQueueRouteRequest;

UpdateMessageQueueRouteRequest::UpdateMessageQueueRouteRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateMessageQueueRoute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMessageQueueRouteRequest::~UpdateMessageQueueRouteRequest() {}

std::vector<UpdateMessageQueueRouteRequest::std::string> UpdateMessageQueueRouteRequest::getTags() const {
  return tags_;
}

void UpdateMessageQueueRouteRequest::setTags(const std::vector<UpdateMessageQueueRouteRequest::std::string> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1), tags[dep1]);
  }
}

bool UpdateMessageQueueRouteRequest::getEnable() const {
  return enable_;
}

void UpdateMessageQueueRouteRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string UpdateMessageQueueRouteRequest::getAppId() const {
  return appId_;
}

void UpdateMessageQueueRouteRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateMessageQueueRouteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateMessageQueueRouteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string UpdateMessageQueueRouteRequest::getRegion() const {
  return region_;
}

void UpdateMessageQueueRouteRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


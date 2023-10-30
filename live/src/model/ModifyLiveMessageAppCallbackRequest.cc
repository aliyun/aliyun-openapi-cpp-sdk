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

#include <alibabacloud/live/model/ModifyLiveMessageAppCallbackRequest.h>

using AlibabaCloud::Live::Model::ModifyLiveMessageAppCallbackRequest;

ModifyLiveMessageAppCallbackRequest::ModifyLiveMessageAppCallbackRequest()
    : RpcServiceRequest("live", "2016-11-01", "ModifyLiveMessageAppCallback") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLiveMessageAppCallbackRequest::~ModifyLiveMessageAppCallbackRequest() {}

std::string ModifyLiveMessageAppCallbackRequest::getDataCenter() const {
  return dataCenter_;
}

void ModifyLiveMessageAppCallbackRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string ModifyLiveMessageAppCallbackRequest::getAppId() const {
  return appId_;
}

void ModifyLiveMessageAppCallbackRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ModifyLiveMessageAppCallbackRequest::getEventCallbackUrl() const {
  return eventCallbackUrl_;
}

void ModifyLiveMessageAppCallbackRequest::setEventCallbackUrl(const std::string &eventCallbackUrl) {
  eventCallbackUrl_ = eventCallbackUrl;
  setParameter(std::string("EventCallbackUrl"), eventCallbackUrl);
}


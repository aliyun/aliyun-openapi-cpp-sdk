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

#include <alibabacloud/live/model/UpdateRtcMPUEventSubRequest.h>

using AlibabaCloud::Live::Model::UpdateRtcMPUEventSubRequest;

UpdateRtcMPUEventSubRequest::UpdateRtcMPUEventSubRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateRtcMPUEventSub") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRtcMPUEventSubRequest::~UpdateRtcMPUEventSubRequest() {}

std::string UpdateRtcMPUEventSubRequest::getAppId() const {
  return appId_;
}

void UpdateRtcMPUEventSubRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateRtcMPUEventSubRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void UpdateRtcMPUEventSubRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

std::string UpdateRtcMPUEventSubRequest::getChannelIds() const {
  return channelIds_;
}

void UpdateRtcMPUEventSubRequest::setChannelIds(const std::string &channelIds) {
  channelIds_ = channelIds;
  setParameter(std::string("ChannelIds"), channelIds);
}


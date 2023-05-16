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

#include <alibabacloud/live/model/RemoveTerminalsRequest.h>

using AlibabaCloud::Live::Model::RemoveTerminalsRequest;

RemoveTerminalsRequest::RemoveTerminalsRequest()
    : RpcServiceRequest("live", "2016-11-01", "RemoveTerminals") {
  setMethod(HttpRequest::Method::Post);
}

RemoveTerminalsRequest::~RemoveTerminalsRequest() {}

std::string RemoveTerminalsRequest::getAppId() const {
  return appId_;
}

void RemoveTerminalsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::vector<std::string> RemoveTerminalsRequest::getTerminalIds() const {
  return terminalIds_;
}

void RemoveTerminalsRequest::setTerminalIds(const std::vector<std::string> &terminalIds) {
  terminalIds_ = terminalIds;
}

std::string RemoveTerminalsRequest::getChannelId() const {
  return channelId_;
}

void RemoveTerminalsRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}


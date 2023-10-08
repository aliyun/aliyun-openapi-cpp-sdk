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

#include <alibabacloud/nlb/model/StartListenerRequest.h>

using AlibabaCloud::Nlb::Model::StartListenerRequest;

StartListenerRequest::StartListenerRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "StartListener") {
  setMethod(HttpRequest::Method::Post);
}

StartListenerRequest::~StartListenerRequest() {}

std::string StartListenerRequest::getClientToken() const {
  return clientToken_;
}

void StartListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string StartListenerRequest::getListenerId() const {
  return listenerId_;
}

void StartListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

std::string StartListenerRequest::getRegionId() const {
  return regionId_;
}

void StartListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool StartListenerRequest::getDryRun() const {
  return dryRun_;
}

void StartListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}


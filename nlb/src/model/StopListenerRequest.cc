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

#include <alibabacloud/nlb/model/StopListenerRequest.h>

using AlibabaCloud::Nlb::Model::StopListenerRequest;

StopListenerRequest::StopListenerRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "StopListener") {
  setMethod(HttpRequest::Method::Post);
}

StopListenerRequest::~StopListenerRequest() {}

std::string StopListenerRequest::getClientToken() const {
  return clientToken_;
}

void StopListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string StopListenerRequest::getListenerId() const {
  return listenerId_;
}

void StopListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

std::string StopListenerRequest::getRegionId() const {
  return regionId_;
}

void StopListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool StopListenerRequest::getDryRun() const {
  return dryRun_;
}

void StopListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}


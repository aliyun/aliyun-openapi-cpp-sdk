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

#include <alibabacloud/nlb/model/DeleteListenerRequest.h>

using AlibabaCloud::Nlb::Model::DeleteListenerRequest;

DeleteListenerRequest::DeleteListenerRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "DeleteListener") {
  setMethod(HttpRequest::Method::Post);
}

DeleteListenerRequest::~DeleteListenerRequest() {}

std::string DeleteListenerRequest::getClientToken() const {
  return clientToken_;
}

void DeleteListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteListenerRequest::getListenerId() const {
  return listenerId_;
}

void DeleteListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

std::string DeleteListenerRequest::getRegionId() const {
  return regionId_;
}

void DeleteListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool DeleteListenerRequest::getDryRun() const {
  return dryRun_;
}

void DeleteListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}


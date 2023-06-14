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

#include <alibabacloud/ga/model/DeleteListenerRequest.h>

using AlibabaCloud::Ga::Model::DeleteListenerRequest;

DeleteListenerRequest::DeleteListenerRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteListener") {
  setMethod(HttpRequest::Method::Post);
}

DeleteListenerRequest::~DeleteListenerRequest() {}

std::string DeleteListenerRequest::getClientToken() const {
  return clientToken_;
}

void DeleteListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteListenerRequest::getListenerId() const {
  return listenerId_;
}

void DeleteListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string DeleteListenerRequest::getRegionId() const {
  return regionId_;
}

void DeleteListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteListenerRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void DeleteListenerRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


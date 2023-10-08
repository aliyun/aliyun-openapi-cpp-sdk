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

#include <alibabacloud/nlb/model/GetListenerAttributeRequest.h>

using AlibabaCloud::Nlb::Model::GetListenerAttributeRequest;

GetListenerAttributeRequest::GetListenerAttributeRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "GetListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

GetListenerAttributeRequest::~GetListenerAttributeRequest() {}

std::string GetListenerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void GetListenerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetListenerAttributeRequest::getListenerId() const {
  return listenerId_;
}

void GetListenerAttributeRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string GetListenerAttributeRequest::getRegionId() const {
  return regionId_;
}

void GetListenerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool GetListenerAttributeRequest::getDryRun() const {
  return dryRun_;
}

void GetListenerAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}


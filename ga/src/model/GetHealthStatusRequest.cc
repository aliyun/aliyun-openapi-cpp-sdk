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

#include <alibabacloud/ga/model/GetHealthStatusRequest.h>

using AlibabaCloud::Ga::Model::GetHealthStatusRequest;

GetHealthStatusRequest::GetHealthStatusRequest()
    : RpcServiceRequest("ga", "2019-11-20", "GetHealthStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetHealthStatusRequest::~GetHealthStatusRequest() {}

bool GetHealthStatusRequest::getDryRun() const {
  return dryRun_;
}

void GetHealthStatusRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string GetHealthStatusRequest::getClientToken() const {
  return clientToken_;
}

void GetHealthStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetHealthStatusRequest::getListenerId() const {
  return listenerId_;
}

void GetHealthStatusRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string GetHealthStatusRequest::getRegionId() const {
  return regionId_;
}

void GetHealthStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetHealthStatusRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void GetHealthStatusRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


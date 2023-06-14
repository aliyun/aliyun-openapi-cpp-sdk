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

#include <alibabacloud/ga/model/ListSpareIpsRequest.h>

using AlibabaCloud::Ga::Model::ListSpareIpsRequest;

ListSpareIpsRequest::ListSpareIpsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListSpareIps") {
  setMethod(HttpRequest::Method::Post);
}

ListSpareIpsRequest::~ListSpareIpsRequest() {}

bool ListSpareIpsRequest::getDryRun() const {
  return dryRun_;
}

void ListSpareIpsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ListSpareIpsRequest::getClientToken() const {
  return clientToken_;
}

void ListSpareIpsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListSpareIpsRequest::getRegionId() const {
  return regionId_;
}

void ListSpareIpsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListSpareIpsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListSpareIpsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


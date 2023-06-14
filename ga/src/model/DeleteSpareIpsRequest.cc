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

#include <alibabacloud/ga/model/DeleteSpareIpsRequest.h>

using AlibabaCloud::Ga::Model::DeleteSpareIpsRequest;

DeleteSpareIpsRequest::DeleteSpareIpsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteSpareIps") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSpareIpsRequest::~DeleteSpareIpsRequest() {}

bool DeleteSpareIpsRequest::getDryRun() const {
  return dryRun_;
}

void DeleteSpareIpsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteSpareIpsRequest::getClientToken() const {
  return clientToken_;
}

void DeleteSpareIpsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DeleteSpareIpsRequest::getSpareIps() const {
  return spareIps_;
}

void DeleteSpareIpsRequest::setSpareIps(const std::vector<std::string> &spareIps) {
  spareIps_ = spareIps;
}

std::string DeleteSpareIpsRequest::getRegionId() const {
  return regionId_;
}

void DeleteSpareIpsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSpareIpsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void DeleteSpareIpsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


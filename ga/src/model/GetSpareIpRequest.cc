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

#include <alibabacloud/ga/model/GetSpareIpRequest.h>

using AlibabaCloud::Ga::Model::GetSpareIpRequest;

GetSpareIpRequest::GetSpareIpRequest()
    : RpcServiceRequest("ga", "2019-11-20", "GetSpareIp") {
  setMethod(HttpRequest::Method::Post);
}

GetSpareIpRequest::~GetSpareIpRequest() {}

bool GetSpareIpRequest::getDryRun() const {
  return dryRun_;
}

void GetSpareIpRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string GetSpareIpRequest::getClientToken() const {
  return clientToken_;
}

void GetSpareIpRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetSpareIpRequest::getSpareIp() const {
  return spareIp_;
}

void GetSpareIpRequest::setSpareIp(const std::string &spareIp) {
  spareIp_ = spareIp;
  setParameter(std::string("SpareIp"), spareIp);
}

std::string GetSpareIpRequest::getRegionId() const {
  return regionId_;
}

void GetSpareIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetSpareIpRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void GetSpareIpRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


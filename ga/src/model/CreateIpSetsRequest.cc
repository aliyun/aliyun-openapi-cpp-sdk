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

#include <alibabacloud/ga/model/CreateIpSetsRequest.h>

using AlibabaCloud::Ga::Model::CreateIpSetsRequest;

CreateIpSetsRequest::CreateIpSetsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateIpSets") {
  setMethod(HttpRequest::Method::Post);
}

CreateIpSetsRequest::~CreateIpSetsRequest() {}

std::string CreateIpSetsRequest::getClientToken() const {
  return clientToken_;
}

void CreateIpSetsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateIpSetsRequest::getRegionId() const {
  return regionId_;
}

void CreateIpSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateIpSetsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateIpSetsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::vector<CreateIpSetsRequest::AccelerateRegion> CreateIpSetsRequest::getAccelerateRegion() const {
  return accelerateRegion_;
}

void CreateIpSetsRequest::setAccelerateRegion(const std::vector<CreateIpSetsRequest::AccelerateRegion> &accelerateRegion) {
  accelerateRegion_ = accelerateRegion;
  for(int dep1 = 0; dep1 != accelerateRegion.size(); dep1++) {
  auto accelerateRegionObj = accelerateRegion.at(dep1);
  std::string accelerateRegionObjStr = std::string("AccelerateRegion") + "." + std::to_string(dep1 + 1);
    setParameter(accelerateRegionObjStr + ".AccelerateRegionId", accelerateRegionObj.accelerateRegionId);
    setParameter(accelerateRegionObjStr + ".IpVersion", accelerateRegionObj.ipVersion);
    setParameter(accelerateRegionObjStr + ".Bandwidth", std::to_string(accelerateRegionObj.bandwidth));
    setParameter(accelerateRegionObjStr + ".IspType", accelerateRegionObj.ispType);
  }
}


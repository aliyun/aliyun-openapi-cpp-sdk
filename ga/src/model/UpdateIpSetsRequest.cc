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

#include <alibabacloud/ga/model/UpdateIpSetsRequest.h>

using AlibabaCloud::Ga::Model::UpdateIpSetsRequest;

UpdateIpSetsRequest::UpdateIpSetsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateIpSets") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIpSetsRequest::~UpdateIpSetsRequest() {}

std::vector<UpdateIpSetsRequest::IpSets> UpdateIpSetsRequest::getIpSets() const {
  return ipSets_;
}

void UpdateIpSetsRequest::setIpSets(const std::vector<UpdateIpSetsRequest::IpSets> &ipSets) {
  ipSets_ = ipSets;
  for(int dep1 = 0; dep1 != ipSets.size(); dep1++) {
  auto ipSetsObj = ipSets.at(dep1);
  std::string ipSetsObjStr = std::string("IpSets") + "." + std::to_string(dep1 + 1);
    setParameter(ipSetsObjStr + ".Bandwidth", std::to_string(ipSetsObj.bandwidth));
    setParameter(ipSetsObjStr + ".IpSetId", ipSetsObj.ipSetId);
  }
}

std::string UpdateIpSetsRequest::getRegionId() const {
  return regionId_;
}

void UpdateIpSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


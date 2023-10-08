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

#include <alibabacloud/nlb/model/UpdateLoadBalancerAddressTypeConfigRequest.h>

using AlibabaCloud::Nlb::Model::UpdateLoadBalancerAddressTypeConfigRequest;

UpdateLoadBalancerAddressTypeConfigRequest::UpdateLoadBalancerAddressTypeConfigRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "UpdateLoadBalancerAddressTypeConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLoadBalancerAddressTypeConfigRequest::~UpdateLoadBalancerAddressTypeConfigRequest() {}

std::string UpdateLoadBalancerAddressTypeConfigRequest::getClientToken() const {
  return clientToken_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateLoadBalancerAddressTypeConfigRequest::getRegionId() const {
  return regionId_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UpdateLoadBalancerAddressTypeConfigRequest::getAddressType() const {
  return addressType_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setAddressType(const std::string &addressType) {
  addressType_ = addressType;
  setBodyParameter(std::string("AddressType"), addressType);
}

bool UpdateLoadBalancerAddressTypeConfigRequest::getDryRun() const {
  return dryRun_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings> UpdateLoadBalancerAddressTypeConfigRequest::getZoneMappings() const {
  return zoneMappings_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setZoneMappings(const std::vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings> &zoneMappings) {
  zoneMappings_ = zoneMappings;
  for(int dep1 = 0; dep1 != zoneMappings.size(); dep1++) {
  auto zoneMappingsObj = zoneMappings.at(dep1);
  std::string zoneMappingsObjStr = std::string("ZoneMappings") + "." + std::to_string(dep1 + 1);
    setBodyParameter(zoneMappingsObjStr + ".VSwitchId", zoneMappingsObj.vSwitchId);
    setBodyParameter(zoneMappingsObjStr + ".ZoneId", zoneMappingsObj.zoneId);
    setBodyParameter(zoneMappingsObjStr + ".AllocationId", zoneMappingsObj.allocationId);
    setBodyParameter(zoneMappingsObjStr + ".EipType", zoneMappingsObj.eipType);
  }
}

std::string UpdateLoadBalancerAddressTypeConfigRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}


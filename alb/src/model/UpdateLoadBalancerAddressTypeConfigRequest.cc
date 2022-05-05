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

#include <alibabacloud/alb/model/UpdateLoadBalancerAddressTypeConfigRequest.h>

using AlibabaCloud::Alb::Model::UpdateLoadBalancerAddressTypeConfigRequest;

UpdateLoadBalancerAddressTypeConfigRequest::UpdateLoadBalancerAddressTypeConfigRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateLoadBalancerAddressTypeConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLoadBalancerAddressTypeConfigRequest::~UpdateLoadBalancerAddressTypeConfigRequest() {}

std::string UpdateLoadBalancerAddressTypeConfigRequest::getClientToken() const {
  return clientToken_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateLoadBalancerAddressTypeConfigRequest::getAddressType() const {
  return addressType_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setAddressType(const std::string &addressType) {
  addressType_ = addressType;
  setParameter(std::string("AddressType"), addressType);
}

std::string UpdateLoadBalancerAddressTypeConfigRequest::getDryRun() const {
  return dryRun_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings> UpdateLoadBalancerAddressTypeConfigRequest::getZoneMappings() const {
  return zoneMappings_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setZoneMappings(const std::vector<UpdateLoadBalancerAddressTypeConfigRequest::ZoneMappings> &zoneMappings) {
  zoneMappings_ = zoneMappings;
  for(int dep1 = 0; dep1 != zoneMappings.size(); dep1++) {
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".VSwitchId", zoneMappings[dep1].vSwitchId);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".EipType", zoneMappings[dep1].eipType);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".ZoneId", zoneMappings[dep1].zoneId);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".AllocationId", zoneMappings[dep1].allocationId);
  }
}

std::string UpdateLoadBalancerAddressTypeConfigRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void UpdateLoadBalancerAddressTypeConfigRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}


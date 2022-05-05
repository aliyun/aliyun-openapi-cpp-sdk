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

#include <alibabacloud/alb/model/UpdateLoadBalancerZonesRequest.h>

using AlibabaCloud::Alb::Model::UpdateLoadBalancerZonesRequest;

UpdateLoadBalancerZonesRequest::UpdateLoadBalancerZonesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateLoadBalancerZones") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLoadBalancerZonesRequest::~UpdateLoadBalancerZonesRequest() {}

std::string UpdateLoadBalancerZonesRequest::getClientToken() const {
  return clientToken_;
}

void UpdateLoadBalancerZonesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool UpdateLoadBalancerZonesRequest::getDryRun() const {
  return dryRun_;
}

void UpdateLoadBalancerZonesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<UpdateLoadBalancerZonesRequest::ZoneMappings> UpdateLoadBalancerZonesRequest::getZoneMappings() const {
  return zoneMappings_;
}

void UpdateLoadBalancerZonesRequest::setZoneMappings(const std::vector<UpdateLoadBalancerZonesRequest::ZoneMappings> &zoneMappings) {
  zoneMappings_ = zoneMappings;
  for(int dep1 = 0; dep1 != zoneMappings.size(); dep1++) {
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".VSwitchId", zoneMappings[dep1].vSwitchId);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".EipType", zoneMappings[dep1].eipType);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".ZoneId", zoneMappings[dep1].zoneId);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".AllocationId", zoneMappings[dep1].allocationId);
  }
}

std::string UpdateLoadBalancerZonesRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void UpdateLoadBalancerZonesRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}


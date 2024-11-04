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

#include <alibabacloud/alb/model/StartShiftLoadBalancerZonesRequest.h>

using AlibabaCloud::Alb::Model::StartShiftLoadBalancerZonesRequest;

StartShiftLoadBalancerZonesRequest::StartShiftLoadBalancerZonesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "StartShiftLoadBalancerZones") {
  setMethod(HttpRequest::Method::Post);
}

StartShiftLoadBalancerZonesRequest::~StartShiftLoadBalancerZonesRequest() {}

std::string StartShiftLoadBalancerZonesRequest::getClientToken() const {
  return clientToken_;
}

void StartShiftLoadBalancerZonesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool StartShiftLoadBalancerZonesRequest::getDryRun() const {
  return dryRun_;
}

void StartShiftLoadBalancerZonesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<StartShiftLoadBalancerZonesRequest::ZoneMappings> StartShiftLoadBalancerZonesRequest::getZoneMappings() const {
  return zoneMappings_;
}

void StartShiftLoadBalancerZonesRequest::setZoneMappings(const std::vector<StartShiftLoadBalancerZonesRequest::ZoneMappings> &zoneMappings) {
  zoneMappings_ = zoneMappings;
  for(int dep1 = 0; dep1 != zoneMappings.size(); dep1++) {
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".VSwitchId", zoneMappings[dep1].vSwitchId);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".ZoneId", zoneMappings[dep1].zoneId);
  }
}

std::string StartShiftLoadBalancerZonesRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void StartShiftLoadBalancerZonesRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}


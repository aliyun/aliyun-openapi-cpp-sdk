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

#include <alibabacloud/nlb/model/UpdateLoadBalancerAttributeRequest.h>

using AlibabaCloud::Nlb::Model::UpdateLoadBalancerAttributeRequest;

UpdateLoadBalancerAttributeRequest::UpdateLoadBalancerAttributeRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "UpdateLoadBalancerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLoadBalancerAttributeRequest::~UpdateLoadBalancerAttributeRequest() {}

bool UpdateLoadBalancerAttributeRequest::getCrossZoneEnabled() const {
  return crossZoneEnabled_;
}

void UpdateLoadBalancerAttributeRequest::setCrossZoneEnabled(bool crossZoneEnabled) {
  crossZoneEnabled_ = crossZoneEnabled;
  setBodyParameter(std::string("CrossZoneEnabled"), crossZoneEnabled ? "true" : "false");
}

std::string UpdateLoadBalancerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateLoadBalancerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateLoadBalancerAttributeRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void UpdateLoadBalancerAttributeRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setBodyParameter(std::string("LoadBalancerName"), loadBalancerName);
}

std::string UpdateLoadBalancerAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateLoadBalancerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool UpdateLoadBalancerAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateLoadBalancerAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

int UpdateLoadBalancerAttributeRequest::getCps() const {
  return cps_;
}

void UpdateLoadBalancerAttributeRequest::setCps(int cps) {
  cps_ = cps;
  setBodyParameter(std::string("Cps"), std::to_string(cps));
}

bool UpdateLoadBalancerAttributeRequest::getTrafficAffinityEnabled() const {
  return trafficAffinityEnabled_;
}

void UpdateLoadBalancerAttributeRequest::setTrafficAffinityEnabled(bool trafficAffinityEnabled) {
  trafficAffinityEnabled_ = trafficAffinityEnabled;
  setBodyParameter(std::string("TrafficAffinityEnabled"), trafficAffinityEnabled ? "true" : "false");
}

std::vector<std::string> UpdateLoadBalancerAttributeRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void UpdateLoadBalancerAttributeRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::string UpdateLoadBalancerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void UpdateLoadBalancerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}


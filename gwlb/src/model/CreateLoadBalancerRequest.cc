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

#include <alibabacloud/gwlb/model/CreateLoadBalancerRequest.h>

using AlibabaCloud::Gwlb::Model::CreateLoadBalancerRequest;

CreateLoadBalancerRequest::CreateLoadBalancerRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "CreateLoadBalancer") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerRequest::~CreateLoadBalancerRequest() {}

bool CreateLoadBalancerRequest::getCrossZoneEnabled() const {
  return crossZoneEnabled_;
}

void CreateLoadBalancerRequest::setCrossZoneEnabled(bool crossZoneEnabled) {
  crossZoneEnabled_ = crossZoneEnabled;
  setBodyParameter(std::string("CrossZoneEnabled"), crossZoneEnabled ? "true" : "false");
}

std::string CreateLoadBalancerRequest::getClientToken() const {
  return clientToken_;
}

void CreateLoadBalancerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateLoadBalancerRequest::getAddressIpVersion() const {
  return addressIpVersion_;
}

void CreateLoadBalancerRequest::setAddressIpVersion(const std::string &addressIpVersion) {
  addressIpVersion_ = addressIpVersion;
  setBodyParameter(std::string("AddressIpVersion"), addressIpVersion);
}

std::string CreateLoadBalancerRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateLoadBalancerRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateLoadBalancerRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void CreateLoadBalancerRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setBodyParameter(std::string("LoadBalancerName"), loadBalancerName);
}

std::vector<CreateLoadBalancerRequest::Tag> CreateLoadBalancerRequest::getTag() const {
  return tag_;
}

void CreateLoadBalancerRequest::setTag(const std::vector<CreateLoadBalancerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

bool CreateLoadBalancerRequest::getDryRun() const {
  return dryRun_;
}

void CreateLoadBalancerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<CreateLoadBalancerRequest::ZoneMappings> CreateLoadBalancerRequest::getZoneMappings() const {
  return zoneMappings_;
}

void CreateLoadBalancerRequest::setZoneMappings(const std::vector<CreateLoadBalancerRequest::ZoneMappings> &zoneMappings) {
  zoneMappings_ = zoneMappings;
  for(int dep1 = 0; dep1 != zoneMappings.size(); dep1++) {
    setBodyParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".VSwitchId", zoneMappings[dep1].vSwitchId);
    setBodyParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".ZoneId", zoneMappings[dep1].zoneId);
  }
}

std::string CreateLoadBalancerRequest::getVpcId() const {
  return vpcId_;
}

void CreateLoadBalancerRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}


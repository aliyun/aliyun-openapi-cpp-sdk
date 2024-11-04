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

#include <alibabacloud/alb/model/CreateLoadBalancerRequest.h>

using AlibabaCloud::Alb::Model::CreateLoadBalancerRequest;

CreateLoadBalancerRequest::CreateLoadBalancerRequest()
    : RpcServiceRequest("alb", "2020-06-16", "CreateLoadBalancer") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerRequest::~CreateLoadBalancerRequest() {}

std::string CreateLoadBalancerRequest::getLoadBalancerEdition() const {
  return loadBalancerEdition_;
}

void CreateLoadBalancerRequest::setLoadBalancerEdition(const std::string &loadBalancerEdition) {
  loadBalancerEdition_ = loadBalancerEdition;
  setParameter(std::string("LoadBalancerEdition"), loadBalancerEdition);
}

std::string CreateLoadBalancerRequest::getClientToken() const {
  return clientToken_;
}

void CreateLoadBalancerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

CreateLoadBalancerRequest::ModificationProtectionConfig CreateLoadBalancerRequest::getModificationProtectionConfig() const {
  return modificationProtectionConfig_;
}

void CreateLoadBalancerRequest::setModificationProtectionConfig(const CreateLoadBalancerRequest::ModificationProtectionConfig &modificationProtectionConfig) {
  modificationProtectionConfig_ = modificationProtectionConfig;
  setParameter(std::string("ModificationProtectionConfig") + ".Reason", modificationProtectionConfig.reason);
  setParameter(std::string("ModificationProtectionConfig") + ".Status", modificationProtectionConfig.status);
}

CreateLoadBalancerRequest::LoadBalancerBillingConfig CreateLoadBalancerRequest::getLoadBalancerBillingConfig() const {
  return loadBalancerBillingConfig_;
}

void CreateLoadBalancerRequest::setLoadBalancerBillingConfig(const CreateLoadBalancerRequest::LoadBalancerBillingConfig &loadBalancerBillingConfig) {
  loadBalancerBillingConfig_ = loadBalancerBillingConfig;
  setParameter(std::string("LoadBalancerBillingConfig") + ".BandwidthPackageId", loadBalancerBillingConfig.bandwidthPackageId);
  setParameter(std::string("LoadBalancerBillingConfig") + ".InternetChargeType", loadBalancerBillingConfig.internetChargeType);
  setParameter(std::string("LoadBalancerBillingConfig") + ".InternetBandwidth", std::to_string(loadBalancerBillingConfig.internetBandwidth));
  setParameter(std::string("LoadBalancerBillingConfig") + ".PayType", loadBalancerBillingConfig.payType);
}

std::string CreateLoadBalancerRequest::getAddressIpVersion() const {
  return addressIpVersion_;
}

void CreateLoadBalancerRequest::setAddressIpVersion(const std::string &addressIpVersion) {
  addressIpVersion_ = addressIpVersion;
  setParameter(std::string("AddressIpVersion"), addressIpVersion);
}

bool CreateLoadBalancerRequest::getDeletionProtectionEnabled() const {
  return deletionProtectionEnabled_;
}

void CreateLoadBalancerRequest::setDeletionProtectionEnabled(bool deletionProtectionEnabled) {
  deletionProtectionEnabled_ = deletionProtectionEnabled;
  setParameter(std::string("DeletionProtectionEnabled"), deletionProtectionEnabled ? "true" : "false");
}

std::string CreateLoadBalancerRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateLoadBalancerRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateLoadBalancerRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void CreateLoadBalancerRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setParameter(std::string("LoadBalancerName"), loadBalancerName);
}

std::string CreateLoadBalancerRequest::getAddressType() const {
  return addressType_;
}

void CreateLoadBalancerRequest::setAddressType(const std::string &addressType) {
  addressType_ = addressType;
  setParameter(std::string("AddressType"), addressType);
}

std::vector<CreateLoadBalancerRequest::Tag> CreateLoadBalancerRequest::getTag() const {
  return tag_;
}

void CreateLoadBalancerRequest::setTag(const std::vector<CreateLoadBalancerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string CreateLoadBalancerRequest::getAddressAllocatedMode() const {
  return addressAllocatedMode_;
}

void CreateLoadBalancerRequest::setAddressAllocatedMode(const std::string &addressAllocatedMode) {
  addressAllocatedMode_ = addressAllocatedMode;
  setParameter(std::string("AddressAllocatedMode"), addressAllocatedMode);
}

bool CreateLoadBalancerRequest::getDryRun() const {
  return dryRun_;
}

void CreateLoadBalancerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<CreateLoadBalancerRequest::ZoneMappings> CreateLoadBalancerRequest::getZoneMappings() const {
  return zoneMappings_;
}

void CreateLoadBalancerRequest::setZoneMappings(const std::vector<CreateLoadBalancerRequest::ZoneMappings> &zoneMappings) {
  zoneMappings_ = zoneMappings;
  for(int dep1 = 0; dep1 != zoneMappings.size(); dep1++) {
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".VSwitchId", zoneMappings[dep1].vSwitchId);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".EipType", zoneMappings[dep1].eipType);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".ZoneId", zoneMappings[dep1].zoneId);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".AllocationId", zoneMappings[dep1].allocationId);
    setParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".IntranetAddress", zoneMappings[dep1].intranetAddress);
  }
}

std::string CreateLoadBalancerRequest::getVpcId() const {
  return vpcId_;
}

void CreateLoadBalancerRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


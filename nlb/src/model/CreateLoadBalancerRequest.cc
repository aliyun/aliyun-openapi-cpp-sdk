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

#include <alibabacloud/nlb/model/CreateLoadBalancerRequest.h>

using AlibabaCloud::Nlb::Model::CreateLoadBalancerRequest;

CreateLoadBalancerRequest::CreateLoadBalancerRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "CreateLoadBalancer") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerRequest::~CreateLoadBalancerRequest() {}

std::string CreateLoadBalancerRequest::getClientToken() const {
  return clientToken_;
}

void CreateLoadBalancerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

CreateLoadBalancerRequest::ModificationProtectionConfig CreateLoadBalancerRequest::getModificationProtectionConfig() const {
  return modificationProtectionConfig_;
}

void CreateLoadBalancerRequest::setModificationProtectionConfig(const CreateLoadBalancerRequest::ModificationProtectionConfig &modificationProtectionConfig) {
  modificationProtectionConfig_ = modificationProtectionConfig;
  setBodyParameter(std::string("ModificationProtectionConfig") + ".Status", modificationProtectionConfig.status);
  setBodyParameter(std::string("ModificationProtectionConfig") + ".Reason", modificationProtectionConfig.reason);
}

CreateLoadBalancerRequest::LoadBalancerBillingConfig CreateLoadBalancerRequest::getLoadBalancerBillingConfig() const {
  return loadBalancerBillingConfig_;
}

void CreateLoadBalancerRequest::setLoadBalancerBillingConfig(const CreateLoadBalancerRequest::LoadBalancerBillingConfig &loadBalancerBillingConfig) {
  loadBalancerBillingConfig_ = loadBalancerBillingConfig;
  setBodyParameter(std::string("LoadBalancerBillingConfig") + ".PayType", loadBalancerBillingConfig.payType);
}

std::string CreateLoadBalancerRequest::getBizFlag() const {
  return bizFlag_;
}

void CreateLoadBalancerRequest::setBizFlag(const std::string &bizFlag) {
  bizFlag_ = bizFlag;
  setBodyParameter(std::string("BizFlag"), bizFlag);
}

CreateLoadBalancerRequest::DeletionProtectionConfig CreateLoadBalancerRequest::getDeletionProtectionConfig() const {
  return deletionProtectionConfig_;
}

void CreateLoadBalancerRequest::setDeletionProtectionConfig(const CreateLoadBalancerRequest::DeletionProtectionConfig &deletionProtectionConfig) {
  deletionProtectionConfig_ = deletionProtectionConfig;
  setBodyParameter(std::string("DeletionProtectionConfig") + ".Enabled", deletionProtectionConfig.enabled ? "true" : "false");
  setBodyParameter(std::string("DeletionProtectionConfig") + ".Reason", deletionProtectionConfig.reason);
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

std::string CreateLoadBalancerRequest::getRegionId() const {
  return regionId_;
}

void CreateLoadBalancerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateLoadBalancerRequest::getAddressType() const {
  return addressType_;
}

void CreateLoadBalancerRequest::setAddressType(const std::string &addressType) {
  addressType_ = addressType;
  setBodyParameter(std::string("AddressType"), addressType);
}

std::vector<CreateLoadBalancerRequest::Tag> CreateLoadBalancerRequest::getTag() const {
  return tag_;
}

void CreateLoadBalancerRequest::setTag(const std::vector<CreateLoadBalancerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tagObjStr + ".Key", tagObj.key);
    setBodyParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateLoadBalancerRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void CreateLoadBalancerRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setBodyParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
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
    setBodyParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".PrivateIPv4Address", zoneMappings[dep1].privateIPv4Address);
    setBodyParameter(std::string("ZoneMappings") + "." + std::to_string(dep1 + 1) + ".AllocationId", zoneMappings[dep1].allocationId);
  }
}

std::vector<std::string> CreateLoadBalancerRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void CreateLoadBalancerRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::string CreateLoadBalancerRequest::getLoadBalancerType() const {
  return loadBalancerType_;
}

void CreateLoadBalancerRequest::setLoadBalancerType(const std::string &loadBalancerType) {
  loadBalancerType_ = loadBalancerType;
  setBodyParameter(std::string("LoadBalancerType"), loadBalancerType);
}

std::string CreateLoadBalancerRequest::getVpcId() const {
  return vpcId_;
}

void CreateLoadBalancerRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}


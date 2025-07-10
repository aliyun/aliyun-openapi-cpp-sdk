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

#include <alibabacloud/vpc/model/CreateNatGatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateNatGatewayRequest;

CreateNatGatewayRequest::CreateNatGatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateNatGateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateNatGatewayRequest::~CreateNatGatewayRequest() {}

long CreateNatGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNatGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNatGatewayRequest::getClientToken() const {
  return clientToken_;
}

void CreateNatGatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateNatGatewayRequest::getSecurityProtectionEnabled() const {
  return securityProtectionEnabled_;
}

void CreateNatGatewayRequest::setSecurityProtectionEnabled(bool securityProtectionEnabled) {
  securityProtectionEnabled_ = securityProtectionEnabled;
  setParameter(std::string("SecurityProtectionEnabled"), securityProtectionEnabled ? "true" : "false");
}

std::string CreateNatGatewayRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateNatGatewayRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateNatGatewayRequest::getDescription() const {
  return description_;
}

void CreateNatGatewayRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNatGatewayRequest::getNetworkType() const {
  return networkType_;
}

void CreateNatGatewayRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateNatGatewayRequest::getSpec() const {
  return spec_;
}

void CreateNatGatewayRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

std::string CreateNatGatewayRequest::getDuration() const {
  return duration_;
}

void CreateNatGatewayRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

bool CreateNatGatewayRequest::getIcmpReplyEnabled() const {
  return icmpReplyEnabled_;
}

void CreateNatGatewayRequest::setIcmpReplyEnabled(bool icmpReplyEnabled) {
  icmpReplyEnabled_ = icmpReplyEnabled;
  setParameter(std::string("IcmpReplyEnabled"), icmpReplyEnabled ? "true" : "false");
}

std::string CreateNatGatewayRequest::getRegionId() const {
  return regionId_;
}

void CreateNatGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNatGatewayRequest::getNatType() const {
  return natType_;
}

void CreateNatGatewayRequest::setNatType(const std::string &natType) {
  natType_ = natType;
  setParameter(std::string("NatType"), natType);
}

std::vector<CreateNatGatewayRequest::Tag> CreateNatGatewayRequest::getTag() const {
  return tag_;
}

void CreateNatGatewayRequest::setTag(const std::vector<CreateNatGatewayRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateNatGatewayRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateNatGatewayRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::vector<CreateNatGatewayRequest::BandwidthPackage> CreateNatGatewayRequest::getBandwidthPackage() const {
  return bandwidthPackage_;
}

void CreateNatGatewayRequest::setBandwidthPackage(const std::vector<CreateNatGatewayRequest::BandwidthPackage> &bandwidthPackage) {
  bandwidthPackage_ = bandwidthPackage;
  for(int dep1 = 0; dep1 != bandwidthPackage.size(); dep1++) {
  auto bandwidthPackageObj = bandwidthPackage.at(dep1);
  std::string bandwidthPackageObjStr = std::string("BandwidthPackage") + "." + std::to_string(dep1 + 1);
    setParameter(bandwidthPackageObjStr + ".Bandwidth", std::to_string(bandwidthPackageObj.bandwidth));
    setParameter(bandwidthPackageObjStr + ".Zone", bandwidthPackageObj.zone);
    setParameter(bandwidthPackageObjStr + ".InternetChargeType", bandwidthPackageObj.internetChargeType);
    setParameter(bandwidthPackageObjStr + ".ISP", bandwidthPackageObj.iSP);
    setParameter(bandwidthPackageObjStr + ".IpCount", std::to_string(bandwidthPackageObj.ipCount));
  }
}

bool CreateNatGatewayRequest::getAutoPay() const {
  return autoPay_;
}

void CreateNatGatewayRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateNatGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNatGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNatGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNatGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateNatGatewayRequest::getPrivateLinkMode() const {
  return privateLinkMode_;
}

void CreateNatGatewayRequest::setPrivateLinkMode(const std::string &privateLinkMode) {
  privateLinkMode_ = privateLinkMode;
  setParameter(std::string("PrivateLinkMode"), privateLinkMode);
}

long CreateNatGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNatGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool CreateNatGatewayRequest::getIsCreateDefaultRoute() const {
  return isCreateDefaultRoute_;
}

void CreateNatGatewayRequest::setIsCreateDefaultRoute(bool isCreateDefaultRoute) {
  isCreateDefaultRoute_ = isCreateDefaultRoute;
  setParameter(std::string("IsCreateDefaultRoute"), isCreateDefaultRoute ? "true" : "false");
}

std::string CreateNatGatewayRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateNatGatewayRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateNatGatewayRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateNatGatewayRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateNatGatewayRequest::getVpcId() const {
  return vpcId_;
}

void CreateNatGatewayRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateNatGatewayRequest::getName() const {
  return name_;
}

void CreateNatGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool CreateNatGatewayRequest::getPrivateLinkEnabled() const {
  return privateLinkEnabled_;
}

void CreateNatGatewayRequest::setPrivateLinkEnabled(bool privateLinkEnabled) {
  privateLinkEnabled_ = privateLinkEnabled;
  setParameter(std::string("PrivateLinkEnabled"), privateLinkEnabled ? "true" : "false");
}

std::string CreateNatGatewayRequest::getEipBindMode() const {
  return eipBindMode_;
}

void CreateNatGatewayRequest::setEipBindMode(const std::string &eipBindMode) {
  eipBindMode_ = eipBindMode;
  setParameter(std::string("EipBindMode"), eipBindMode);
}

std::string CreateNatGatewayRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateNatGatewayRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

CreateNatGatewayRequest::AccessMode CreateNatGatewayRequest::getAccessMode() const {
  return accessMode_;
}

void CreateNatGatewayRequest::setAccessMode(const CreateNatGatewayRequest::AccessMode &accessMode) {
  accessMode_ = accessMode;
  setParameter(std::string("AccessMode") + ".ModeValue", accessMode.modeValue);
  setParameter(std::string("AccessMode") + ".TunnelType", accessMode.tunnelType);
}


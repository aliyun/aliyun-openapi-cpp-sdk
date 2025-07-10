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

#include <alibabacloud/vpc/model/AllocateEipAddressRequest.h>

using AlibabaCloud::Vpc::Model::AllocateEipAddressRequest;

AllocateEipAddressRequest::AllocateEipAddressRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AllocateEipAddress") {
  setMethod(HttpRequest::Method::Post);
}

AllocateEipAddressRequest::~AllocateEipAddressRequest() {}

std::string AllocateEipAddressRequest::getIpAddress() const {
  return ipAddress_;
}

void AllocateEipAddressRequest::setIpAddress(const std::string &ipAddress) {
  ipAddress_ = ipAddress;
  setParameter(std::string("IpAddress"), ipAddress);
}

long AllocateEipAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateEipAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateEipAddressRequest::getPublicIpAddressPoolId() const {
  return publicIpAddressPoolId_;
}

void AllocateEipAddressRequest::setPublicIpAddressPoolId(const std::string &publicIpAddressPoolId) {
  publicIpAddressPoolId_ = publicIpAddressPoolId;
  setParameter(std::string("PublicIpAddressPoolId"), publicIpAddressPoolId);
}

std::string AllocateEipAddressRequest::getClientToken() const {
  return clientToken_;
}

void AllocateEipAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocateEipAddressRequest::getISP() const {
  return iSP_;
}

void AllocateEipAddressRequest::setISP(const std::string &iSP) {
  iSP_ = iSP;
  setParameter(std::string("ISP"), iSP);
}

std::string AllocateEipAddressRequest::getDescription() const {
  return description_;
}

void AllocateEipAddressRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AllocateEipAddressRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AllocateEipAddressRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AllocateEipAddressRequest::getRegionId() const {
  return regionId_;
}

void AllocateEipAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AllocateEipAddressRequest::getZone() const {
  return zone_;
}

void AllocateEipAddressRequest::setZone(const std::string &zone) {
  zone_ = zone;
  setParameter(std::string("Zone"), zone);
}

std::vector<AllocateEipAddressRequest::Tag> AllocateEipAddressRequest::getTag() const {
  return tag_;
}

void AllocateEipAddressRequest::setTag(const std::vector<AllocateEipAddressRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string AllocateEipAddressRequest::getNetmode() const {
  return netmode_;
}

void AllocateEipAddressRequest::setNetmode(const std::string &netmode) {
  netmode_ = netmode;
  setParameter(std::string("Netmode"), netmode);
}

std::string AllocateEipAddressRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void AllocateEipAddressRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

int AllocateEipAddressRequest::getPeriod() const {
  return period_;
}

void AllocateEipAddressRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool AllocateEipAddressRequest::getAutoPay() const {
  return autoPay_;
}

void AllocateEipAddressRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string AllocateEipAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateEipAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateEipAddressRequest::getBandwidth() const {
  return bandwidth_;
}

void AllocateEipAddressRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string AllocateEipAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateEipAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateEipAddressRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateEipAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long AllocateEipAddressRequest::getActivityId() const {
  return activityId_;
}

void AllocateEipAddressRequest::setActivityId(long activityId) {
  activityId_ = activityId;
  setParameter(std::string("ActivityId"), std::to_string(activityId));
}

std::string AllocateEipAddressRequest::getInstanceId() const {
  return instanceId_;
}

void AllocateEipAddressRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AllocateEipAddressRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void AllocateEipAddressRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string AllocateEipAddressRequest::getName() const {
  return name_;
}

void AllocateEipAddressRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<std::string> AllocateEipAddressRequest::getSecurityProtectionTypes() const {
  return securityProtectionTypes_;
}

void AllocateEipAddressRequest::setSecurityProtectionTypes(const std::vector<std::string> &securityProtectionTypes) {
  securityProtectionTypes_ = securityProtectionTypes;
}

std::string AllocateEipAddressRequest::getPricingCycle() const {
  return pricingCycle_;
}

void AllocateEipAddressRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}


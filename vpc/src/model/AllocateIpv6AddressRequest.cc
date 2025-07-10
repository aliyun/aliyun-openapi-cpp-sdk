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

#include <alibabacloud/vpc/model/AllocateIpv6AddressRequest.h>

using AlibabaCloud::Vpc::Model::AllocateIpv6AddressRequest;

AllocateIpv6AddressRequest::AllocateIpv6AddressRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AllocateIpv6Address") {
  setMethod(HttpRequest::Method::Post);
}

AllocateIpv6AddressRequest::~AllocateIpv6AddressRequest() {}

long AllocateIpv6AddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateIpv6AddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateIpv6AddressRequest::getClientToken() const {
  return clientToken_;
}

void AllocateIpv6AddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocateIpv6AddressRequest::getIpv6AddressDescription() const {
  return ipv6AddressDescription_;
}

void AllocateIpv6AddressRequest::setIpv6AddressDescription(const std::string &ipv6AddressDescription) {
  ipv6AddressDescription_ = ipv6AddressDescription;
  setParameter(std::string("Ipv6AddressDescription"), ipv6AddressDescription);
}

std::string AllocateIpv6AddressRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AllocateIpv6AddressRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AllocateIpv6AddressRequest::getRegionId() const {
  return regionId_;
}

void AllocateIpv6AddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AllocateIpv6AddressRequest::getAddressType() const {
  return addressType_;
}

void AllocateIpv6AddressRequest::setAddressType(const std::string &addressType) {
  addressType_ = addressType;
  setParameter(std::string("AddressType"), addressType);
}

std::vector<AllocateIpv6AddressRequest::Tag> AllocateIpv6AddressRequest::getTag() const {
  return tag_;
}

void AllocateIpv6AddressRequest::setTag(const std::vector<AllocateIpv6AddressRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string AllocateIpv6AddressRequest::getIpv6AddressName() const {
  return ipv6AddressName_;
}

void AllocateIpv6AddressRequest::setIpv6AddressName(const std::string &ipv6AddressName) {
  ipv6AddressName_ = ipv6AddressName;
  setParameter(std::string("Ipv6AddressName"), ipv6AddressName);
}

bool AllocateIpv6AddressRequest::getDryRun() const {
  return dryRun_;
}

void AllocateIpv6AddressRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AllocateIpv6AddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateIpv6AddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateIpv6AddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateIpv6AddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateIpv6AddressRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateIpv6AddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AllocateIpv6AddressRequest::getVSwitchId() const {
  return vSwitchId_;
}

void AllocateIpv6AddressRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string AllocateIpv6AddressRequest::getIpv6Address() const {
  return ipv6Address_;
}

void AllocateIpv6AddressRequest::setIpv6Address(const std::string &ipv6Address) {
  ipv6Address_ = ipv6Address;
  setParameter(std::string("Ipv6Address"), ipv6Address);
}


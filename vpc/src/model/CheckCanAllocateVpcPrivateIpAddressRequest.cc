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

#include <alibabacloud/vpc/model/CheckCanAllocateVpcPrivateIpAddressRequest.h>

using AlibabaCloud::Vpc::Model::CheckCanAllocateVpcPrivateIpAddressRequest;

CheckCanAllocateVpcPrivateIpAddressRequest::CheckCanAllocateVpcPrivateIpAddressRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CheckCanAllocateVpcPrivateIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

CheckCanAllocateVpcPrivateIpAddressRequest::~CheckCanAllocateVpcPrivateIpAddressRequest() {}

long CheckCanAllocateVpcPrivateIpAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckCanAllocateVpcPrivateIpAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckCanAllocateVpcPrivateIpAddressRequest::getRegionId() const {
  return regionId_;
}

void CheckCanAllocateVpcPrivateIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CheckCanAllocateVpcPrivateIpAddressRequest::getIpVersion() const {
  return ipVersion_;
}

void CheckCanAllocateVpcPrivateIpAddressRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::string CheckCanAllocateVpcPrivateIpAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckCanAllocateVpcPrivateIpAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckCanAllocateVpcPrivateIpAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckCanAllocateVpcPrivateIpAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckCanAllocateVpcPrivateIpAddressRequest::getOwnerId() const {
  return ownerId_;
}

void CheckCanAllocateVpcPrivateIpAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckCanAllocateVpcPrivateIpAddressRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CheckCanAllocateVpcPrivateIpAddressRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CheckCanAllocateVpcPrivateIpAddressRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CheckCanAllocateVpcPrivateIpAddressRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}


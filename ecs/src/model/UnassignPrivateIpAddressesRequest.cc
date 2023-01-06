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

#include <alibabacloud/ecs/model/UnassignPrivateIpAddressesRequest.h>

using AlibabaCloud::Ecs::Model::UnassignPrivateIpAddressesRequest;

UnassignPrivateIpAddressesRequest::UnassignPrivateIpAddressesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "UnassignPrivateIpAddresses") {
  setMethod(HttpRequest::Method::Post);
}

UnassignPrivateIpAddressesRequest::~UnassignPrivateIpAddressesRequest() {}

long UnassignPrivateIpAddressesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnassignPrivateIpAddressesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> UnassignPrivateIpAddressesRequest::getIpv4Prefix() const {
  return ipv4Prefix_;
}

void UnassignPrivateIpAddressesRequest::setIpv4Prefix(const std::vector<std::string> &ipv4Prefix) {
  ipv4Prefix_ = ipv4Prefix;
}

std::string UnassignPrivateIpAddressesRequest::getRegionId() const {
  return regionId_;
}

void UnassignPrivateIpAddressesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UnassignPrivateIpAddressesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnassignPrivateIpAddressesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnassignPrivateIpAddressesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnassignPrivateIpAddressesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnassignPrivateIpAddressesRequest::getOwnerId() const {
  return ownerId_;
}

void UnassignPrivateIpAddressesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> UnassignPrivateIpAddressesRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void UnassignPrivateIpAddressesRequest::setPrivateIpAddress(const std::vector<std::string> &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
}

std::string UnassignPrivateIpAddressesRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void UnassignPrivateIpAddressesRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}


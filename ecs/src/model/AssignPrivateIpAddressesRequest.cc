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

#include <alibabacloud/ecs/model/AssignPrivateIpAddressesRequest.h>

using AlibabaCloud::Ecs::Model::AssignPrivateIpAddressesRequest;

AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AssignPrivateIpAddresses") {
  setMethod(HttpRequest::Method::Post);
}

AssignPrivateIpAddressesRequest::~AssignPrivateIpAddressesRequest() {}

long AssignPrivateIpAddressesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssignPrivateIpAddressesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> AssignPrivateIpAddressesRequest::getIpv4Prefix() const {
  return ipv4Prefix_;
}

void AssignPrivateIpAddressesRequest::setIpv4Prefix(const std::vector<std::string> &ipv4Prefix) {
  ipv4Prefix_ = ipv4Prefix;
}

std::string AssignPrivateIpAddressesRequest::getClientToken() const {
  return clientToken_;
}

void AssignPrivateIpAddressesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int AssignPrivateIpAddressesRequest::getSecondaryPrivateIpAddressCount() const {
  return secondaryPrivateIpAddressCount_;
}

void AssignPrivateIpAddressesRequest::setSecondaryPrivateIpAddressCount(int secondaryPrivateIpAddressCount) {
  secondaryPrivateIpAddressCount_ = secondaryPrivateIpAddressCount;
  setParameter(std::string("SecondaryPrivateIpAddressCount"), std::to_string(secondaryPrivateIpAddressCount));
}

std::string AssignPrivateIpAddressesRequest::getRegionId() const {
  return regionId_;
}

void AssignPrivateIpAddressesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssignPrivateIpAddressesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssignPrivateIpAddressesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssignPrivateIpAddressesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssignPrivateIpAddressesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssignPrivateIpAddressesRequest::getOwnerId() const {
  return ownerId_;
}

void AssignPrivateIpAddressesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AssignPrivateIpAddressesRequest::getIpv4PrefixCount() const {
  return ipv4PrefixCount_;
}

void AssignPrivateIpAddressesRequest::setIpv4PrefixCount(int ipv4PrefixCount) {
  ipv4PrefixCount_ = ipv4PrefixCount;
  setParameter(std::string("Ipv4PrefixCount"), std::to_string(ipv4PrefixCount));
}

std::vector<std::string> AssignPrivateIpAddressesRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void AssignPrivateIpAddressesRequest::setPrivateIpAddress(const std::vector<std::string> &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
}

std::string AssignPrivateIpAddressesRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void AssignPrivateIpAddressesRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}


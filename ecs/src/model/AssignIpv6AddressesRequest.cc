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

#include <alibabacloud/ecs/model/AssignIpv6AddressesRequest.h>

using AlibabaCloud::Ecs::Model::AssignIpv6AddressesRequest;

AssignIpv6AddressesRequest::AssignIpv6AddressesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AssignIpv6Addresses") {
  setMethod(HttpRequest::Method::Post);
}

AssignIpv6AddressesRequest::~AssignIpv6AddressesRequest() {}

long AssignIpv6AddressesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssignIpv6AddressesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssignIpv6AddressesRequest::getClientToken() const {
  return clientToken_;
}

void AssignIpv6AddressesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> AssignIpv6AddressesRequest::getIpv6Prefix() const {
  return ipv6Prefix_;
}

void AssignIpv6AddressesRequest::setIpv6Prefix(const std::vector<std::string> &ipv6Prefix) {
  ipv6Prefix_ = ipv6Prefix;
}

int AssignIpv6AddressesRequest::getIpv6PrefixCount() const {
  return ipv6PrefixCount_;
}

void AssignIpv6AddressesRequest::setIpv6PrefixCount(int ipv6PrefixCount) {
  ipv6PrefixCount_ = ipv6PrefixCount;
  setParameter(std::string("Ipv6PrefixCount"), std::to_string(ipv6PrefixCount));
}

std::string AssignIpv6AddressesRequest::getRegionId() const {
  return regionId_;
}

void AssignIpv6AddressesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssignIpv6AddressesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssignIpv6AddressesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int AssignIpv6AddressesRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void AssignIpv6AddressesRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

std::string AssignIpv6AddressesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssignIpv6AddressesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssignIpv6AddressesRequest::getOwnerId() const {
  return ownerId_;
}

void AssignIpv6AddressesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssignIpv6AddressesRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void AssignIpv6AddressesRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

std::vector<std::string> AssignIpv6AddressesRequest::getIpv6Address() const {
  return ipv6Address_;
}

void AssignIpv6AddressesRequest::setIpv6Address(const std::vector<std::string> &ipv6Address) {
  ipv6Address_ = ipv6Address;
}


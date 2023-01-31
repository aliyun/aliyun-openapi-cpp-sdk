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

#include <alibabacloud/vpc/model/AllocateVpcIpv6CidrRequest.h>

using AlibabaCloud::Vpc::Model::AllocateVpcIpv6CidrRequest;

AllocateVpcIpv6CidrRequest::AllocateVpcIpv6CidrRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AllocateVpcIpv6Cidr") {
  setMethod(HttpRequest::Method::Post);
}

AllocateVpcIpv6CidrRequest::~AllocateVpcIpv6CidrRequest() {}

long AllocateVpcIpv6CidrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateVpcIpv6CidrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateVpcIpv6CidrRequest::getClientToken() const {
  return clientToken_;
}

void AllocateVpcIpv6CidrRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocateVpcIpv6CidrRequest::getRegionId() const {
  return regionId_;
}

void AllocateVpcIpv6CidrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AllocateVpcIpv6CidrRequest::getIpv6Isp() const {
  return ipv6Isp_;
}

void AllocateVpcIpv6CidrRequest::setIpv6Isp(const std::string &ipv6Isp) {
  ipv6Isp_ = ipv6Isp;
  setParameter(std::string("Ipv6Isp"), ipv6Isp);
}

std::string AllocateVpcIpv6CidrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateVpcIpv6CidrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateVpcIpv6CidrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateVpcIpv6CidrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateVpcIpv6CidrRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateVpcIpv6CidrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AllocateVpcIpv6CidrRequest::getIpv6CidrBlock() const {
  return ipv6CidrBlock_;
}

void AllocateVpcIpv6CidrRequest::setIpv6CidrBlock(const std::string &ipv6CidrBlock) {
  ipv6CidrBlock_ = ipv6CidrBlock;
  setParameter(std::string("Ipv6CidrBlock"), ipv6CidrBlock);
}

std::string AllocateVpcIpv6CidrRequest::getAddressPoolType() const {
  return addressPoolType_;
}

void AllocateVpcIpv6CidrRequest::setAddressPoolType(const std::string &addressPoolType) {
  addressPoolType_ = addressPoolType;
  setParameter(std::string("AddressPoolType"), addressPoolType);
}


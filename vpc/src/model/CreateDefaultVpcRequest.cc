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

#include <alibabacloud/vpc/model/CreateDefaultVpcRequest.h>

using AlibabaCloud::Vpc::Model::CreateDefaultVpcRequest;

CreateDefaultVpcRequest::CreateDefaultVpcRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateDefaultVpc") {
  setMethod(HttpRequest::Method::Post);
}

CreateDefaultVpcRequest::~CreateDefaultVpcRequest() {}

bool CreateDefaultVpcRequest::getEnableDefaultVSwitch() const {
  return enableDefaultVSwitch_;
}

void CreateDefaultVpcRequest::setEnableDefaultVSwitch(bool enableDefaultVSwitch) {
  enableDefaultVSwitch_ = enableDefaultVSwitch;
  setParameter(std::string("EnableDefaultVSwitch"), enableDefaultVSwitch ? "true" : "false");
}

long CreateDefaultVpcRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDefaultVpcRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDefaultVpcRequest::getClientToken() const {
  return clientToken_;
}

void CreateDefaultVpcRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateDefaultVpcRequest::getEnableIpv6() const {
  return enableIpv6_;
}

void CreateDefaultVpcRequest::setEnableIpv6(bool enableIpv6) {
  enableIpv6_ = enableIpv6;
  setParameter(std::string("EnableIpv6"), enableIpv6 ? "true" : "false");
}

std::string CreateDefaultVpcRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDefaultVpcRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDefaultVpcRequest::getRegionId() const {
  return regionId_;
}

void CreateDefaultVpcRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDefaultVpcRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDefaultVpcRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDefaultVpcRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDefaultVpcRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateDefaultVpcRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDefaultVpcRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDefaultVpcRequest::getIpv6CidrBlock() const {
  return ipv6CidrBlock_;
}

void CreateDefaultVpcRequest::setIpv6CidrBlock(const std::string &ipv6CidrBlock) {
  ipv6CidrBlock_ = ipv6CidrBlock;
  setParameter(std::string("Ipv6CidrBlock"), ipv6CidrBlock);
}

std::vector<std::string> CreateDefaultVpcRequest::getZoneId() const {
  return zoneId_;
}

void CreateDefaultVpcRequest::setZoneId(const std::vector<std::string> &zoneId) {
  zoneId_ = zoneId;
}


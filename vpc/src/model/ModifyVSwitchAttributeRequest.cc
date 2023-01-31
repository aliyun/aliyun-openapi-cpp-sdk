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

#include <alibabacloud/vpc/model/ModifyVSwitchAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVSwitchAttributeRequest;

ModifyVSwitchAttributeRequest::ModifyVSwitchAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVSwitchAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVSwitchAttributeRequest::~ModifyVSwitchAttributeRequest() {}

long ModifyVSwitchAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVSwitchAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ModifyVSwitchAttributeRequest::getEnableIPv6() const {
  return enableIPv6_;
}

void ModifyVSwitchAttributeRequest::setEnableIPv6(bool enableIPv6) {
  enableIPv6_ = enableIPv6;
  setParameter(std::string("EnableIPv6"), enableIPv6 ? "true" : "false");
}

std::string ModifyVSwitchAttributeRequest::getDescription() const {
  return description_;
}

void ModifyVSwitchAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyVSwitchAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyVSwitchAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVSwitchAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVSwitchAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVSwitchAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVSwitchAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyVSwitchAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVSwitchAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyVSwitchAttributeRequest::getIpv6CidrBlock() const {
  return ipv6CidrBlock_;
}

void ModifyVSwitchAttributeRequest::setIpv6CidrBlock(int ipv6CidrBlock) {
  ipv6CidrBlock_ = ipv6CidrBlock;
  setParameter(std::string("Ipv6CidrBlock"), std::to_string(ipv6CidrBlock));
}

std::string ModifyVSwitchAttributeRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyVSwitchAttributeRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyVSwitchAttributeRequest::getVpcIpv6CidrBlock() const {
  return vpcIpv6CidrBlock_;
}

void ModifyVSwitchAttributeRequest::setVpcIpv6CidrBlock(const std::string &vpcIpv6CidrBlock) {
  vpcIpv6CidrBlock_ = vpcIpv6CidrBlock;
  setParameter(std::string("VpcIpv6CidrBlock"), vpcIpv6CidrBlock);
}

std::string ModifyVSwitchAttributeRequest::getVSwitchName() const {
  return vSwitchName_;
}

void ModifyVSwitchAttributeRequest::setVSwitchName(const std::string &vSwitchName) {
  vSwitchName_ = vSwitchName;
  setParameter(std::string("VSwitchName"), vSwitchName);
}


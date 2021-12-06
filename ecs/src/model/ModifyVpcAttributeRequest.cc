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

#include <alibabacloud/ecs/model/ModifyVpcAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyVpcAttributeRequest;

ModifyVpcAttributeRequest::ModifyVpcAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyVpcAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVpcAttributeRequest::~ModifyVpcAttributeRequest() {}

long ModifyVpcAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVpcAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVpcAttributeRequest::getDescription() const {
  return description_;
}

void ModifyVpcAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyVpcAttributeRequest::getVpcName() const {
  return vpcName_;
}

void ModifyVpcAttributeRequest::setVpcName(const std::string &vpcName) {
  vpcName_ = vpcName;
  setParameter(std::string("VpcName"), vpcName);
}

std::string ModifyVpcAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyVpcAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVpcAttributeRequest::getUserCidr() const {
  return userCidr_;
}

void ModifyVpcAttributeRequest::setUserCidr(const std::string &userCidr) {
  userCidr_ = userCidr;
  setParameter(std::string("UserCidr"), userCidr);
}

std::string ModifyVpcAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVpcAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVpcAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVpcAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyVpcAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVpcAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyVpcAttributeRequest::getVpcId() const {
  return vpcId_;
}

void ModifyVpcAttributeRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string ModifyVpcAttributeRequest::getCidrBlock() const {
  return cidrBlock_;
}

void ModifyVpcAttributeRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}


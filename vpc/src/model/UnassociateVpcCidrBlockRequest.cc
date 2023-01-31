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

#include <alibabacloud/vpc/model/UnassociateVpcCidrBlockRequest.h>

using AlibabaCloud::Vpc::Model::UnassociateVpcCidrBlockRequest;

UnassociateVpcCidrBlockRequest::UnassociateVpcCidrBlockRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UnassociateVpcCidrBlock") {
  setMethod(HttpRequest::Method::Post);
}

UnassociateVpcCidrBlockRequest::~UnassociateVpcCidrBlockRequest() {}

long UnassociateVpcCidrBlockRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnassociateVpcCidrBlockRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnassociateVpcCidrBlockRequest::getRegionId() const {
  return regionId_;
}

void UnassociateVpcCidrBlockRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UnassociateVpcCidrBlockRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnassociateVpcCidrBlockRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnassociateVpcCidrBlockRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnassociateVpcCidrBlockRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnassociateVpcCidrBlockRequest::getOwnerId() const {
  return ownerId_;
}

void UnassociateVpcCidrBlockRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UnassociateVpcCidrBlockRequest::getIPv6CidrBlock() const {
  return iPv6CidrBlock_;
}

void UnassociateVpcCidrBlockRequest::setIPv6CidrBlock(const std::string &iPv6CidrBlock) {
  iPv6CidrBlock_ = iPv6CidrBlock;
  setParameter(std::string("IPv6CidrBlock"), iPv6CidrBlock);
}

std::string UnassociateVpcCidrBlockRequest::getSecondaryCidrBlock() const {
  return secondaryCidrBlock_;
}

void UnassociateVpcCidrBlockRequest::setSecondaryCidrBlock(const std::string &secondaryCidrBlock) {
  secondaryCidrBlock_ = secondaryCidrBlock;
  setParameter(std::string("SecondaryCidrBlock"), secondaryCidrBlock);
}

std::string UnassociateVpcCidrBlockRequest::getVpcId() const {
  return vpcId_;
}

void UnassociateVpcCidrBlockRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


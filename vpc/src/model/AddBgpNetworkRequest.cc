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

#include <alibabacloud/vpc/model/AddBgpNetworkRequest.h>

using AlibabaCloud::Vpc::Model::AddBgpNetworkRequest;

AddBgpNetworkRequest::AddBgpNetworkRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AddBgpNetwork") {
  setMethod(HttpRequest::Method::Post);
}

AddBgpNetworkRequest::~AddBgpNetworkRequest() {}

long AddBgpNetworkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddBgpNetworkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddBgpNetworkRequest::getClientToken() const {
  return clientToken_;
}

void AddBgpNetworkRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddBgpNetworkRequest::getRegionId() const {
  return regionId_;
}

void AddBgpNetworkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddBgpNetworkRequest::getIpVersion() const {
  return ipVersion_;
}

void AddBgpNetworkRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::string AddBgpNetworkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddBgpNetworkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddBgpNetworkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddBgpNetworkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddBgpNetworkRequest::getOwnerId() const {
  return ownerId_;
}

void AddBgpNetworkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddBgpNetworkRequest::getRouterId() const {
  return routerId_;
}

void AddBgpNetworkRequest::setRouterId(const std::string &routerId) {
  routerId_ = routerId;
  setParameter(std::string("RouterId"), routerId);
}

std::string AddBgpNetworkRequest::getVpcId() const {
  return vpcId_;
}

void AddBgpNetworkRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string AddBgpNetworkRequest::getDstCidrBlock() const {
  return dstCidrBlock_;
}

void AddBgpNetworkRequest::setDstCidrBlock(const std::string &dstCidrBlock) {
  dstCidrBlock_ = dstCidrBlock;
  setParameter(std::string("DstCidrBlock"), dstCidrBlock);
}


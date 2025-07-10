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

#include <alibabacloud/vpc/model/CreateIpv4GatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateIpv4GatewayRequest;

CreateIpv4GatewayRequest::CreateIpv4GatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateIpv4Gateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateIpv4GatewayRequest::~CreateIpv4GatewayRequest() {}

std::string CreateIpv4GatewayRequest::getIpv4GatewayDescription() const {
  return ipv4GatewayDescription_;
}

void CreateIpv4GatewayRequest::setIpv4GatewayDescription(const std::string &ipv4GatewayDescription) {
  ipv4GatewayDescription_ = ipv4GatewayDescription;
  setParameter(std::string("Ipv4GatewayDescription"), ipv4GatewayDescription);
}

long CreateIpv4GatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateIpv4GatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateIpv4GatewayRequest::getClientToken() const {
  return clientToken_;
}

void CreateIpv4GatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateIpv4GatewayRequest::getIpv4GatewayName() const {
  return ipv4GatewayName_;
}

void CreateIpv4GatewayRequest::setIpv4GatewayName(const std::string &ipv4GatewayName) {
  ipv4GatewayName_ = ipv4GatewayName;
  setParameter(std::string("Ipv4GatewayName"), ipv4GatewayName);
}

std::string CreateIpv4GatewayRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateIpv4GatewayRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateIpv4GatewayRequest::getRegionId() const {
  return regionId_;
}

void CreateIpv4GatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateIpv4GatewayRequest::Tag> CreateIpv4GatewayRequest::getTag() const {
  return tag_;
}

void CreateIpv4GatewayRequest::setTag(const std::vector<CreateIpv4GatewayRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateIpv4GatewayRequest::getDryRun() const {
  return dryRun_;
}

void CreateIpv4GatewayRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateIpv4GatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateIpv4GatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateIpv4GatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateIpv4GatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateIpv4GatewayRequest::getOwnerId() const {
  return ownerId_;
}

void CreateIpv4GatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateIpv4GatewayRequest::getVpcId() const {
  return vpcId_;
}

void CreateIpv4GatewayRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


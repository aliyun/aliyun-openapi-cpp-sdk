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

#include <alibabacloud/ecs/model/CreateNatGatewayRequest.h>

using AlibabaCloud::Ecs::Model::CreateNatGatewayRequest;

CreateNatGatewayRequest::CreateNatGatewayRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateNatGateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateNatGatewayRequest::~CreateNatGatewayRequest() {}

long CreateNatGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNatGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNatGatewayRequest::getClientToken() const {
  return clientToken_;
}

void CreateNatGatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateNatGatewayRequest::getDescription() const {
  return description_;
}

void CreateNatGatewayRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNatGatewayRequest::getRegionId() const {
  return regionId_;
}

void CreateNatGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateNatGatewayRequest::BandwidthPackage> CreateNatGatewayRequest::getBandwidthPackage() const {
  return bandwidthPackage_;
}

void CreateNatGatewayRequest::setBandwidthPackage(const std::vector<CreateNatGatewayRequest::BandwidthPackage> &bandwidthPackage) {
  bandwidthPackage_ = bandwidthPackage;
  for(int dep1 = 0; dep1 != bandwidthPackage.size(); dep1++) {
  auto bandwidthPackageObj = bandwidthPackage.at(dep1);
  std::string bandwidthPackageObjStr = std::string("BandwidthPackage") + "." + std::to_string(dep1 + 1);
    setParameter(bandwidthPackageObjStr + ".Bandwidth", std::to_string(bandwidthPackageObj.bandwidth));
    setParameter(bandwidthPackageObjStr + ".Zone", bandwidthPackageObj.zone);
    setParameter(bandwidthPackageObjStr + ".IpCount", std::to_string(bandwidthPackageObj.ipCount));
  }
}

std::string CreateNatGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNatGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNatGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNatGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateNatGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNatGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNatGatewayRequest::getVpcId() const {
  return vpcId_;
}

void CreateNatGatewayRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateNatGatewayRequest::getName() const {
  return name_;
}

void CreateNatGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


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

#include <alibabacloud/vpc/model/CreatePublicIpAddressPoolRequest.h>

using AlibabaCloud::Vpc::Model::CreatePublicIpAddressPoolRequest;

CreatePublicIpAddressPoolRequest::CreatePublicIpAddressPoolRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreatePublicIpAddressPool") {
  setMethod(HttpRequest::Method::Post);
}

CreatePublicIpAddressPoolRequest::~CreatePublicIpAddressPoolRequest() {}

long CreatePublicIpAddressPoolRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreatePublicIpAddressPoolRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreatePublicIpAddressPoolRequest::getClientToken() const {
  return clientToken_;
}

void CreatePublicIpAddressPoolRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreatePublicIpAddressPoolRequest::getIsp() const {
  return isp_;
}

void CreatePublicIpAddressPoolRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string CreatePublicIpAddressPoolRequest::getDescription() const {
  return description_;
}

void CreatePublicIpAddressPoolRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreatePublicIpAddressPoolRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreatePublicIpAddressPoolRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreatePublicIpAddressPoolRequest::getRegionId() const {
  return regionId_;
}

void CreatePublicIpAddressPoolRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreatePublicIpAddressPoolRequest::Tag> CreatePublicIpAddressPoolRequest::getTag() const {
  return tag_;
}

void CreatePublicIpAddressPoolRequest::setTag(const std::vector<CreatePublicIpAddressPoolRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreatePublicIpAddressPoolRequest::getDryRun() const {
  return dryRun_;
}

void CreatePublicIpAddressPoolRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreatePublicIpAddressPoolRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreatePublicIpAddressPoolRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreatePublicIpAddressPoolRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreatePublicIpAddressPoolRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> CreatePublicIpAddressPoolRequest::getZones() const {
  return zones_;
}

void CreatePublicIpAddressPoolRequest::setZones(const std::vector<std::string> &zones) {
  zones_ = zones;
}

long CreatePublicIpAddressPoolRequest::getOwnerId() const {
  return ownerId_;
}

void CreatePublicIpAddressPoolRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreatePublicIpAddressPoolRequest::getBizType() const {
  return bizType_;
}

void CreatePublicIpAddressPoolRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string CreatePublicIpAddressPoolRequest::getName() const {
  return name_;
}

void CreatePublicIpAddressPoolRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<std::string> CreatePublicIpAddressPoolRequest::getSecurityProtectionTypes() const {
  return securityProtectionTypes_;
}

void CreatePublicIpAddressPoolRequest::setSecurityProtectionTypes(const std::vector<std::string> &securityProtectionTypes) {
  securityProtectionTypes_ = securityProtectionTypes;
}


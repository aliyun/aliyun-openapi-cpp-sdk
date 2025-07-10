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

#include <alibabacloud/vpc/model/CreateCommonBandwidthPackageRequest.h>

using AlibabaCloud::Vpc::Model::CreateCommonBandwidthPackageRequest;

CreateCommonBandwidthPackageRequest::CreateCommonBandwidthPackageRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateCommonBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

CreateCommonBandwidthPackageRequest::~CreateCommonBandwidthPackageRequest() {}

long CreateCommonBandwidthPackageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCommonBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCommonBandwidthPackageRequest::getClientToken() const {
  return clientToken_;
}

void CreateCommonBandwidthPackageRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCommonBandwidthPackageRequest::getISP() const {
  return iSP_;
}

void CreateCommonBandwidthPackageRequest::setISP(const std::string &iSP) {
  iSP_ = iSP;
  setParameter(std::string("ISP"), iSP);
}

std::string CreateCommonBandwidthPackageRequest::getDescription() const {
  return description_;
}

void CreateCommonBandwidthPackageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateCommonBandwidthPackageRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCommonBandwidthPackageRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateCommonBandwidthPackageRequest::getRegionId() const {
  return regionId_;
}

void CreateCommonBandwidthPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCommonBandwidthPackageRequest::getZone() const {
  return zone_;
}

void CreateCommonBandwidthPackageRequest::setZone(const std::string &zone) {
  zone_ = zone;
  setParameter(std::string("Zone"), zone);
}

std::vector<CreateCommonBandwidthPackageRequest::Tag> CreateCommonBandwidthPackageRequest::getTag() const {
  return tag_;
}

void CreateCommonBandwidthPackageRequest::setTag(const std::vector<CreateCommonBandwidthPackageRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateCommonBandwidthPackageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCommonBandwidthPackageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateCommonBandwidthPackageRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateCommonBandwidthPackageRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateCommonBandwidthPackageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCommonBandwidthPackageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateCommonBandwidthPackageRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCommonBandwidthPackageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCommonBandwidthPackageRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateCommonBandwidthPackageRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateCommonBandwidthPackageRequest::getName() const {
  return name_;
}

void CreateCommonBandwidthPackageRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<std::string> CreateCommonBandwidthPackageRequest::getSecurityProtectionTypes() const {
  return securityProtectionTypes_;
}

void CreateCommonBandwidthPackageRequest::setSecurityProtectionTypes(const std::vector<std::string> &securityProtectionTypes) {
  securityProtectionTypes_ = securityProtectionTypes;
}

int CreateCommonBandwidthPackageRequest::getRatio() const {
  return ratio_;
}

void CreateCommonBandwidthPackageRequest::setRatio(int ratio) {
  ratio_ = ratio;
  setParameter(std::string("Ratio"), std::to_string(ratio));
}


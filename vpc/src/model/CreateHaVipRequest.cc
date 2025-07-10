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

#include <alibabacloud/vpc/model/CreateHaVipRequest.h>

using AlibabaCloud::Vpc::Model::CreateHaVipRequest;

CreateHaVipRequest::CreateHaVipRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateHaVip") {
  setMethod(HttpRequest::Method::Post);
}

CreateHaVipRequest::~CreateHaVipRequest() {}

std::string CreateHaVipRequest::getIpAddress() const {
  return ipAddress_;
}

void CreateHaVipRequest::setIpAddress(const std::string &ipAddress) {
  ipAddress_ = ipAddress;
  setParameter(std::string("IpAddress"), ipAddress);
}

long CreateHaVipRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateHaVipRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateHaVipRequest::getClientToken() const {
  return clientToken_;
}

void CreateHaVipRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateHaVipRequest::getDescription() const {
  return description_;
}

void CreateHaVipRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateHaVipRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateHaVipRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateHaVipRequest::getRegionId() const {
  return regionId_;
}

void CreateHaVipRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateHaVipRequest::Tag> CreateHaVipRequest::getTag() const {
  return tag_;
}

void CreateHaVipRequest::setTag(const std::vector<CreateHaVipRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateHaVipRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateHaVipRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateHaVipRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateHaVipRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateHaVipRequest::getOwnerId() const {
  return ownerId_;
}

void CreateHaVipRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateHaVipRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateHaVipRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateHaVipRequest::getName() const {
  return name_;
}

void CreateHaVipRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


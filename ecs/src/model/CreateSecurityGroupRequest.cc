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

#include <alibabacloud/ecs/model/CreateSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::CreateSecurityGroupRequest;

CreateSecurityGroupRequest::CreateSecurityGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateSecurityGroupRequest::~CreateSecurityGroupRequest() {}

long CreateSecurityGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSecurityGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateSecurityGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateSecurityGroupRequest::getServiceManaged() const {
  return serviceManaged_;
}

void CreateSecurityGroupRequest::setServiceManaged(bool serviceManaged) {
  serviceManaged_ = serviceManaged;
  setParameter(std::string("ServiceManaged"), serviceManaged ? "true" : "false");
}

std::string CreateSecurityGroupRequest::getDescription() const {
  return description_;
}

void CreateSecurityGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSecurityGroupRequest::getSecurityGroupName() const {
  return securityGroupName_;
}

void CreateSecurityGroupRequest::setSecurityGroupName(const std::string &securityGroupName) {
  securityGroupName_ = securityGroupName;
  setParameter(std::string("SecurityGroupName"), securityGroupName);
}

std::string CreateSecurityGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSecurityGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateSecurityGroupRequest::Tag> CreateSecurityGroupRequest::getTag() const {
  return tag_;
}

void CreateSecurityGroupRequest::setTag(const std::vector<CreateSecurityGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateSecurityGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSecurityGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSecurityGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSecurityGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateSecurityGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSecurityGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSecurityGroupRequest::getSecurityGroupType() const {
  return securityGroupType_;
}

void CreateSecurityGroupRequest::setSecurityGroupType(const std::string &securityGroupType) {
  securityGroupType_ = securityGroupType;
  setParameter(std::string("SecurityGroupType"), securityGroupType);
}

std::string CreateSecurityGroupRequest::getVpcId() const {
  return vpcId_;
}

void CreateSecurityGroupRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


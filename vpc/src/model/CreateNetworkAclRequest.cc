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

#include <alibabacloud/vpc/model/CreateNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::CreateNetworkAclRequest;

CreateNetworkAclRequest::CreateNetworkAclRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateNetworkAcl") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkAclRequest::~CreateNetworkAclRequest() {}

long CreateNetworkAclRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNetworkAclRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNetworkAclRequest::getClientToken() const {
  return clientToken_;
}

void CreateNetworkAclRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateNetworkAclRequest::getDescription() const {
  return description_;
}

void CreateNetworkAclRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNetworkAclRequest::getRegionId() const {
  return regionId_;
}

void CreateNetworkAclRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateNetworkAclRequest::Tag> CreateNetworkAclRequest::getTag() const {
  return tag_;
}

void CreateNetworkAclRequest::setTag(const std::vector<CreateNetworkAclRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateNetworkAclRequest::getDryRun() const {
  return dryRun_;
}

void CreateNetworkAclRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateNetworkAclRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNetworkAclRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNetworkAclRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNetworkAclRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateNetworkAclRequest::getNetworkAclName() const {
  return networkAclName_;
}

void CreateNetworkAclRequest::setNetworkAclName(const std::string &networkAclName) {
  networkAclName_ = networkAclName;
  setParameter(std::string("NetworkAclName"), networkAclName);
}

long CreateNetworkAclRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNetworkAclRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNetworkAclRequest::getVpcId() const {
  return vpcId_;
}

void CreateNetworkAclRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


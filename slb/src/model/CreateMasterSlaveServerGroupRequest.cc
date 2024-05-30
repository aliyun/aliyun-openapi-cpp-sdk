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

#include <alibabacloud/slb/model/CreateMasterSlaveServerGroupRequest.h>

using AlibabaCloud::Slb::Model::CreateMasterSlaveServerGroupRequest;

CreateMasterSlaveServerGroupRequest::CreateMasterSlaveServerGroupRequest()
    : RpcServiceRequest("slb", "2014-05-15", "CreateMasterSlaveServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateMasterSlaveServerGroupRequest::~CreateMasterSlaveServerGroupRequest() {}

std::string CreateMasterSlaveServerGroupRequest::getAccess_key_id() const {
  return access_key_id_;
}

void CreateMasterSlaveServerGroupRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long CreateMasterSlaveServerGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateMasterSlaveServerGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateMasterSlaveServerGroupRequest::getMasterSlaveBackendServers() const {
  return masterSlaveBackendServers_;
}

void CreateMasterSlaveServerGroupRequest::setMasterSlaveBackendServers(const std::string &masterSlaveBackendServers) {
  masterSlaveBackendServers_ = masterSlaveBackendServers;
  setParameter(std::string("MasterSlaveBackendServers"), masterSlaveBackendServers);
}

std::string CreateMasterSlaveServerGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateMasterSlaveServerGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateMasterSlaveServerGroupRequest::Tag> CreateMasterSlaveServerGroupRequest::getTag() const {
  return tag_;
}

void CreateMasterSlaveServerGroupRequest::setTag(const std::vector<CreateMasterSlaveServerGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateMasterSlaveServerGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateMasterSlaveServerGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateMasterSlaveServerGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateMasterSlaveServerGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateMasterSlaveServerGroupRequest::getMasterSlaveServerGroupName() const {
  return masterSlaveServerGroupName_;
}

void CreateMasterSlaveServerGroupRequest::setMasterSlaveServerGroupName(const std::string &masterSlaveServerGroupName) {
  masterSlaveServerGroupName_ = masterSlaveServerGroupName;
  setParameter(std::string("MasterSlaveServerGroupName"), masterSlaveServerGroupName);
}

long CreateMasterSlaveServerGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateMasterSlaveServerGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateMasterSlaveServerGroupRequest::getTags() const {
  return tags_;
}

void CreateMasterSlaveServerGroupRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateMasterSlaveServerGroupRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateMasterSlaveServerGroupRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}


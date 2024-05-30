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

#include <alibabacloud/slb/model/CreateVServerGroupRequest.h>

using AlibabaCloud::Slb::Model::CreateVServerGroupRequest;

CreateVServerGroupRequest::CreateVServerGroupRequest()
    : RpcServiceRequest("slb", "2014-05-15", "CreateVServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateVServerGroupRequest::~CreateVServerGroupRequest() {}

std::string CreateVServerGroupRequest::getAccess_key_id() const {
  return access_key_id_;
}

void CreateVServerGroupRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long CreateVServerGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVServerGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVServerGroupRequest::getBackendServers() const {
  return backendServers_;
}

void CreateVServerGroupRequest::setBackendServers(const std::string &backendServers) {
  backendServers_ = backendServers;
  setParameter(std::string("BackendServers"), backendServers);
}

std::string CreateVServerGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateVServerGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateVServerGroupRequest::Tag> CreateVServerGroupRequest::getTag() const {
  return tag_;
}

void CreateVServerGroupRequest::setTag(const std::vector<CreateVServerGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateVServerGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVServerGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVServerGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVServerGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateVServerGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVServerGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVServerGroupRequest::getTags() const {
  return tags_;
}

void CreateVServerGroupRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateVServerGroupRequest::getVServerGroupName() const {
  return vServerGroupName_;
}

void CreateVServerGroupRequest::setVServerGroupName(const std::string &vServerGroupName) {
  vServerGroupName_ = vServerGroupName;
  setParameter(std::string("VServerGroupName"), vServerGroupName);
}

std::string CreateVServerGroupRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateVServerGroupRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}


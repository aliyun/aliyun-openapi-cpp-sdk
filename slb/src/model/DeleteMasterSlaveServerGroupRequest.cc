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

#include <alibabacloud/slb/model/DeleteMasterSlaveServerGroupRequest.h>

using AlibabaCloud::Slb::Model::DeleteMasterSlaveServerGroupRequest;

DeleteMasterSlaveServerGroupRequest::DeleteMasterSlaveServerGroupRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DeleteMasterSlaveServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteMasterSlaveServerGroupRequest::~DeleteMasterSlaveServerGroupRequest() {}

std::string DeleteMasterSlaveServerGroupRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DeleteMasterSlaveServerGroupRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DeleteMasterSlaveServerGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteMasterSlaveServerGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteMasterSlaveServerGroupRequest::getRegionId() const {
  return regionId_;
}

void DeleteMasterSlaveServerGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteMasterSlaveServerGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteMasterSlaveServerGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteMasterSlaveServerGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteMasterSlaveServerGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteMasterSlaveServerGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteMasterSlaveServerGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteMasterSlaveServerGroupRequest::getTags() const {
  return tags_;
}

void DeleteMasterSlaveServerGroupRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DeleteMasterSlaveServerGroupRequest::getMasterSlaveServerGroupId() const {
  return masterSlaveServerGroupId_;
}

void DeleteMasterSlaveServerGroupRequest::setMasterSlaveServerGroupId(const std::string &masterSlaveServerGroupId) {
  masterSlaveServerGroupId_ = masterSlaveServerGroupId;
  setParameter(std::string("MasterSlaveServerGroupId"), masterSlaveServerGroupId);
}


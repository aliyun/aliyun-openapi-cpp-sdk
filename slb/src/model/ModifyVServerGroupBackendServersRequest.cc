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

#include <alibabacloud/slb/model/ModifyVServerGroupBackendServersRequest.h>

using AlibabaCloud::Slb::Model::ModifyVServerGroupBackendServersRequest;

ModifyVServerGroupBackendServersRequest::ModifyVServerGroupBackendServersRequest()
    : RpcServiceRequest("slb", "2014-05-15", "ModifyVServerGroupBackendServers") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVServerGroupBackendServersRequest::~ModifyVServerGroupBackendServersRequest() {}

std::string ModifyVServerGroupBackendServersRequest::getAccess_key_id() const {
  return access_key_id_;
}

void ModifyVServerGroupBackendServersRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long ModifyVServerGroupBackendServersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVServerGroupBackendServersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVServerGroupBackendServersRequest::getRegionId() const {
  return regionId_;
}

void ModifyVServerGroupBackendServersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVServerGroupBackendServersRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void ModifyVServerGroupBackendServersRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string ModifyVServerGroupBackendServersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVServerGroupBackendServersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVServerGroupBackendServersRequest::getNewBackendServers() const {
  return newBackendServers_;
}

void ModifyVServerGroupBackendServersRequest::setNewBackendServers(const std::string &newBackendServers) {
  newBackendServers_ = newBackendServers;
  setParameter(std::string("NewBackendServers"), newBackendServers);
}

std::string ModifyVServerGroupBackendServersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVServerGroupBackendServersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyVServerGroupBackendServersRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVServerGroupBackendServersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyVServerGroupBackendServersRequest::getTags() const {
  return tags_;
}

void ModifyVServerGroupBackendServersRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ModifyVServerGroupBackendServersRequest::getOldBackendServers() const {
  return oldBackendServers_;
}

void ModifyVServerGroupBackendServersRequest::setOldBackendServers(const std::string &oldBackendServers) {
  oldBackendServers_ = oldBackendServers;
  setParameter(std::string("OldBackendServers"), oldBackendServers);
}


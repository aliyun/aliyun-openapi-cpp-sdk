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

#include <alibabacloud/slb/model/AddVServerGroupBackendServersRequest.h>

using AlibabaCloud::Slb::Model::AddVServerGroupBackendServersRequest;

AddVServerGroupBackendServersRequest::AddVServerGroupBackendServersRequest()
    : RpcServiceRequest("slb", "2014-05-15", "AddVServerGroupBackendServers") {
  setMethod(HttpRequest::Method::Post);
}

AddVServerGroupBackendServersRequest::~AddVServerGroupBackendServersRequest() {}

std::string AddVServerGroupBackendServersRequest::getAccess_key_id() const {
  return access_key_id_;
}

void AddVServerGroupBackendServersRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long AddVServerGroupBackendServersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddVServerGroupBackendServersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddVServerGroupBackendServersRequest::getBackendServers() const {
  return backendServers_;
}

void AddVServerGroupBackendServersRequest::setBackendServers(const std::string &backendServers) {
  backendServers_ = backendServers;
  setParameter(std::string("BackendServers"), backendServers);
}

std::string AddVServerGroupBackendServersRequest::getRegionId() const {
  return regionId_;
}

void AddVServerGroupBackendServersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddVServerGroupBackendServersRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void AddVServerGroupBackendServersRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string AddVServerGroupBackendServersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddVServerGroupBackendServersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddVServerGroupBackendServersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddVServerGroupBackendServersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddVServerGroupBackendServersRequest::getOwnerId() const {
  return ownerId_;
}

void AddVServerGroupBackendServersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddVServerGroupBackendServersRequest::getTags() const {
  return tags_;
}

void AddVServerGroupBackendServersRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}


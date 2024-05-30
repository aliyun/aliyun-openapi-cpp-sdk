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

#include <alibabacloud/slb/model/RemoveVServerGroupBackendServersRequest.h>

using AlibabaCloud::Slb::Model::RemoveVServerGroupBackendServersRequest;

RemoveVServerGroupBackendServersRequest::RemoveVServerGroupBackendServersRequest()
    : RpcServiceRequest("slb", "2014-05-15", "RemoveVServerGroupBackendServers") {
  setMethod(HttpRequest::Method::Post);
}

RemoveVServerGroupBackendServersRequest::~RemoveVServerGroupBackendServersRequest() {}

std::string RemoveVServerGroupBackendServersRequest::getAccess_key_id() const {
  return access_key_id_;
}

void RemoveVServerGroupBackendServersRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long RemoveVServerGroupBackendServersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveVServerGroupBackendServersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveVServerGroupBackendServersRequest::getBackendServers() const {
  return backendServers_;
}

void RemoveVServerGroupBackendServersRequest::setBackendServers(const std::string &backendServers) {
  backendServers_ = backendServers;
  setParameter(std::string("BackendServers"), backendServers);
}

std::string RemoveVServerGroupBackendServersRequest::getRegionId() const {
  return regionId_;
}

void RemoveVServerGroupBackendServersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RemoveVServerGroupBackendServersRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void RemoveVServerGroupBackendServersRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string RemoveVServerGroupBackendServersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveVServerGroupBackendServersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveVServerGroupBackendServersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveVServerGroupBackendServersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RemoveVServerGroupBackendServersRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveVServerGroupBackendServersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RemoveVServerGroupBackendServersRequest::getTags() const {
  return tags_;
}

void RemoveVServerGroupBackendServersRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}


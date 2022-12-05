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

#include <alibabacloud/polardb/model/DeleteGlobalDatabaseNetworkRequest.h>

using AlibabaCloud::Polardb::Model::DeleteGlobalDatabaseNetworkRequest;

DeleteGlobalDatabaseNetworkRequest::DeleteGlobalDatabaseNetworkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteGlobalDatabaseNetwork") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGlobalDatabaseNetworkRequest::~DeleteGlobalDatabaseNetworkRequest() {}

long DeleteGlobalDatabaseNetworkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteGlobalDatabaseNetworkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteGlobalDatabaseNetworkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteGlobalDatabaseNetworkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteGlobalDatabaseNetworkRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteGlobalDatabaseNetworkRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteGlobalDatabaseNetworkRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteGlobalDatabaseNetworkRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DeleteGlobalDatabaseNetworkRequest::getGDNId() const {
  return gDNId_;
}

void DeleteGlobalDatabaseNetworkRequest::setGDNId(const std::string &gDNId) {
  gDNId_ = gDNId;
  setParameter(std::string("GDNId"), gDNId);
}

std::string DeleteGlobalDatabaseNetworkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteGlobalDatabaseNetworkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteGlobalDatabaseNetworkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteGlobalDatabaseNetworkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteGlobalDatabaseNetworkRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteGlobalDatabaseNetworkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


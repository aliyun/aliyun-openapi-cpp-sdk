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

#include <alibabacloud/polardb/model/ResetGlobalDatabaseNetworkRequest.h>

using AlibabaCloud::Polardb::Model::ResetGlobalDatabaseNetworkRequest;

ResetGlobalDatabaseNetworkRequest::ResetGlobalDatabaseNetworkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ResetGlobalDatabaseNetwork") {
  setMethod(HttpRequest::Method::Post);
}

ResetGlobalDatabaseNetworkRequest::~ResetGlobalDatabaseNetworkRequest() {}

long ResetGlobalDatabaseNetworkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetGlobalDatabaseNetworkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetGlobalDatabaseNetworkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ResetGlobalDatabaseNetworkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ResetGlobalDatabaseNetworkRequest::getSecurityToken() const {
  return securityToken_;
}

void ResetGlobalDatabaseNetworkRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ResetGlobalDatabaseNetworkRequest::getRegionId() const {
  return regionId_;
}

void ResetGlobalDatabaseNetworkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ResetGlobalDatabaseNetworkRequest::getGDNId() const {
  return gDNId_;
}

void ResetGlobalDatabaseNetworkRequest::setGDNId(const std::string &gDNId) {
  gDNId_ = gDNId;
  setParameter(std::string("GDNId"), gDNId);
}

std::string ResetGlobalDatabaseNetworkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResetGlobalDatabaseNetworkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResetGlobalDatabaseNetworkRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ResetGlobalDatabaseNetworkRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ResetGlobalDatabaseNetworkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResetGlobalDatabaseNetworkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResetGlobalDatabaseNetworkRequest::getOwnerId() const {
  return ownerId_;
}

void ResetGlobalDatabaseNetworkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


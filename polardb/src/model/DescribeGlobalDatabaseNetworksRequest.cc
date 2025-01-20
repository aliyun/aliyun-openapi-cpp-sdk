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

#include <alibabacloud/polardb/model/DescribeGlobalDatabaseNetworksRequest.h>

using AlibabaCloud::Polardb::Model::DescribeGlobalDatabaseNetworksRequest;

DescribeGlobalDatabaseNetworksRequest::DescribeGlobalDatabaseNetworksRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeGlobalDatabaseNetworks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGlobalDatabaseNetworksRequest::~DescribeGlobalDatabaseNetworksRequest() {}

long DescribeGlobalDatabaseNetworksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGlobalDatabaseNetworksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeGlobalDatabaseNetworksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGlobalDatabaseNetworksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGlobalDatabaseNetworksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGlobalDatabaseNetworksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeGlobalDatabaseNetworksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeGlobalDatabaseNetworksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeGlobalDatabaseNetworksRequest::getFilterRegion() const {
  return filterRegion_;
}

void DescribeGlobalDatabaseNetworksRequest::setFilterRegion(const std::string &filterRegion) {
  filterRegion_ = filterRegion;
  setParameter(std::string("FilterRegion"), filterRegion);
}

std::string DescribeGlobalDatabaseNetworksRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeGlobalDatabaseNetworksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeGlobalDatabaseNetworksRequest::getGDNId() const {
  return gDNId_;
}

void DescribeGlobalDatabaseNetworksRequest::setGDNId(const std::string &gDNId) {
  gDNId_ = gDNId;
  setParameter(std::string("GDNId"), gDNId);
}

int DescribeGlobalDatabaseNetworksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGlobalDatabaseNetworksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGlobalDatabaseNetworksRequest::getGDNDescription() const {
  return gDNDescription_;
}

void DescribeGlobalDatabaseNetworksRequest::setGDNDescription(const std::string &gDNDescription) {
  gDNDescription_ = gDNDescription;
  setParameter(std::string("GDNDescription"), gDNDescription);
}

std::string DescribeGlobalDatabaseNetworksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGlobalDatabaseNetworksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGlobalDatabaseNetworksRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeGlobalDatabaseNetworksRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeGlobalDatabaseNetworksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGlobalDatabaseNetworksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGlobalDatabaseNetworksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGlobalDatabaseNetworksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeGlobalDatabaseNetworksRequest::getDBType() const {
  return dBType_;
}

void DescribeGlobalDatabaseNetworksRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}


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

#include <alibabacloud/rds/model/DescribeDBInstanceConnectivityRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceConnectivityRequest;

DescribeDBInstanceConnectivityRequest::DescribeDBInstanceConnectivityRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceConnectivity") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDBInstanceConnectivityRequest::~DescribeDBInstanceConnectivityRequest() {}

std::string DescribeDBInstanceConnectivityRequest::getDbInstanceName() const {
  return dbInstanceName_;
}

void DescribeDBInstanceConnectivityRequest::setDbInstanceName(const std::string &dbInstanceName) {
  dbInstanceName_ = dbInstanceName;
  setParameter(std::string("DbInstanceName"), dbInstanceName);
}

long DescribeDBInstanceConnectivityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceConnectivityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceConnectivityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceConnectivityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceConnectivityRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstanceConnectivityRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstanceConnectivityRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDBInstanceConnectivityRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDBInstanceConnectivityRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceConnectivityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceConnectivityRequest::getSourceIpAddress() const {
  return sourceIpAddress_;
}

void DescribeDBInstanceConnectivityRequest::setSourceIpAddress(const std::string &sourceIpAddress) {
  sourceIpAddress_ = sourceIpAddress;
  setParameter(std::string("SourceIpAddress"), sourceIpAddress);
}

std::string DescribeDBInstanceConnectivityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceConnectivityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceConnectivityRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceConnectivityRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceConnectivityRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceConnectivityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


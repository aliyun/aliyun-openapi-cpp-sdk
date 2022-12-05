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

#include <alibabacloud/polardb/model/DescribeDBClusterAvailableResourcesRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterAvailableResourcesRequest;

DescribeDBClusterAvailableResourcesRequest::DescribeDBClusterAvailableResourcesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterAvailableResources") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterAvailableResourcesRequest::~DescribeDBClusterAvailableResourcesRequest() {}

long DescribeDBClusterAvailableResourcesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterAvailableResourcesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterAvailableResourcesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterAvailableResourcesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterAvailableResourcesRequest::getDBNodeClass() const {
  return dBNodeClass_;
}

void DescribeDBClusterAvailableResourcesRequest::setDBNodeClass(const std::string &dBNodeClass) {
  dBNodeClass_ = dBNodeClass;
  setParameter(std::string("DBNodeClass"), dBNodeClass);
}

std::string DescribeDBClusterAvailableResourcesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClusterAvailableResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBClusterAvailableResourcesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterAvailableResourcesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterAvailableResourcesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterAvailableResourcesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterAvailableResourcesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterAvailableResourcesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBClusterAvailableResourcesRequest::getDBType() const {
  return dBType_;
}

void DescribeDBClusterAvailableResourcesRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string DescribeDBClusterAvailableResourcesRequest::getDBVersion() const {
  return dBVersion_;
}

void DescribeDBClusterAvailableResourcesRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

std::string DescribeDBClusterAvailableResourcesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeDBClusterAvailableResourcesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeDBClusterAvailableResourcesRequest::getPayType() const {
  return payType_;
}

void DescribeDBClusterAvailableResourcesRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}


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

#include <alibabacloud/rds/model/DescribeDBInstancePromoteActivityRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstancePromoteActivityRequest;

DescribeDBInstancePromoteActivityRequest::DescribeDBInstancePromoteActivityRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstancePromoteActivity") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancePromoteActivityRequest::~DescribeDBInstancePromoteActivityRequest() {}

std::string DescribeDBInstancePromoteActivityRequest::getDbInstanceName() const {
  return dbInstanceName_;
}

void DescribeDBInstancePromoteActivityRequest::setDbInstanceName(const std::string &dbInstanceName) {
  dbInstanceName_ = dbInstanceName;
  setParameter(std::string("DbInstanceName"), dbInstanceName);
}

long DescribeDBInstancePromoteActivityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstancePromoteActivityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstancePromoteActivityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstancePromoteActivityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstancePromoteActivityRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstancePromoteActivityRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstancePromoteActivityRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstancePromoteActivityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstancePromoteActivityRequest::getAliUid() const {
  return aliUid_;
}

void DescribeDBInstancePromoteActivityRequest::setAliUid(const std::string &aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), aliUid);
}

std::string DescribeDBInstancePromoteActivityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstancePromoteActivityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeDBInstancePromoteActivityRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstancePromoteActivityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


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

#include <alibabacloud/rds/model/DescribeDBInstanceAttributeRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceAttributeRequest;

DescribeDBInstanceAttributeRequest::DescribeDBInstanceAttributeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceAttributeRequest::~DescribeDBInstanceAttributeRequest() {}

long DescribeDBInstanceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceAttributeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstanceAttributeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstanceAttributeRequest::getExpired() const {
  return expired_;
}

void DescribeDBInstanceAttributeRequest::setExpired(const std::string &expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired);
}

std::string DescribeDBInstanceAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceAttributeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceAttributeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


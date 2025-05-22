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

#include <alibabacloud/rds/model/DescribeDBInstanceHAConfigRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceHAConfigRequest;

DescribeDBInstanceHAConfigRequest::DescribeDBInstanceHAConfigRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceHAConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceHAConfigRequest::~DescribeDBInstanceHAConfigRequest() {}

long DescribeDBInstanceHAConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceHAConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceHAConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceHAConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceHAConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceHAConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceHAConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceHAConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceHAConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceHAConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceHAConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceHAConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceHAConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceHAConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


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

#include <alibabacloud/rds/model/DescribeDBInstanceIPArrayListRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceIPArrayListRequest;

DescribeDBInstanceIPArrayListRequest::DescribeDBInstanceIPArrayListRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceIPArrayList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceIPArrayListRequest::~DescribeDBInstanceIPArrayListRequest() {}

long DescribeDBInstanceIPArrayListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceIPArrayListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceIPArrayListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceIPArrayListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceIPArrayListRequest::getWhitelistNetworkType() const {
  return whitelistNetworkType_;
}

void DescribeDBInstanceIPArrayListRequest::setWhitelistNetworkType(const std::string &whitelistNetworkType) {
  whitelistNetworkType_ = whitelistNetworkType;
  setParameter(std::string("WhitelistNetworkType"), whitelistNetworkType);
}

std::string DescribeDBInstanceIPArrayListRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceIPArrayListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceIPArrayListRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceIPArrayListRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceIPArrayListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceIPArrayListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceIPArrayListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceIPArrayListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceIPArrayListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceIPArrayListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


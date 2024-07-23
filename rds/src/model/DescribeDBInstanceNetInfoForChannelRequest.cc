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

#include <alibabacloud/rds/model/DescribeDBInstanceNetInfoForChannelRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceNetInfoForChannelRequest;

DescribeDBInstanceNetInfoForChannelRequest::DescribeDBInstanceNetInfoForChannelRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceNetInfoForChannel") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceNetInfoForChannelRequest::~DescribeDBInstanceNetInfoForChannelRequest() {}

long DescribeDBInstanceNetInfoForChannelRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceNetInfoForChannelRequest::getFlag() const {
  return flag_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setFlag(const std::string &flag) {
  flag_ = flag;
  setParameter(std::string("Flag"), flag);
}

std::string DescribeDBInstanceNetInfoForChannelRequest::getClientToken() const {
  return clientToken_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeDBInstanceNetInfoForChannelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceNetInfoForChannelRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceNetInfoForChannelRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceNetInfoForChannelRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceNetInfoForChannelRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceNetInfoForChannelRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstanceNetInfoForChannelRequest::getDBInstanceNetRWSplitType() const {
  return dBInstanceNetRWSplitType_;
}

void DescribeDBInstanceNetInfoForChannelRequest::setDBInstanceNetRWSplitType(const std::string &dBInstanceNetRWSplitType) {
  dBInstanceNetRWSplitType_ = dBInstanceNetRWSplitType;
  setParameter(std::string("DBInstanceNetRWSplitType"), dBInstanceNetRWSplitType);
}


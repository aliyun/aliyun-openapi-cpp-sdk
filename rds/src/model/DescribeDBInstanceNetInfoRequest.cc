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

#include <alibabacloud/rds/model/DescribeDBInstanceNetInfoRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceNetInfoRequest;

DescribeDBInstanceNetInfoRequest::DescribeDBInstanceNetInfoRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceNetInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceNetInfoRequest::~DescribeDBInstanceNetInfoRequest() {}

long DescribeDBInstanceNetInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceNetInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeDBInstanceNetInfoRequest::getFlag() const {
  return flag_;
}

void DescribeDBInstanceNetInfoRequest::setFlag(int flag) {
  flag_ = flag;
  setParameter(std::string("Flag"), std::to_string(flag));
}

std::string DescribeDBInstanceNetInfoRequest::getClientToken() const {
  return clientToken_;
}

void DescribeDBInstanceNetInfoRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeDBInstanceNetInfoRequest::getGeneralGroupName() const {
  return generalGroupName_;
}

void DescribeDBInstanceNetInfoRequest::setGeneralGroupName(const std::string &generalGroupName) {
  generalGroupName_ = generalGroupName;
  setParameter(std::string("GeneralGroupName"), generalGroupName);
}

std::string DescribeDBInstanceNetInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceNetInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceNetInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceNetInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceNetInfoRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceNetInfoRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceNetInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceNetInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceNetInfoRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceNetInfoRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceNetInfoRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceNetInfoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstanceNetInfoRequest::getDBInstanceNetRWSplitType() const {
  return dBInstanceNetRWSplitType_;
}

void DescribeDBInstanceNetInfoRequest::setDBInstanceNetRWSplitType(const std::string &dBInstanceNetRWSplitType) {
  dBInstanceNetRWSplitType_ = dBInstanceNetRWSplitType;
  setParameter(std::string("DBInstanceNetRWSplitType"), dBInstanceNetRWSplitType);
}


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

#include <alibabacloud/rds/model/DescribeReadDBInstanceDelayRequest.h>

using AlibabaCloud::Rds::Model::DescribeReadDBInstanceDelayRequest;

DescribeReadDBInstanceDelayRequest::DescribeReadDBInstanceDelayRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeReadDBInstanceDelay") {
  setMethod(HttpRequest::Method::Post);
}

DescribeReadDBInstanceDelayRequest::~DescribeReadDBInstanceDelayRequest() {}

long DescribeReadDBInstanceDelayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeReadDBInstanceDelayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeReadDBInstanceDelayRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeReadDBInstanceDelayRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeReadDBInstanceDelayRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeReadDBInstanceDelayRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeReadDBInstanceDelayRequest::getRegionId() const {
  return regionId_;
}

void DescribeReadDBInstanceDelayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeReadDBInstanceDelayRequest::getReadInstanceId() const {
  return readInstanceId_;
}

void DescribeReadDBInstanceDelayRequest::setReadInstanceId(const std::string &readInstanceId) {
  readInstanceId_ = readInstanceId;
  setParameter(std::string("ReadInstanceId"), readInstanceId);
}

std::string DescribeReadDBInstanceDelayRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeReadDBInstanceDelayRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeReadDBInstanceDelayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeReadDBInstanceDelayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeReadDBInstanceDelayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeReadDBInstanceDelayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeReadDBInstanceDelayRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeReadDBInstanceDelayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


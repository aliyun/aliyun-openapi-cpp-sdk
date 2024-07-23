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

#include <alibabacloud/rds/model/DescribeDBInstanceSecurityGroupRuleRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceSecurityGroupRuleRequest;

DescribeDBInstanceSecurityGroupRuleRequest::DescribeDBInstanceSecurityGroupRuleRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceSecurityGroupRule") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceSecurityGroupRuleRequest::~DescribeDBInstanceSecurityGroupRuleRequest() {}

long DescribeDBInstanceSecurityGroupRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceSecurityGroupRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceSecurityGroupRuleRequest::getClientToken() const {
  return clientToken_;
}

void DescribeDBInstanceSecurityGroupRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeDBInstanceSecurityGroupRuleRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstanceSecurityGroupRuleRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstanceSecurityGroupRuleRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceSecurityGroupRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceSecurityGroupRuleRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceSecurityGroupRuleRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceSecurityGroupRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceSecurityGroupRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceSecurityGroupRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceSecurityGroupRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeDBInstanceSecurityGroupRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceSecurityGroupRuleRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}


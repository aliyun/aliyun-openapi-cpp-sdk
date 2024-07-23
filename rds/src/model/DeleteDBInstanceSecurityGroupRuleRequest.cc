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

#include <alibabacloud/rds/model/DeleteDBInstanceSecurityGroupRuleRequest.h>

using AlibabaCloud::Rds::Model::DeleteDBInstanceSecurityGroupRuleRequest;

DeleteDBInstanceSecurityGroupRuleRequest::DeleteDBInstanceSecurityGroupRuleRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteDBInstanceSecurityGroupRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBInstanceSecurityGroupRuleRequest::~DeleteDBInstanceSecurityGroupRuleRequest() {}

long DeleteDBInstanceSecurityGroupRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBInstanceSecurityGroupRuleRequest::getClientToken() const {
  return clientToken_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteDBInstanceSecurityGroupRuleRequest::getSecurityGroupRuleIds() const {
  return securityGroupRuleIds_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setSecurityGroupRuleIds(const std::string &securityGroupRuleIds) {
  securityGroupRuleIds_ = securityGroupRuleIds;
  setParameter(std::string("SecurityGroupRuleIds"), securityGroupRuleIds);
}

std::string DeleteDBInstanceSecurityGroupRuleRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteDBInstanceSecurityGroupRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDBInstanceSecurityGroupRuleRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteDBInstanceSecurityGroupRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDBInstanceSecurityGroupRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteDBInstanceSecurityGroupRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBInstanceSecurityGroupRuleRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}


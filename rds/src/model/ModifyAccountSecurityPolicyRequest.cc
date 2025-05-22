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

#include <alibabacloud/rds/model/ModifyAccountSecurityPolicyRequest.h>

using AlibabaCloud::Rds::Model::ModifyAccountSecurityPolicyRequest;

ModifyAccountSecurityPolicyRequest::ModifyAccountSecurityPolicyRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyAccountSecurityPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccountSecurityPolicyRequest::~ModifyAccountSecurityPolicyRequest() {}

long ModifyAccountSecurityPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAccountSecurityPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAccountSecurityPolicyRequest::getGroupPolicy() const {
  return groupPolicy_;
}

void ModifyAccountSecurityPolicyRequest::setGroupPolicy(const std::string &groupPolicy) {
  groupPolicy_ = groupPolicy;
  setParameter(std::string("GroupPolicy"), groupPolicy);
}

std::string ModifyAccountSecurityPolicyRequest::getClientToken() const {
  return clientToken_;
}

void ModifyAccountSecurityPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyAccountSecurityPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyAccountSecurityPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyAccountSecurityPolicyRequest::getRegionId() const {
  return regionId_;
}

void ModifyAccountSecurityPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyAccountSecurityPolicyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyAccountSecurityPolicyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyAccountSecurityPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAccountSecurityPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAccountSecurityPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAccountSecurityPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAccountSecurityPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAccountSecurityPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


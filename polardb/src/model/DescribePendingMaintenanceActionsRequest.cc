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

#include <alibabacloud/polardb/model/DescribePendingMaintenanceActionsRequest.h>

using AlibabaCloud::Polardb::Model::DescribePendingMaintenanceActionsRequest;

DescribePendingMaintenanceActionsRequest::DescribePendingMaintenanceActionsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribePendingMaintenanceActions") {
  setMethod(HttpRequest::Method::Post);
}

DescribePendingMaintenanceActionsRequest::~DescribePendingMaintenanceActionsRequest() {}

long DescribePendingMaintenanceActionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePendingMaintenanceActionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePendingMaintenanceActionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePendingMaintenanceActionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePendingMaintenanceActionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePendingMaintenanceActionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribePendingMaintenanceActionsRequest::getIsHistory() const {
  return isHistory_;
}

void DescribePendingMaintenanceActionsRequest::setIsHistory(int isHistory) {
  isHistory_ = isHistory;
  setParameter(std::string("IsHistory"), std::to_string(isHistory));
}

std::string DescribePendingMaintenanceActionsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribePendingMaintenanceActionsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribePendingMaintenanceActionsRequest::getRegionId() const {
  return regionId_;
}

void DescribePendingMaintenanceActionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePendingMaintenanceActionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePendingMaintenanceActionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePendingMaintenanceActionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePendingMaintenanceActionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePendingMaintenanceActionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePendingMaintenanceActionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


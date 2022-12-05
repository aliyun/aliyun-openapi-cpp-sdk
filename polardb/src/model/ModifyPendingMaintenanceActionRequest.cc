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

#include <alibabacloud/polardb/model/ModifyPendingMaintenanceActionRequest.h>

using AlibabaCloud::Polardb::Model::ModifyPendingMaintenanceActionRequest;

ModifyPendingMaintenanceActionRequest::ModifyPendingMaintenanceActionRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyPendingMaintenanceAction") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPendingMaintenanceActionRequest::~ModifyPendingMaintenanceActionRequest() {}

long ModifyPendingMaintenanceActionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyPendingMaintenanceActionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyPendingMaintenanceActionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyPendingMaintenanceActionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyPendingMaintenanceActionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyPendingMaintenanceActionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyPendingMaintenanceActionRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyPendingMaintenanceActionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyPendingMaintenanceActionRequest::getRegionId() const {
  return regionId_;
}

void ModifyPendingMaintenanceActionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyPendingMaintenanceActionRequest::getSwitchTime() const {
  return switchTime_;
}

void ModifyPendingMaintenanceActionRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string ModifyPendingMaintenanceActionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyPendingMaintenanceActionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyPendingMaintenanceActionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyPendingMaintenanceActionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyPendingMaintenanceActionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyPendingMaintenanceActionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyPendingMaintenanceActionRequest::getIds() const {
  return ids_;
}

void ModifyPendingMaintenanceActionRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}


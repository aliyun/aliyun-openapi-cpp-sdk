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

#include <alibabacloud/adb/model/ModifyMaintenanceActionRequest.h>

using AlibabaCloud::Adb::Model::ModifyMaintenanceActionRequest;

ModifyMaintenanceActionRequest::ModifyMaintenanceActionRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ModifyMaintenanceAction") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMaintenanceActionRequest::~ModifyMaintenanceActionRequest() {}

long ModifyMaintenanceActionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyMaintenanceActionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyMaintenanceActionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyMaintenanceActionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyMaintenanceActionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyMaintenanceActionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyMaintenanceActionRequest::getRegionId() const {
  return regionId_;
}

void ModifyMaintenanceActionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyMaintenanceActionRequest::getSwitchTime() const {
  return switchTime_;
}

void ModifyMaintenanceActionRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string ModifyMaintenanceActionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyMaintenanceActionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyMaintenanceActionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyMaintenanceActionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyMaintenanceActionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyMaintenanceActionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyMaintenanceActionRequest::getIds() const {
  return ids_;
}

void ModifyMaintenanceActionRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}


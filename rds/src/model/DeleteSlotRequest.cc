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

#include <alibabacloud/rds/model/DeleteSlotRequest.h>

using AlibabaCloud::Rds::Model::DeleteSlotRequest;

DeleteSlotRequest::DeleteSlotRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteSlot") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSlotRequest::~DeleteSlotRequest() {}

std::string DeleteSlotRequest::getSlotName() const {
  return slotName_;
}

void DeleteSlotRequest::setSlotName(const std::string &slotName) {
  slotName_ = slotName;
  setParameter(std::string("SlotName"), slotName);
}

long DeleteSlotRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSlotRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSlotRequest::getClientToken() const {
  return clientToken_;
}

void DeleteSlotRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteSlotRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteSlotRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteSlotRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteSlotRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteSlotRequest::getRegionId() const {
  return regionId_;
}

void DeleteSlotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSlotRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteSlotRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteSlotRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteSlotRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteSlotRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteSlotRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteSlotRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSlotRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteSlotRequest::getSlotStatus() const {
  return slotStatus_;
}

void DeleteSlotRequest::setSlotStatus(const std::string &slotStatus) {
  slotStatus_ = slotStatus;
  setParameter(std::string("SlotStatus"), slotStatus);
}


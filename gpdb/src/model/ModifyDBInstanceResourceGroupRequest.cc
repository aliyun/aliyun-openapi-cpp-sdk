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

#include <alibabacloud/gpdb/model/ModifyDBInstanceResourceGroupRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyDBInstanceResourceGroupRequest;

ModifyDBInstanceResourceGroupRequest::ModifyDBInstanceResourceGroupRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifyDBInstanceResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceResourceGroupRequest::~ModifyDBInstanceResourceGroupRequest() {}

long ModifyDBInstanceResourceGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceResourceGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceResourceGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceResourceGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceResourceGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDBInstanceResourceGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyDBInstanceResourceGroupRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceResourceGroupRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBInstanceResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void ModifyDBInstanceResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}


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

#include <alibabacloud/dds/model/ModifyResourceGroupRequest.h>

using AlibabaCloud::Dds::Model::ModifyResourceGroupRequest;

ModifyResourceGroupRequest::ModifyResourceGroupRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyResourceGroupRequest::~ModifyResourceGroupRequest() {}

long ModifyResourceGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyResourceGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyResourceGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyResourceGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyResourceGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyResourceGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyResourceGroupRequest::getRegionId() const {
  return regionId_;
}

void ModifyResourceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyResourceGroupRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyResourceGroupRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


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

#include <alibabacloud/dds/model/ModifyGlobalSecurityIPGroupNameRequest.h>

using AlibabaCloud::Dds::Model::ModifyGlobalSecurityIPGroupNameRequest;

ModifyGlobalSecurityIPGroupNameRequest::ModifyGlobalSecurityIPGroupNameRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyGlobalSecurityIPGroupName") {
  setMethod(HttpRequest::Method::Post);
}

ModifyGlobalSecurityIPGroupNameRequest::~ModifyGlobalSecurityIPGroupNameRequest() {}

long ModifyGlobalSecurityIPGroupNameRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyGlobalSecurityIPGroupNameRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyGlobalSecurityIPGroupNameRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyGlobalSecurityIPGroupNameRequest::getGlobalSecurityGroupId() const {
  return globalSecurityGroupId_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setGlobalSecurityGroupId(const std::string &globalSecurityGroupId) {
  globalSecurityGroupId_ = globalSecurityGroupId;
  setParameter(std::string("GlobalSecurityGroupId"), globalSecurityGroupId);
}

std::string ModifyGlobalSecurityIPGroupNameRequest::getRegionId() const {
  return regionId_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyGlobalSecurityIPGroupNameRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyGlobalSecurityIPGroupNameRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyGlobalSecurityIPGroupNameRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyGlobalSecurityIPGroupNameRequest::getGlobalIgName() const {
  return globalIgName_;
}

void ModifyGlobalSecurityIPGroupNameRequest::setGlobalIgName(const std::string &globalIgName) {
  globalIgName_ = globalIgName;
  setParameter(std::string("GlobalIgName"), globalIgName);
}


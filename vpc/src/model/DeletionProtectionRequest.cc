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

#include <alibabacloud/vpc/model/DeletionProtectionRequest.h>

using AlibabaCloud::Vpc::Model::DeletionProtectionRequest;

DeletionProtectionRequest::DeletionProtectionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeletionProtection") {
  setMethod(HttpRequest::Method::Post);
}

DeletionProtectionRequest::~DeletionProtectionRequest() {}

long DeletionProtectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeletionProtectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeletionProtectionRequest::getClientToken() const {
  return clientToken_;
}

void DeletionProtectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeletionProtectionRequest::getProtectionEnable() const {
  return protectionEnable_;
}

void DeletionProtectionRequest::setProtectionEnable(bool protectionEnable) {
  protectionEnable_ = protectionEnable;
  setParameter(std::string("ProtectionEnable"), protectionEnable ? "true" : "false");
}

std::string DeletionProtectionRequest::getType() const {
  return type_;
}

void DeletionProtectionRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DeletionProtectionRequest::getRegionId() const {
  return regionId_;
}

void DeletionProtectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeletionProtectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeletionProtectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeletionProtectionRequest::getOwnerId() const {
  return ownerId_;
}

void DeletionProtectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeletionProtectionRequest::getInstanceId() const {
  return instanceId_;
}

void DeletionProtectionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


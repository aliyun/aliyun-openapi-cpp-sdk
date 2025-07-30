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

#include <alibabacloud/r-kvstore/model/ResizeTairKVCacheCustomInstanceDiskRequest.h>

using AlibabaCloud::R_kvstore::Model::ResizeTairKVCacheCustomInstanceDiskRequest;

ResizeTairKVCacheCustomInstanceDiskRequest::ResizeTairKVCacheCustomInstanceDiskRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ResizeTairKVCacheCustomInstanceDisk") {
  setMethod(HttpRequest::Method::Post);
}

ResizeTairKVCacheCustomInstanceDiskRequest::~ResizeTairKVCacheCustomInstanceDiskRequest() {}

long ResizeTairKVCacheCustomInstanceDiskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResizeTairKVCacheCustomInstanceDiskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ResizeTairKVCacheCustomInstanceDiskRequest::getSecurityToken() const {
  return securityToken_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ResizeTairKVCacheCustomInstanceDiskRequest::getDiskId() const {
  return diskId_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

bool ResizeTairKVCacheCustomInstanceDiskRequest::getAutoPay() const {
  return autoPay_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ResizeTairKVCacheCustomInstanceDiskRequest::getDiskSize() const {
  return diskSize_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setDiskSize(const std::string &diskSize) {
  diskSize_ = diskSize;
  setParameter(std::string("DiskSize"), diskSize);
}

std::string ResizeTairKVCacheCustomInstanceDiskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResizeTairKVCacheCustomInstanceDiskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResizeTairKVCacheCustomInstanceDiskRequest::getOwnerId() const {
  return ownerId_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ResizeTairKVCacheCustomInstanceDiskRequest::getInstanceId() const {
  return instanceId_;
}

void ResizeTairKVCacheCustomInstanceDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


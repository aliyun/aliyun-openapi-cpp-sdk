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

#include <alibabacloud/polardb/model/RefreshDBClusterStorageUsageRequest.h>

using AlibabaCloud::Polardb::Model::RefreshDBClusterStorageUsageRequest;

RefreshDBClusterStorageUsageRequest::RefreshDBClusterStorageUsageRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "RefreshDBClusterStorageUsage") {
  setMethod(HttpRequest::Method::Post);
}

RefreshDBClusterStorageUsageRequest::~RefreshDBClusterStorageUsageRequest() {}

long RefreshDBClusterStorageUsageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RefreshDBClusterStorageUsageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RefreshDBClusterStorageUsageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RefreshDBClusterStorageUsageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RefreshDBClusterStorageUsageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RefreshDBClusterStorageUsageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RefreshDBClusterStorageUsageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RefreshDBClusterStorageUsageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RefreshDBClusterStorageUsageRequest::getOwnerId() const {
  return ownerId_;
}

void RefreshDBClusterStorageUsageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool RefreshDBClusterStorageUsageRequest::getSyncRealTime() const {
  return syncRealTime_;
}

void RefreshDBClusterStorageUsageRequest::setSyncRealTime(bool syncRealTime) {
  syncRealTime_ = syncRealTime;
  setParameter(std::string("SyncRealTime"), syncRealTime ? "true" : "false");
}


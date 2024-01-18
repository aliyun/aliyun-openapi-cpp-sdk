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

#include <alibabacloud/r-kvstore/model/FlushInstanceForDBRequest.h>

using AlibabaCloud::R_kvstore::Model::FlushInstanceForDBRequest;

FlushInstanceForDBRequest::FlushInstanceForDBRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "FlushInstanceForDB") {
  setMethod(HttpRequest::Method::Post);
}

FlushInstanceForDBRequest::~FlushInstanceForDBRequest() {}

long FlushInstanceForDBRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void FlushInstanceForDBRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string FlushInstanceForDBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void FlushInstanceForDBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string FlushInstanceForDBRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void FlushInstanceForDBRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string FlushInstanceForDBRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void FlushInstanceForDBRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long FlushInstanceForDBRequest::getOwnerId() const {
  return ownerId_;
}

void FlushInstanceForDBRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int FlushInstanceForDBRequest::getDbIndex() const {
  return dbIndex_;
}

void FlushInstanceForDBRequest::setDbIndex(int dbIndex) {
  dbIndex_ = dbIndex;
  setParameter(std::string("DbIndex"), std::to_string(dbIndex));
}

std::string FlushInstanceForDBRequest::getInstanceId() const {
  return instanceId_;
}

void FlushInstanceForDBRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


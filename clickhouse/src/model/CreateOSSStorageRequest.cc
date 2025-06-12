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

#include <alibabacloud/clickhouse/model/CreateOSSStorageRequest.h>

using AlibabaCloud::Clickhouse::Model::CreateOSSStorageRequest;

CreateOSSStorageRequest::CreateOSSStorageRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CreateOSSStorage") {
  setMethod(HttpRequest::Method::Post);
}

CreateOSSStorageRequest::~CreateOSSStorageRequest() {}

long CreateOSSStorageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateOSSStorageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateOSSStorageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateOSSStorageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateOSSStorageRequest::getRegionId() const {
  return regionId_;
}

void CreateOSSStorageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateOSSStorageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateOSSStorageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateOSSStorageRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateOSSStorageRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateOSSStorageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateOSSStorageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateOSSStorageRequest::getOwnerId() const {
  return ownerId_;
}

void CreateOSSStorageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


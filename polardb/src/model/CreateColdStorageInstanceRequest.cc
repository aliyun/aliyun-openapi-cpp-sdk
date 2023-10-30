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

#include <alibabacloud/polardb/model/CreateColdStorageInstanceRequest.h>

using AlibabaCloud::Polardb::Model::CreateColdStorageInstanceRequest;

CreateColdStorageInstanceRequest::CreateColdStorageInstanceRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateColdStorageInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateColdStorageInstanceRequest::~CreateColdStorageInstanceRequest() {}

long CreateColdStorageInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateColdStorageInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateColdStorageInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateColdStorageInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateColdStorageInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateColdStorageInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateColdStorageInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateColdStorageInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateColdStorageInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateColdStorageInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateColdStorageInstanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateColdStorageInstanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateColdStorageInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateColdStorageInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateColdStorageInstanceRequest::getColdStorageInstanceDescription() const {
  return coldStorageInstanceDescription_;
}

void CreateColdStorageInstanceRequest::setColdStorageInstanceDescription(const std::string &coldStorageInstanceDescription) {
  coldStorageInstanceDescription_ = coldStorageInstanceDescription;
  setParameter(std::string("ColdStorageInstanceDescription"), coldStorageInstanceDescription);
}

long CreateColdStorageInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateColdStorageInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


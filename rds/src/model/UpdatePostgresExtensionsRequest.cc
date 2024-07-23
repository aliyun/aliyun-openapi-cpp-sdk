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

#include <alibabacloud/rds/model/UpdatePostgresExtensionsRequest.h>

using AlibabaCloud::Rds::Model::UpdatePostgresExtensionsRequest;

UpdatePostgresExtensionsRequest::UpdatePostgresExtensionsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "UpdatePostgresExtensions") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePostgresExtensionsRequest::~UpdatePostgresExtensionsRequest() {}

long UpdatePostgresExtensionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdatePostgresExtensionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdatePostgresExtensionsRequest::getClientToken() const {
  return clientToken_;
}

void UpdatePostgresExtensionsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdatePostgresExtensionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdatePostgresExtensionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdatePostgresExtensionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdatePostgresExtensionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdatePostgresExtensionsRequest::getRegionId() const {
  return regionId_;
}

void UpdatePostgresExtensionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdatePostgresExtensionsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpdatePostgresExtensionsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpdatePostgresExtensionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdatePostgresExtensionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdatePostgresExtensionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdatePostgresExtensionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdatePostgresExtensionsRequest::getOwnerId() const {
  return ownerId_;
}

void UpdatePostgresExtensionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdatePostgresExtensionsRequest::getDBNames() const {
  return dBNames_;
}

void UpdatePostgresExtensionsRequest::setDBNames(const std::string &dBNames) {
  dBNames_ = dBNames;
  setParameter(std::string("DBNames"), dBNames);
}

std::string UpdatePostgresExtensionsRequest::getExtensions() const {
  return extensions_;
}

void UpdatePostgresExtensionsRequest::setExtensions(const std::string &extensions) {
  extensions_ = extensions;
  setParameter(std::string("Extensions"), extensions);
}


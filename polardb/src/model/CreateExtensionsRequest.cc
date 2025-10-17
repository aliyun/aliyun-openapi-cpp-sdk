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

#include <alibabacloud/polardb/model/CreateExtensionsRequest.h>

using AlibabaCloud::Polardb::Model::CreateExtensionsRequest;

CreateExtensionsRequest::CreateExtensionsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateExtensions") {
  setMethod(HttpRequest::Method::Post);
}

CreateExtensionsRequest::~CreateExtensionsRequest() {}

long CreateExtensionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateExtensionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateExtensionsRequest::getSourceDBName() const {
  return sourceDBName_;
}

void CreateExtensionsRequest::setSourceDBName(const std::string &sourceDBName) {
  sourceDBName_ = sourceDBName;
  setParameter(std::string("SourceDBName"), sourceDBName);
}

std::string CreateExtensionsRequest::getClientToken() const {
  return clientToken_;
}

void CreateExtensionsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateExtensionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateExtensionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateExtensionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateExtensionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateExtensionsRequest::getAccountName() const {
  return accountName_;
}

void CreateExtensionsRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateExtensionsRequest::getRegionId() const {
  return regionId_;
}

void CreateExtensionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateExtensionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateExtensionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateExtensionsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateExtensionsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateExtensionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateExtensionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateExtensionsRequest::getOwnerId() const {
  return ownerId_;
}

void CreateExtensionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateExtensionsRequest::getVersion() const {
  return version_;
}

void CreateExtensionsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateExtensionsRequest::getDBNames() const {
  return dBNames_;
}

void CreateExtensionsRequest::setDBNames(const std::string &dBNames) {
  dBNames_ = dBNames;
  setParameter(std::string("DBNames"), dBNames);
}

std::string CreateExtensionsRequest::getExtensions() const {
  return extensions_;
}

void CreateExtensionsRequest::setExtensions(const std::string &extensions) {
  extensions_ = extensions;
  setParameter(std::string("Extensions"), extensions);
}

std::string CreateExtensionsRequest::getVpcId() const {
  return vpcId_;
}

void CreateExtensionsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


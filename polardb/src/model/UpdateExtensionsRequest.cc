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

#include <alibabacloud/polardb/model/UpdateExtensionsRequest.h>

using AlibabaCloud::Polardb::Model::UpdateExtensionsRequest;

UpdateExtensionsRequest::UpdateExtensionsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "UpdateExtensions") {
  setMethod(HttpRequest::Method::Post);
}

UpdateExtensionsRequest::~UpdateExtensionsRequest() {}

long UpdateExtensionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateExtensionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateExtensionsRequest::getClientToken() const {
  return clientToken_;
}

void UpdateExtensionsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateExtensionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateExtensionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateExtensionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateExtensionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdateExtensionsRequest::getRegionId() const {
  return regionId_;
}

void UpdateExtensionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateExtensionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateExtensionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateExtensionsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void UpdateExtensionsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string UpdateExtensionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateExtensionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateExtensionsRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateExtensionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateExtensionsRequest::getVersion() const {
  return version_;
}

void UpdateExtensionsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string UpdateExtensionsRequest::getDBNames() const {
  return dBNames_;
}

void UpdateExtensionsRequest::setDBNames(const std::string &dBNames) {
  dBNames_ = dBNames;
  setParameter(std::string("DBNames"), dBNames);
}

std::string UpdateExtensionsRequest::getExtensions() const {
  return extensions_;
}

void UpdateExtensionsRequest::setExtensions(const std::string &extensions) {
  extensions_ = extensions;
  setParameter(std::string("Extensions"), extensions);
}

std::string UpdateExtensionsRequest::getVpcId() const {
  return vpcId_;
}

void UpdateExtensionsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


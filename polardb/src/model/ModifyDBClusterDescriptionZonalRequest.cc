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

#include <alibabacloud/polardb/model/ModifyDBClusterDescriptionZonalRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterDescriptionZonalRequest;

ModifyDBClusterDescriptionZonalRequest::ModifyDBClusterDescriptionZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterDescriptionZonal") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterDescriptionZonalRequest::~ModifyDBClusterDescriptionZonalRequest() {}

long ModifyDBClusterDescriptionZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterDescriptionZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterDescriptionZonalRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void ModifyDBClusterDescriptionZonalRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string ModifyDBClusterDescriptionZonalRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBClusterDescriptionZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBClusterDescriptionZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterDescriptionZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterDescriptionZonalRequest::getSubGroupName() const {
  return subGroupName_;
}

void ModifyDBClusterDescriptionZonalRequest::setSubGroupName(const std::string &subGroupName) {
  subGroupName_ = subGroupName;
  setParameter(std::string("SubGroupName"), subGroupName);
}

std::string ModifyDBClusterDescriptionZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterDescriptionZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterDescriptionZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterDescriptionZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterDescriptionZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterDescriptionZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterDescriptionZonalRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterDescriptionZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


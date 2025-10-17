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

#include <alibabacloud/polardb/model/ModifyDBDescriptionZonalRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBDescriptionZonalRequest;

ModifyDBDescriptionZonalRequest::ModifyDBDescriptionZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBDescriptionZonal") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBDescriptionZonalRequest::~ModifyDBDescriptionZonalRequest() {}

long ModifyDBDescriptionZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBDescriptionZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBDescriptionZonalRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBDescriptionZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBDescriptionZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBDescriptionZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBDescriptionZonalRequest::getDBDescription() const {
  return dBDescription_;
}

void ModifyDBDescriptionZonalRequest::setDBDescription(const std::string &dBDescription) {
  dBDescription_ = dBDescription;
  setParameter(std::string("DBDescription"), dBDescription);
}

std::string ModifyDBDescriptionZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBDescriptionZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBDescriptionZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBDescriptionZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBDescriptionZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBDescriptionZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBDescriptionZonalRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBDescriptionZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBDescriptionZonalRequest::getDBName() const {
  return dBName_;
}

void ModifyDBDescriptionZonalRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}


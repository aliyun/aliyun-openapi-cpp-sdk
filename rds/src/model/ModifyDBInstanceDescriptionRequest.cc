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

#include <alibabacloud/rds/model/ModifyDBInstanceDescriptionRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceDescriptionRequest;

ModifyDBInstanceDescriptionRequest::ModifyDBInstanceDescriptionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceDescriptionRequest::~ModifyDBInstanceDescriptionRequest() {}

long ModifyDBInstanceDescriptionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceDescriptionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceDescriptionRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBInstanceDescriptionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBInstanceDescriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceDescriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceDescriptionRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceDescriptionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceDescriptionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceDescriptionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceDescriptionRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void ModifyDBInstanceDescriptionRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string ModifyDBInstanceDescriptionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceDescriptionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceDescriptionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceDescriptionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceDescriptionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceDescriptionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


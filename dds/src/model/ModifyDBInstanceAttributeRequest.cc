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

#include <alibabacloud/dds/model/ModifyDBInstanceAttributeRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceAttributeRequest;

ModifyDBInstanceAttributeRequest::ModifyDBInstanceAttributeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceAttributeRequest::~ModifyDBInstanceAttributeRequest() {}

bool ModifyDBInstanceAttributeRequest::getDBInstanceReleaseProtection() const {
  return dBInstanceReleaseProtection_;
}

void ModifyDBInstanceAttributeRequest::setDBInstanceReleaseProtection(bool dBInstanceReleaseProtection) {
  dBInstanceReleaseProtection_ = dBInstanceReleaseProtection;
  setParameter(std::string("DBInstanceReleaseProtection"), dBInstanceReleaseProtection ? "true" : "false");
}

long ModifyDBInstanceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceAttributeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceAttributeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


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

#include <alibabacloud/rds/model/ModifyDBNodeRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBNodeRequest;

ModifyDBNodeRequest::ModifyDBNodeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBNode") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBNodeRequest::~ModifyDBNodeRequest() {}

long ModifyDBNodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBNodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBNodeRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void ModifyDBNodeRequest::setDBInstanceStorage(const std::string &dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), dBInstanceStorage);
}

std::string ModifyDBNodeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBNodeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBNodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBNodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBNodeRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void ModifyDBNodeRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string ModifyDBNodeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBNodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBNodeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBNodeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBNodeRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void ModifyDBNodeRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

bool ModifyDBNodeRequest::getProduceAsync() const {
  return produceAsync_;
}

void ModifyDBNodeRequest::setProduceAsync(bool produceAsync) {
  produceAsync_ = produceAsync;
  setParameter(std::string("ProduceAsync"), produceAsync ? "true" : "false");
}

bool ModifyDBNodeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyDBNodeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool ModifyDBNodeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyDBNodeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyDBNodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBNodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBNodeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBNodeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBNodeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBNodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBNodeRequest::getDBNode() const {
  return dBNode_;
}

void ModifyDBNodeRequest::setDBNode(const std::string &dBNode) {
  dBNode_ = dBNode;
  setParameter(std::string("DBNode"), dBNode);
}


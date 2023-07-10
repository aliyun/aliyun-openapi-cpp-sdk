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

#include <alibabacloud/dbs/model/ModifyStorageStrategyRequest.h>

using AlibabaCloud::Dbs::Model::ModifyStorageStrategyRequest;

ModifyStorageStrategyRequest::ModifyStorageStrategyRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "ModifyStorageStrategy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyStorageStrategyRequest::~ModifyStorageStrategyRequest() {}

std::string ModifyStorageStrategyRequest::getClientToken() const {
  return clientToken_;
}

void ModifyStorageStrategyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyStorageStrategyRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void ModifyStorageStrategyRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

int ModifyStorageStrategyRequest::getDuplicationInfrequentAccessPeriod() const {
  return duplicationInfrequentAccessPeriod_;
}

void ModifyStorageStrategyRequest::setDuplicationInfrequentAccessPeriod(int duplicationInfrequentAccessPeriod) {
  duplicationInfrequentAccessPeriod_ = duplicationInfrequentAccessPeriod;
  setParameter(std::string("DuplicationInfrequentAccessPeriod"), std::to_string(duplicationInfrequentAccessPeriod));
}

int ModifyStorageStrategyRequest::getDuplicationArchivePeriod() const {
  return duplicationArchivePeriod_;
}

void ModifyStorageStrategyRequest::setDuplicationArchivePeriod(int duplicationArchivePeriod) {
  duplicationArchivePeriod_ = duplicationArchivePeriod;
  setParameter(std::string("DuplicationArchivePeriod"), std::to_string(duplicationArchivePeriod));
}

std::string ModifyStorageStrategyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyStorageStrategyRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

int ModifyStorageStrategyRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void ModifyStorageStrategyRequest::setBackupRetentionPeriod(int backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), std::to_string(backupRetentionPeriod));
}


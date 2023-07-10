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

#include <alibabacloud/dbs/model/ModifyBackupStrategyRequest.h>

using AlibabaCloud::Dbs::Model::ModifyBackupStrategyRequest;

ModifyBackupStrategyRequest::ModifyBackupStrategyRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "ModifyBackupStrategy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupStrategyRequest::~ModifyBackupStrategyRequest() {}

std::string ModifyBackupStrategyRequest::getClientToken() const {
  return clientToken_;
}

void ModifyBackupStrategyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyBackupStrategyRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void ModifyBackupStrategyRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string ModifyBackupStrategyRequest::getBackupStartTime() const {
  return backupStartTime_;
}

void ModifyBackupStrategyRequest::setBackupStartTime(const std::string &backupStartTime) {
  backupStartTime_ = backupStartTime;
  setParameter(std::string("BackupStartTime"), backupStartTime);
}

int ModifyBackupStrategyRequest::getBackupLogIntervalSeconds() const {
  return backupLogIntervalSeconds_;
}

void ModifyBackupStrategyRequest::setBackupLogIntervalSeconds(int backupLogIntervalSeconds) {
  backupLogIntervalSeconds_ = backupLogIntervalSeconds;
  setParameter(std::string("BackupLogIntervalSeconds"), std::to_string(backupLogIntervalSeconds));
}

std::string ModifyBackupStrategyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBackupStrategyRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyBackupStrategyRequest::getBackupPeriod() const {
  return backupPeriod_;
}

void ModifyBackupStrategyRequest::setBackupPeriod(const std::string &backupPeriod) {
  backupPeriod_ = backupPeriod;
  setParameter(std::string("BackupPeriod"), backupPeriod);
}

std::string ModifyBackupStrategyRequest::getBackupStrategyType() const {
  return backupStrategyType_;
}

void ModifyBackupStrategyRequest::setBackupStrategyType(const std::string &backupStrategyType) {
  backupStrategyType_ = backupStrategyType;
  setParameter(std::string("BackupStrategyType"), backupStrategyType);
}


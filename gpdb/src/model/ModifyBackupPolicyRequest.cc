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

#include <alibabacloud/gpdb/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifyBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupPolicyRequest::~ModifyBackupPolicyRequest() {}

std::string ModifyBackupPolicyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyBackupPolicyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyBackupPolicyRequest::getRecoveryPointPeriod() const {
  return recoveryPointPeriod_;
}

void ModifyBackupPolicyRequest::setRecoveryPointPeriod(const std::string &recoveryPointPeriod) {
  recoveryPointPeriod_ = recoveryPointPeriod;
  setParameter(std::string("RecoveryPointPeriod"), recoveryPointPeriod);
}

bool ModifyBackupPolicyRequest::getEnableRecoveryPoint() const {
  return enableRecoveryPoint_;
}

void ModifyBackupPolicyRequest::setEnableRecoveryPoint(bool enableRecoveryPoint) {
  enableRecoveryPoint_ = enableRecoveryPoint;
  setParameter(std::string("EnableRecoveryPoint"), enableRecoveryPoint ? "true" : "false");
}

std::string ModifyBackupPolicyRequest::getPreferredBackupPeriod() const {
  return preferredBackupPeriod_;
}

void ModifyBackupPolicyRequest::setPreferredBackupPeriod(const std::string &preferredBackupPeriod) {
  preferredBackupPeriod_ = preferredBackupPeriod;
  setParameter(std::string("PreferredBackupPeriod"), preferredBackupPeriod);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupTime() const {
  return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string &preferredBackupTime) {
  preferredBackupTime_ = preferredBackupTime;
  setParameter(std::string("PreferredBackupTime"), preferredBackupTime);
}

int ModifyBackupPolicyRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPeriod(int backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), std::to_string(backupRetentionPeriod));
}


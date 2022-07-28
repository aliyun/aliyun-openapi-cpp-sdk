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

#include <alibabacloud/dbs/model/ModifyBackupPlanNameRequest.h>

using AlibabaCloud::Dbs::Model::ModifyBackupPlanNameRequest;

ModifyBackupPlanNameRequest::ModifyBackupPlanNameRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "ModifyBackupPlanName") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupPlanNameRequest::~ModifyBackupPlanNameRequest() {}

std::string ModifyBackupPlanNameRequest::getClientToken() const {
  return clientToken_;
}

void ModifyBackupPlanNameRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyBackupPlanNameRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void ModifyBackupPlanNameRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string ModifyBackupPlanNameRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBackupPlanNameRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyBackupPlanNameRequest::getBackupPlanName() const {
  return backupPlanName_;
}

void ModifyBackupPlanNameRequest::setBackupPlanName(const std::string &backupPlanName) {
  backupPlanName_ = backupPlanName;
  setParameter(std::string("BackupPlanName"), backupPlanName);
}


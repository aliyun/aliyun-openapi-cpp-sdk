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

#include <alibabacloud/dbs/model/UpgradeBackupPlanRequest.h>

using AlibabaCloud::Dbs::Model::UpgradeBackupPlanRequest;

UpgradeBackupPlanRequest::UpgradeBackupPlanRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "UpgradeBackupPlan") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeBackupPlanRequest::~UpgradeBackupPlanRequest() {}

std::string UpgradeBackupPlanRequest::getClientToken() const {
  return clientToken_;
}

void UpgradeBackupPlanRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpgradeBackupPlanRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void UpgradeBackupPlanRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string UpgradeBackupPlanRequest::getInstanceClass() const {
  return instanceClass_;
}

void UpgradeBackupPlanRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string UpgradeBackupPlanRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeBackupPlanRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}


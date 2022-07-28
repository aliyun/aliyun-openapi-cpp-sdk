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

#include <alibabacloud/dbs/model/ModifyBackupObjectsRequest.h>

using AlibabaCloud::Dbs::Model::ModifyBackupObjectsRequest;

ModifyBackupObjectsRequest::ModifyBackupObjectsRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "ModifyBackupObjects") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupObjectsRequest::~ModifyBackupObjectsRequest() {}

std::string ModifyBackupObjectsRequest::getClientToken() const {
  return clientToken_;
}

void ModifyBackupObjectsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyBackupObjectsRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void ModifyBackupObjectsRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string ModifyBackupObjectsRequest::getBackupObjects() const {
  return backupObjects_;
}

void ModifyBackupObjectsRequest::setBackupObjects(const std::string &backupObjects) {
  backupObjects_ = backupObjects;
  setParameter(std::string("BackupObjects"), backupObjects);
}

std::string ModifyBackupObjectsRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBackupObjectsRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}


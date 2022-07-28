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

#include <alibabacloud/dbs/model/EnableBackupLogRequest.h>

using AlibabaCloud::Dbs::Model::EnableBackupLogRequest;

EnableBackupLogRequest::EnableBackupLogRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "EnableBackupLog") {
  setMethod(HttpRequest::Method::Post);
}

EnableBackupLogRequest::~EnableBackupLogRequest() {}

std::string EnableBackupLogRequest::getClientToken() const {
  return clientToken_;
}

void EnableBackupLogRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnableBackupLogRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void EnableBackupLogRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string EnableBackupLogRequest::getOwnerId() const {
  return ownerId_;
}

void EnableBackupLogRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}


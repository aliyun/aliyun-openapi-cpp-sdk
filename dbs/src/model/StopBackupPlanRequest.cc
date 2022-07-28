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

#include <alibabacloud/dbs/model/StopBackupPlanRequest.h>

using AlibabaCloud::Dbs::Model::StopBackupPlanRequest;

StopBackupPlanRequest::StopBackupPlanRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "StopBackupPlan") {
  setMethod(HttpRequest::Method::Post);
}

StopBackupPlanRequest::~StopBackupPlanRequest() {}

std::string StopBackupPlanRequest::getStopMethod() const {
  return stopMethod_;
}

void StopBackupPlanRequest::setStopMethod(const std::string &stopMethod) {
  stopMethod_ = stopMethod;
  setParameter(std::string("StopMethod"), stopMethod);
}

std::string StopBackupPlanRequest::getClientToken() const {
  return clientToken_;
}

void StopBackupPlanRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string StopBackupPlanRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void StopBackupPlanRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string StopBackupPlanRequest::getOwnerId() const {
  return ownerId_;
}

void StopBackupPlanRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}


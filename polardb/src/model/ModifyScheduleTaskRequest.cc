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

#include <alibabacloud/polardb/model/ModifyScheduleTaskRequest.h>

using AlibabaCloud::Polardb::Model::ModifyScheduleTaskRequest;

ModifyScheduleTaskRequest::ModifyScheduleTaskRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyScheduleTask") {
  setMethod(HttpRequest::Method::Post);
}

ModifyScheduleTaskRequest::~ModifyScheduleTaskRequest() {}

long ModifyScheduleTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyScheduleTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyScheduleTaskRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyScheduleTaskRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyScheduleTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyScheduleTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyScheduleTaskRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyScheduleTaskRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyScheduleTaskRequest::getTaskId() const {
  return taskId_;
}

void ModifyScheduleTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string ModifyScheduleTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyScheduleTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyScheduleTaskRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyScheduleTaskRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyScheduleTaskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyScheduleTaskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyScheduleTaskRequest::getPlannedFlashingOffTime() const {
  return plannedFlashingOffTime_;
}

void ModifyScheduleTaskRequest::setPlannedFlashingOffTime(const std::string &plannedFlashingOffTime) {
  plannedFlashingOffTime_ = plannedFlashingOffTime;
  setParameter(std::string("PlannedFlashingOffTime"), plannedFlashingOffTime);
}

long ModifyScheduleTaskRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyScheduleTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyScheduleTaskRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyScheduleTaskRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}


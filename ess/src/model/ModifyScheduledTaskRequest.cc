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

#include <alibabacloud/ess/model/ModifyScheduledTaskRequest.h>

using AlibabaCloud::Ess::Model::ModifyScheduledTaskRequest;

ModifyScheduledTaskRequest::ModifyScheduledTaskRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ModifyScheduledTask") {
  setMethod(HttpRequest::Method::Post);
}

ModifyScheduledTaskRequest::~ModifyScheduledTaskRequest() {}

long ModifyScheduledTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyScheduledTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyScheduledTaskRequest::getScheduledAction() const {
  return scheduledAction_;
}

void ModifyScheduledTaskRequest::setScheduledAction(const std::string &scheduledAction) {
  scheduledAction_ = scheduledAction;
  setParameter(std::string("ScheduledAction"), scheduledAction);
}

int ModifyScheduledTaskRequest::getMaxValue() const {
  return maxValue_;
}

void ModifyScheduledTaskRequest::setMaxValue(int maxValue) {
  maxValue_ = maxValue;
  setParameter(std::string("MaxValue"), std::to_string(maxValue));
}

std::string ModifyScheduledTaskRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void ModifyScheduledTaskRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string ModifyScheduledTaskRequest::getDescription() const {
  return description_;
}

void ModifyScheduledTaskRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyScheduledTaskRequest::getRecurrenceEndTime() const {
  return recurrenceEndTime_;
}

void ModifyScheduledTaskRequest::setRecurrenceEndTime(const std::string &recurrenceEndTime) {
  recurrenceEndTime_ = recurrenceEndTime;
  setParameter(std::string("RecurrenceEndTime"), recurrenceEndTime);
}

std::string ModifyScheduledTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyScheduledTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyScheduledTaskRequest::getRegionId() const {
  return regionId_;
}

void ModifyScheduledTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyScheduledTaskRequest::getLaunchTime() const {
  return launchTime_;
}

void ModifyScheduledTaskRequest::setLaunchTime(const std::string &launchTime) {
  launchTime_ = launchTime;
  setParameter(std::string("LaunchTime"), launchTime);
}

int ModifyScheduledTaskRequest::getDesiredCapacity() const {
  return desiredCapacity_;
}

void ModifyScheduledTaskRequest::setDesiredCapacity(int desiredCapacity) {
  desiredCapacity_ = desiredCapacity;
  setParameter(std::string("DesiredCapacity"), std::to_string(desiredCapacity));
}

std::string ModifyScheduledTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyScheduledTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyScheduledTaskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyScheduledTaskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyScheduledTaskRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyScheduledTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyScheduledTaskRequest::getRecurrenceValue() const {
  return recurrenceValue_;
}

void ModifyScheduledTaskRequest::setRecurrenceValue(const std::string &recurrenceValue) {
  recurrenceValue_ = recurrenceValue;
  setParameter(std::string("RecurrenceValue"), recurrenceValue);
}

int ModifyScheduledTaskRequest::getLaunchExpirationTime() const {
  return launchExpirationTime_;
}

void ModifyScheduledTaskRequest::setLaunchExpirationTime(int launchExpirationTime) {
  launchExpirationTime_ = launchExpirationTime;
  setParameter(std::string("LaunchExpirationTime"), std::to_string(launchExpirationTime));
}

int ModifyScheduledTaskRequest::getMinValue() const {
  return minValue_;
}

void ModifyScheduledTaskRequest::setMinValue(int minValue) {
  minValue_ = minValue;
  setParameter(std::string("MinValue"), std::to_string(minValue));
}

std::string ModifyScheduledTaskRequest::getScheduledTaskName() const {
  return scheduledTaskName_;
}

void ModifyScheduledTaskRequest::setScheduledTaskName(const std::string &scheduledTaskName) {
  scheduledTaskName_ = scheduledTaskName;
  setParameter(std::string("ScheduledTaskName"), scheduledTaskName);
}

bool ModifyScheduledTaskRequest::getTaskEnabled() const {
  return taskEnabled_;
}

void ModifyScheduledTaskRequest::setTaskEnabled(bool taskEnabled) {
  taskEnabled_ = taskEnabled;
  setParameter(std::string("TaskEnabled"), taskEnabled ? "true" : "false");
}

std::string ModifyScheduledTaskRequest::getScheduledTaskId() const {
  return scheduledTaskId_;
}

void ModifyScheduledTaskRequest::setScheduledTaskId(const std::string &scheduledTaskId) {
  scheduledTaskId_ = scheduledTaskId;
  setParameter(std::string("ScheduledTaskId"), scheduledTaskId);
}

std::string ModifyScheduledTaskRequest::getRecurrenceType() const {
  return recurrenceType_;
}

void ModifyScheduledTaskRequest::setRecurrenceType(const std::string &recurrenceType) {
  recurrenceType_ = recurrenceType;
  setParameter(std::string("RecurrenceType"), recurrenceType);
}


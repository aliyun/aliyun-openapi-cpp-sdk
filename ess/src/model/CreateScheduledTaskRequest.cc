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

#include <alibabacloud/ess/model/CreateScheduledTaskRequest.h>

using AlibabaCloud::Ess::Model::CreateScheduledTaskRequest;

CreateScheduledTaskRequest::CreateScheduledTaskRequest()
    : RpcServiceRequest("ess", "2014-08-28", "CreateScheduledTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateScheduledTaskRequest::~CreateScheduledTaskRequest() {}

std::string CreateScheduledTaskRequest::getScheduledAction() const {
  return scheduledAction_;
}

void CreateScheduledTaskRequest::setScheduledAction(const std::string &scheduledAction) {
  scheduledAction_ = scheduledAction;
  setParameter(std::string("ScheduledAction"), scheduledAction);
}

int CreateScheduledTaskRequest::getMaxValue() const {
  return maxValue_;
}

void CreateScheduledTaskRequest::setMaxValue(int maxValue) {
  maxValue_ = maxValue;
  setParameter(std::string("MaxValue"), std::to_string(maxValue));
}

std::string CreateScheduledTaskRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void CreateScheduledTaskRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string CreateScheduledTaskRequest::getDescription() const {
  return description_;
}

void CreateScheduledTaskRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateScheduledTaskRequest::getRecurrenceEndTime() const {
  return recurrenceEndTime_;
}

void CreateScheduledTaskRequest::setRecurrenceEndTime(const std::string &recurrenceEndTime) {
  recurrenceEndTime_ = recurrenceEndTime;
  setParameter(std::string("RecurrenceEndTime"), recurrenceEndTime);
}

std::string CreateScheduledTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateScheduledTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateScheduledTaskRequest::getRegionId() const {
  return regionId_;
}

void CreateScheduledTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateScheduledTaskRequest::getLaunchTime() const {
  return launchTime_;
}

void CreateScheduledTaskRequest::setLaunchTime(const std::string &launchTime) {
  launchTime_ = launchTime;
  setParameter(std::string("LaunchTime"), launchTime);
}

int CreateScheduledTaskRequest::getDesiredCapacity() const {
  return desiredCapacity_;
}

void CreateScheduledTaskRequest::setDesiredCapacity(int desiredCapacity) {
  desiredCapacity_ = desiredCapacity;
  setParameter(std::string("DesiredCapacity"), std::to_string(desiredCapacity));
}

std::string CreateScheduledTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateScheduledTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateScheduledTaskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateScheduledTaskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateScheduledTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateScheduledTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateScheduledTaskRequest::getRecurrenceValue() const {
  return recurrenceValue_;
}

void CreateScheduledTaskRequest::setRecurrenceValue(const std::string &recurrenceValue) {
  recurrenceValue_ = recurrenceValue;
  setParameter(std::string("RecurrenceValue"), recurrenceValue);
}

int CreateScheduledTaskRequest::getLaunchExpirationTime() const {
  return launchExpirationTime_;
}

void CreateScheduledTaskRequest::setLaunchExpirationTime(int launchExpirationTime) {
  launchExpirationTime_ = launchExpirationTime;
  setParameter(std::string("LaunchExpirationTime"), std::to_string(launchExpirationTime));
}

int CreateScheduledTaskRequest::getMinValue() const {
  return minValue_;
}

void CreateScheduledTaskRequest::setMinValue(int minValue) {
  minValue_ = minValue;
  setParameter(std::string("MinValue"), std::to_string(minValue));
}

std::string CreateScheduledTaskRequest::getScheduledTaskName() const {
  return scheduledTaskName_;
}

void CreateScheduledTaskRequest::setScheduledTaskName(const std::string &scheduledTaskName) {
  scheduledTaskName_ = scheduledTaskName;
  setParameter(std::string("ScheduledTaskName"), scheduledTaskName);
}

bool CreateScheduledTaskRequest::getTaskEnabled() const {
  return taskEnabled_;
}

void CreateScheduledTaskRequest::setTaskEnabled(bool taskEnabled) {
  taskEnabled_ = taskEnabled;
  setParameter(std::string("TaskEnabled"), taskEnabled ? "true" : "false");
}

std::string CreateScheduledTaskRequest::getRecurrenceType() const {
  return recurrenceType_;
}

void CreateScheduledTaskRequest::setRecurrenceType(const std::string &recurrenceType) {
  recurrenceType_ = recurrenceType;
  setParameter(std::string("RecurrenceType"), recurrenceType);
}


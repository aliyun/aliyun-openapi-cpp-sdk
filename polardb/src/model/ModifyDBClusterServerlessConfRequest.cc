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

#include <alibabacloud/polardb/model/ModifyDBClusterServerlessConfRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterServerlessConfRequest;

ModifyDBClusterServerlessConfRequest::ModifyDBClusterServerlessConfRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterServerlessConf") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterServerlessConfRequest::~ModifyDBClusterServerlessConfRequest() {}

std::string ModifyDBClusterServerlessConfRequest::getScaleRoNumMax() const {
  return scaleRoNumMax_;
}

void ModifyDBClusterServerlessConfRequest::setScaleRoNumMax(const std::string &scaleRoNumMax) {
  scaleRoNumMax_ = scaleRoNumMax;
  setParameter(std::string("ScaleRoNumMax"), scaleRoNumMax);
}

long ModifyDBClusterServerlessConfRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterServerlessConfRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterServerlessConfRequest::getServerlessRuleMode() const {
  return serverlessRuleMode_;
}

void ModifyDBClusterServerlessConfRequest::setServerlessRuleMode(const std::string &serverlessRuleMode) {
  serverlessRuleMode_ = serverlessRuleMode;
  setParameter(std::string("ServerlessRuleMode"), serverlessRuleMode);
}

std::string ModifyDBClusterServerlessConfRequest::getScaleApRoNumMax() const {
  return scaleApRoNumMax_;
}

void ModifyDBClusterServerlessConfRequest::setScaleApRoNumMax(const std::string &scaleApRoNumMax) {
  scaleApRoNumMax_ = scaleApRoNumMax;
  setParameter(std::string("ScaleApRoNumMax"), scaleApRoNumMax);
}

std::string ModifyDBClusterServerlessConfRequest::getScaleMax() const {
  return scaleMax_;
}

void ModifyDBClusterServerlessConfRequest::setScaleMax(const std::string &scaleMax) {
  scaleMax_ = scaleMax;
  setParameter(std::string("ScaleMax"), scaleMax);
}

std::string ModifyDBClusterServerlessConfRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyDBClusterServerlessConfRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyDBClusterServerlessConfRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterServerlessConfRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterServerlessConfRequest::getServerlessRuleCpuEnlargeThreshold() const {
  return serverlessRuleCpuEnlargeThreshold_;
}

void ModifyDBClusterServerlessConfRequest::setServerlessRuleCpuEnlargeThreshold(const std::string &serverlessRuleCpuEnlargeThreshold) {
  serverlessRuleCpuEnlargeThreshold_ = serverlessRuleCpuEnlargeThreshold;
  setParameter(std::string("ServerlessRuleCpuEnlargeThreshold"), serverlessRuleCpuEnlargeThreshold);
}

std::string ModifyDBClusterServerlessConfRequest::getSecondsUntilAutoPause() const {
  return secondsUntilAutoPause_;
}

void ModifyDBClusterServerlessConfRequest::setSecondsUntilAutoPause(const std::string &secondsUntilAutoPause) {
  secondsUntilAutoPause_ = secondsUntilAutoPause;
  setParameter(std::string("SecondsUntilAutoPause"), secondsUntilAutoPause);
}

std::string ModifyDBClusterServerlessConfRequest::getScaleApRoNumMin() const {
  return scaleApRoNumMin_;
}

void ModifyDBClusterServerlessConfRequest::setScaleApRoNumMin(const std::string &scaleApRoNumMin) {
  scaleApRoNumMin_ = scaleApRoNumMin;
  setParameter(std::string("ScaleApRoNumMin"), scaleApRoNumMin);
}

std::string ModifyDBClusterServerlessConfRequest::getTaskId() const {
  return taskId_;
}

void ModifyDBClusterServerlessConfRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string ModifyDBClusterServerlessConfRequest::getScaleMin() const {
  return scaleMin_;
}

void ModifyDBClusterServerlessConfRequest::setScaleMin(const std::string &scaleMin) {
  scaleMin_ = scaleMin;
  setParameter(std::string("ScaleMin"), scaleMin);
}

std::string ModifyDBClusterServerlessConfRequest::getCrontabJobId() const {
  return crontabJobId_;
}

void ModifyDBClusterServerlessConfRequest::setCrontabJobId(const std::string &crontabJobId) {
  crontabJobId_ = crontabJobId;
  setParameter(std::string("CrontabJobId"), crontabJobId);
}

std::string ModifyDBClusterServerlessConfRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterServerlessConfRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterServerlessConfRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterServerlessConfRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterServerlessConfRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterServerlessConfRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterServerlessConfRequest::getServerlessRuleCpuShrinkThreshold() const {
  return serverlessRuleCpuShrinkThreshold_;
}

void ModifyDBClusterServerlessConfRequest::setServerlessRuleCpuShrinkThreshold(const std::string &serverlessRuleCpuShrinkThreshold) {
  serverlessRuleCpuShrinkThreshold_ = serverlessRuleCpuShrinkThreshold;
  setParameter(std::string("ServerlessRuleCpuShrinkThreshold"), serverlessRuleCpuShrinkThreshold);
}

long ModifyDBClusterServerlessConfRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterServerlessConfRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterServerlessConfRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyDBClusterServerlessConfRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string ModifyDBClusterServerlessConfRequest::getScaleRoNumMin() const {
  return scaleRoNumMin_;
}

void ModifyDBClusterServerlessConfRequest::setScaleRoNumMin(const std::string &scaleRoNumMin) {
  scaleRoNumMin_ = scaleRoNumMin;
  setParameter(std::string("ScaleRoNumMin"), scaleRoNumMin);
}

std::string ModifyDBClusterServerlessConfRequest::getAllowShutDown() const {
  return allowShutDown_;
}

void ModifyDBClusterServerlessConfRequest::setAllowShutDown(const std::string &allowShutDown) {
  allowShutDown_ = allowShutDown;
  setParameter(std::string("AllowShutDown"), allowShutDown);
}

bool ModifyDBClusterServerlessConfRequest::getFromTimeService() const {
  return fromTimeService_;
}

void ModifyDBClusterServerlessConfRequest::setFromTimeService(bool fromTimeService) {
  fromTimeService_ = fromTimeService;
  setParameter(std::string("FromTimeService"), fromTimeService ? "true" : "false");
}


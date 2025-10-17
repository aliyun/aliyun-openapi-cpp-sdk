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

#include <alibabacloud/polardb/model/CreateCronJobPolicyServerlessRequest.h>

using AlibabaCloud::Polardb::Model::CreateCronJobPolicyServerlessRequest;

CreateCronJobPolicyServerlessRequest::CreateCronJobPolicyServerlessRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateCronJobPolicyServerless") {
  setMethod(HttpRequest::Method::Post);
}

CreateCronJobPolicyServerlessRequest::~CreateCronJobPolicyServerlessRequest() {}

std::string CreateCronJobPolicyServerlessRequest::getScaleRoNumMax() const {
  return scaleRoNumMax_;
}

void CreateCronJobPolicyServerlessRequest::setScaleRoNumMax(const std::string &scaleRoNumMax) {
  scaleRoNumMax_ = scaleRoNumMax;
  setParameter(std::string("ScaleRoNumMax"), scaleRoNumMax);
}

long CreateCronJobPolicyServerlessRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCronJobPolicyServerlessRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCronJobPolicyServerlessRequest::getCronExpression() const {
  return cronExpression_;
}

void CreateCronJobPolicyServerlessRequest::setCronExpression(const std::string &cronExpression) {
  cronExpression_ = cronExpression;
  setParameter(std::string("CronExpression"), cronExpression);
}

std::string CreateCronJobPolicyServerlessRequest::getServerlessRuleMode() const {
  return serverlessRuleMode_;
}

void CreateCronJobPolicyServerlessRequest::setServerlessRuleMode(const std::string &serverlessRuleMode) {
  serverlessRuleMode_ = serverlessRuleMode;
  setParameter(std::string("ServerlessRuleMode"), serverlessRuleMode);
}

std::string CreateCronJobPolicyServerlessRequest::getScaleApRoNumMax() const {
  return scaleApRoNumMax_;
}

void CreateCronJobPolicyServerlessRequest::setScaleApRoNumMax(const std::string &scaleApRoNumMax) {
  scaleApRoNumMax_ = scaleApRoNumMax;
  setParameter(std::string("ScaleApRoNumMax"), scaleApRoNumMax);
}

std::string CreateCronJobPolicyServerlessRequest::getStartTime() const {
  return startTime_;
}

void CreateCronJobPolicyServerlessRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateCronJobPolicyServerlessRequest::getScaleMax() const {
  return scaleMax_;
}

void CreateCronJobPolicyServerlessRequest::setScaleMax(const std::string &scaleMax) {
  scaleMax_ = scaleMax;
  setParameter(std::string("ScaleMax"), scaleMax);
}

std::string CreateCronJobPolicyServerlessRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateCronJobPolicyServerlessRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateCronJobPolicyServerlessRequest::getServerlessRuleCpuEnlargeThreshold() const {
  return serverlessRuleCpuEnlargeThreshold_;
}

void CreateCronJobPolicyServerlessRequest::setServerlessRuleCpuEnlargeThreshold(const std::string &serverlessRuleCpuEnlargeThreshold) {
  serverlessRuleCpuEnlargeThreshold_ = serverlessRuleCpuEnlargeThreshold;
  setParameter(std::string("ServerlessRuleCpuEnlargeThreshold"), serverlessRuleCpuEnlargeThreshold);
}

std::string CreateCronJobPolicyServerlessRequest::getSecondsUntilAutoPause() const {
  return secondsUntilAutoPause_;
}

void CreateCronJobPolicyServerlessRequest::setSecondsUntilAutoPause(const std::string &secondsUntilAutoPause) {
  secondsUntilAutoPause_ = secondsUntilAutoPause;
  setParameter(std::string("SecondsUntilAutoPause"), secondsUntilAutoPause);
}

std::string CreateCronJobPolicyServerlessRequest::getRegionId() const {
  return regionId_;
}

void CreateCronJobPolicyServerlessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCronJobPolicyServerlessRequest::getScaleApRoNumMin() const {
  return scaleApRoNumMin_;
}

void CreateCronJobPolicyServerlessRequest::setScaleApRoNumMin(const std::string &scaleApRoNumMin) {
  scaleApRoNumMin_ = scaleApRoNumMin;
  setParameter(std::string("ScaleApRoNumMin"), scaleApRoNumMin);
}

std::string CreateCronJobPolicyServerlessRequest::getScaleMin() const {
  return scaleMin_;
}

void CreateCronJobPolicyServerlessRequest::setScaleMin(const std::string &scaleMin) {
  scaleMin_ = scaleMin;
  setParameter(std::string("ScaleMin"), scaleMin);
}

std::string CreateCronJobPolicyServerlessRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCronJobPolicyServerlessRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCronJobPolicyServerlessRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateCronJobPolicyServerlessRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateCronJobPolicyServerlessRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCronJobPolicyServerlessRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateCronJobPolicyServerlessRequest::getEndTime() const {
  return endTime_;
}

void CreateCronJobPolicyServerlessRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string CreateCronJobPolicyServerlessRequest::getServerlessRuleCpuShrinkThreshold() const {
  return serverlessRuleCpuShrinkThreshold_;
}

void CreateCronJobPolicyServerlessRequest::setServerlessRuleCpuShrinkThreshold(const std::string &serverlessRuleCpuShrinkThreshold) {
  serverlessRuleCpuShrinkThreshold_ = serverlessRuleCpuShrinkThreshold;
  setParameter(std::string("ServerlessRuleCpuShrinkThreshold"), serverlessRuleCpuShrinkThreshold);
}

long CreateCronJobPolicyServerlessRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCronJobPolicyServerlessRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCronJobPolicyServerlessRequest::getScaleRoNumMin() const {
  return scaleRoNumMin_;
}

void CreateCronJobPolicyServerlessRequest::setScaleRoNumMin(const std::string &scaleRoNumMin) {
  scaleRoNumMin_ = scaleRoNumMin;
  setParameter(std::string("ScaleRoNumMin"), scaleRoNumMin);
}

std::string CreateCronJobPolicyServerlessRequest::getAllowShutDown() const {
  return allowShutDown_;
}

void CreateCronJobPolicyServerlessRequest::setAllowShutDown(const std::string &allowShutDown) {
  allowShutDown_ = allowShutDown;
  setParameter(std::string("AllowShutDown"), allowShutDown);
}


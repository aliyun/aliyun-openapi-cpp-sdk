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

#include <alibabacloud/polardb/model/ModifyCronJobPolicyServerlessRequest.h>

using AlibabaCloud::Polardb::Model::ModifyCronJobPolicyServerlessRequest;

ModifyCronJobPolicyServerlessRequest::ModifyCronJobPolicyServerlessRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyCronJobPolicyServerless") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCronJobPolicyServerlessRequest::~ModifyCronJobPolicyServerlessRequest() {}

std::string ModifyCronJobPolicyServerlessRequest::getScaleRoNumMax() const {
  return scaleRoNumMax_;
}

void ModifyCronJobPolicyServerlessRequest::setScaleRoNumMax(const std::string &scaleRoNumMax) {
  scaleRoNumMax_ = scaleRoNumMax;
  setParameter(std::string("ScaleRoNumMax"), scaleRoNumMax);
}

long ModifyCronJobPolicyServerlessRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCronJobPolicyServerlessRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCronJobPolicyServerlessRequest::getCronExpression() const {
  return cronExpression_;
}

void ModifyCronJobPolicyServerlessRequest::setCronExpression(const std::string &cronExpression) {
  cronExpression_ = cronExpression;
  setParameter(std::string("CronExpression"), cronExpression);
}

std::string ModifyCronJobPolicyServerlessRequest::getServerlessRuleMode() const {
  return serverlessRuleMode_;
}

void ModifyCronJobPolicyServerlessRequest::setServerlessRuleMode(const std::string &serverlessRuleMode) {
  serverlessRuleMode_ = serverlessRuleMode;
  setParameter(std::string("ServerlessRuleMode"), serverlessRuleMode);
}

std::string ModifyCronJobPolicyServerlessRequest::getScaleApRoNumMax() const {
  return scaleApRoNumMax_;
}

void ModifyCronJobPolicyServerlessRequest::setScaleApRoNumMax(const std::string &scaleApRoNumMax) {
  scaleApRoNumMax_ = scaleApRoNumMax;
  setParameter(std::string("ScaleApRoNumMax"), scaleApRoNumMax);
}

std::string ModifyCronJobPolicyServerlessRequest::getStartTime() const {
  return startTime_;
}

void ModifyCronJobPolicyServerlessRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ModifyCronJobPolicyServerlessRequest::getScaleMax() const {
  return scaleMax_;
}

void ModifyCronJobPolicyServerlessRequest::setScaleMax(const std::string &scaleMax) {
  scaleMax_ = scaleMax;
  setParameter(std::string("ScaleMax"), scaleMax);
}

std::string ModifyCronJobPolicyServerlessRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyCronJobPolicyServerlessRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyCronJobPolicyServerlessRequest::getServerlessRuleCpuEnlargeThreshold() const {
  return serverlessRuleCpuEnlargeThreshold_;
}

void ModifyCronJobPolicyServerlessRequest::setServerlessRuleCpuEnlargeThreshold(const std::string &serverlessRuleCpuEnlargeThreshold) {
  serverlessRuleCpuEnlargeThreshold_ = serverlessRuleCpuEnlargeThreshold;
  setParameter(std::string("ServerlessRuleCpuEnlargeThreshold"), serverlessRuleCpuEnlargeThreshold);
}

std::string ModifyCronJobPolicyServerlessRequest::getJobId() const {
  return jobId_;
}

void ModifyCronJobPolicyServerlessRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string ModifyCronJobPolicyServerlessRequest::getSecondsUntilAutoPause() const {
  return secondsUntilAutoPause_;
}

void ModifyCronJobPolicyServerlessRequest::setSecondsUntilAutoPause(const std::string &secondsUntilAutoPause) {
  secondsUntilAutoPause_ = secondsUntilAutoPause;
  setParameter(std::string("SecondsUntilAutoPause"), secondsUntilAutoPause);
}

std::string ModifyCronJobPolicyServerlessRequest::getRegionId() const {
  return regionId_;
}

void ModifyCronJobPolicyServerlessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCronJobPolicyServerlessRequest::getScaleApRoNumMin() const {
  return scaleApRoNumMin_;
}

void ModifyCronJobPolicyServerlessRequest::setScaleApRoNumMin(const std::string &scaleApRoNumMin) {
  scaleApRoNumMin_ = scaleApRoNumMin;
  setParameter(std::string("ScaleApRoNumMin"), scaleApRoNumMin);
}

std::string ModifyCronJobPolicyServerlessRequest::getScaleMin() const {
  return scaleMin_;
}

void ModifyCronJobPolicyServerlessRequest::setScaleMin(const std::string &scaleMin) {
  scaleMin_ = scaleMin;
  setParameter(std::string("ScaleMin"), scaleMin);
}

std::string ModifyCronJobPolicyServerlessRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCronJobPolicyServerlessRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCronJobPolicyServerlessRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyCronJobPolicyServerlessRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyCronJobPolicyServerlessRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCronJobPolicyServerlessRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyCronJobPolicyServerlessRequest::getEndTime() const {
  return endTime_;
}

void ModifyCronJobPolicyServerlessRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ModifyCronJobPolicyServerlessRequest::getServerlessRuleCpuShrinkThreshold() const {
  return serverlessRuleCpuShrinkThreshold_;
}

void ModifyCronJobPolicyServerlessRequest::setServerlessRuleCpuShrinkThreshold(const std::string &serverlessRuleCpuShrinkThreshold) {
  serverlessRuleCpuShrinkThreshold_ = serverlessRuleCpuShrinkThreshold;
  setParameter(std::string("ServerlessRuleCpuShrinkThreshold"), serverlessRuleCpuShrinkThreshold);
}

long ModifyCronJobPolicyServerlessRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCronJobPolicyServerlessRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCronJobPolicyServerlessRequest::getScaleRoNumMin() const {
  return scaleRoNumMin_;
}

void ModifyCronJobPolicyServerlessRequest::setScaleRoNumMin(const std::string &scaleRoNumMin) {
  scaleRoNumMin_ = scaleRoNumMin;
  setParameter(std::string("ScaleRoNumMin"), scaleRoNumMin);
}

std::string ModifyCronJobPolicyServerlessRequest::getAllowShutDown() const {
  return allowShutDown_;
}

void ModifyCronJobPolicyServerlessRequest::setAllowShutDown(const std::string &allowShutDown) {
  allowShutDown_ = allowShutDown;
  setParameter(std::string("AllowShutDown"), allowShutDown);
}


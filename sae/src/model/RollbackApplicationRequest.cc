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

#include <alibabacloud/sae/model/RollbackApplicationRequest.h>

using AlibabaCloud::Sae::Model::RollbackApplicationRequest;

RollbackApplicationRequest::RollbackApplicationRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/rollbackApplication"};
  setMethod(HttpRequest::Method::Put);
}

RollbackApplicationRequest::~RollbackApplicationRequest() {}

int RollbackApplicationRequest::getMinReadyInstances() const {
  return minReadyInstances_;
}

void RollbackApplicationRequest::setMinReadyInstances(int minReadyInstances) {
  minReadyInstances_ = minReadyInstances;
  setParameter(std::string("MinReadyInstances"), std::to_string(minReadyInstances));
}

std::string RollbackApplicationRequest::getVersionId() const {
  return versionId_;
}

void RollbackApplicationRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string RollbackApplicationRequest::getAppId() const {
  return appId_;
}

void RollbackApplicationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int RollbackApplicationRequest::getBatchWaitTime() const {
  return batchWaitTime_;
}

void RollbackApplicationRequest::setBatchWaitTime(int batchWaitTime) {
  batchWaitTime_ = batchWaitTime;
  setParameter(std::string("BatchWaitTime"), std::to_string(batchWaitTime));
}

int RollbackApplicationRequest::getMinReadyInstanceRatio() const {
  return minReadyInstanceRatio_;
}

void RollbackApplicationRequest::setMinReadyInstanceRatio(int minReadyInstanceRatio) {
  minReadyInstanceRatio_ = minReadyInstanceRatio;
  setParameter(std::string("MinReadyInstanceRatio"), std::to_string(minReadyInstanceRatio));
}

std::string RollbackApplicationRequest::getAutoEnableApplicationScalingRule() const {
  return autoEnableApplicationScalingRule_;
}

void RollbackApplicationRequest::setAutoEnableApplicationScalingRule(const std::string &autoEnableApplicationScalingRule) {
  autoEnableApplicationScalingRule_ = autoEnableApplicationScalingRule;
  setParameter(std::string("AutoEnableApplicationScalingRule"), autoEnableApplicationScalingRule);
}

std::string RollbackApplicationRequest::getUpdateStrategy() const {
  return updateStrategy_;
}

void RollbackApplicationRequest::setUpdateStrategy(const std::string &updateStrategy) {
  updateStrategy_ = updateStrategy;
  setParameter(std::string("UpdateStrategy"), updateStrategy);
}


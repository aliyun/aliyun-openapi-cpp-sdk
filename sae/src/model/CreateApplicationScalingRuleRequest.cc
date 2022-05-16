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

#include <alibabacloud/sae/model/CreateApplicationScalingRuleRequest.h>

using AlibabaCloud::Sae::Model::CreateApplicationScalingRuleRequest;

CreateApplicationScalingRuleRequest::CreateApplicationScalingRuleRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/scale/applicationScalingRule"};
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationScalingRuleRequest::~CreateApplicationScalingRuleRequest() {}

std::string CreateApplicationScalingRuleRequest::getScalingRuleName() const {
  return scalingRuleName_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleName(const std::string &scalingRuleName) {
  scalingRuleName_ = scalingRuleName;
  setParameter(std::string("ScalingRuleName"), scalingRuleName);
}

int CreateApplicationScalingRuleRequest::getMinReadyInstances() const {
  return minReadyInstances_;
}

void CreateApplicationScalingRuleRequest::setMinReadyInstances(int minReadyInstances) {
  minReadyInstances_ = minReadyInstances;
  setParameter(std::string("MinReadyInstances"), std::to_string(minReadyInstances));
}

bool CreateApplicationScalingRuleRequest::getScalingRuleEnable() const {
  return scalingRuleEnable_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleEnable(bool scalingRuleEnable) {
  scalingRuleEnable_ = scalingRuleEnable;
  setParameter(std::string("ScalingRuleEnable"), scalingRuleEnable ? "true" : "false");
}

std::string CreateApplicationScalingRuleRequest::getScalingRuleTimer() const {
  return scalingRuleTimer_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleTimer(const std::string &scalingRuleTimer) {
  scalingRuleTimer_ = scalingRuleTimer;
  setParameter(std::string("ScalingRuleTimer"), scalingRuleTimer);
}

std::string CreateApplicationScalingRuleRequest::getScalingRuleMetric() const {
  return scalingRuleMetric_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleMetric(const std::string &scalingRuleMetric) {
  scalingRuleMetric_ = scalingRuleMetric;
  setParameter(std::string("ScalingRuleMetric"), scalingRuleMetric);
}

std::string CreateApplicationScalingRuleRequest::getAppId() const {
  return appId_;
}

void CreateApplicationScalingRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int CreateApplicationScalingRuleRequest::getMinReadyInstanceRatio() const {
  return minReadyInstanceRatio_;
}

void CreateApplicationScalingRuleRequest::setMinReadyInstanceRatio(int minReadyInstanceRatio) {
  minReadyInstanceRatio_ = minReadyInstanceRatio;
  setParameter(std::string("MinReadyInstanceRatio"), std::to_string(minReadyInstanceRatio));
}

std::string CreateApplicationScalingRuleRequest::getScalingRuleType() const {
  return scalingRuleType_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleType(const std::string &scalingRuleType) {
  scalingRuleType_ = scalingRuleType;
  setParameter(std::string("ScalingRuleType"), scalingRuleType);
}


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

#include <alibabacloud/sae/model/UpdateApplicationScalingRuleRequest.h>

using AlibabaCloud::Sae::Model::UpdateApplicationScalingRuleRequest;

UpdateApplicationScalingRuleRequest::UpdateApplicationScalingRuleRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/scale/applicationScalingRule"};
  setMethod(HttpRequest::Method::Put);
}

UpdateApplicationScalingRuleRequest::~UpdateApplicationScalingRuleRequest() {}

std::string UpdateApplicationScalingRuleRequest::getScalingRuleName() const {
  return scalingRuleName_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleName(const std::string &scalingRuleName) {
  scalingRuleName_ = scalingRuleName;
  setParameter(std::string("ScalingRuleName"), scalingRuleName);
}

int UpdateApplicationScalingRuleRequest::getMinReadyInstances() const {
  return minReadyInstances_;
}

void UpdateApplicationScalingRuleRequest::setMinReadyInstances(int minReadyInstances) {
  minReadyInstances_ = minReadyInstances;
  setParameter(std::string("MinReadyInstances"), std::to_string(minReadyInstances));
}

std::string UpdateApplicationScalingRuleRequest::getScalingRuleTimer() const {
  return scalingRuleTimer_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleTimer(const std::string &scalingRuleTimer) {
  scalingRuleTimer_ = scalingRuleTimer;
  setParameter(std::string("ScalingRuleTimer"), scalingRuleTimer);
}

std::string UpdateApplicationScalingRuleRequest::getScalingRuleMetric() const {
  return scalingRuleMetric_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleMetric(const std::string &scalingRuleMetric) {
  scalingRuleMetric_ = scalingRuleMetric;
  setParameter(std::string("ScalingRuleMetric"), scalingRuleMetric);
}

std::string UpdateApplicationScalingRuleRequest::getAppId() const {
  return appId_;
}

void UpdateApplicationScalingRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int UpdateApplicationScalingRuleRequest::getMinReadyInstanceRatio() const {
  return minReadyInstanceRatio_;
}

void UpdateApplicationScalingRuleRequest::setMinReadyInstanceRatio(int minReadyInstanceRatio) {
  minReadyInstanceRatio_ = minReadyInstanceRatio;
  setParameter(std::string("MinReadyInstanceRatio"), std::to_string(minReadyInstanceRatio));
}


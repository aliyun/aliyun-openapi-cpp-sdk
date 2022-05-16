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

#include <alibabacloud/sae/model/RescaleApplicationRequest.h>

using AlibabaCloud::Sae::Model::RescaleApplicationRequest;

RescaleApplicationRequest::RescaleApplicationRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/rescaleApplication"};
  setMethod(HttpRequest::Method::Put);
}

RescaleApplicationRequest::~RescaleApplicationRequest() {}

int RescaleApplicationRequest::getMinReadyInstances() const {
  return minReadyInstances_;
}

void RescaleApplicationRequest::setMinReadyInstances(int minReadyInstances) {
  minReadyInstances_ = minReadyInstances;
  setParameter(std::string("MinReadyInstances"), std::to_string(minReadyInstances));
}

int RescaleApplicationRequest::getReplicas() const {
  return replicas_;
}

void RescaleApplicationRequest::setReplicas(int replicas) {
  replicas_ = replicas;
  setParameter(std::string("Replicas"), std::to_string(replicas));
}

std::string RescaleApplicationRequest::getAppId() const {
  return appId_;
}

void RescaleApplicationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int RescaleApplicationRequest::getMinReadyInstanceRatio() const {
  return minReadyInstanceRatio_;
}

void RescaleApplicationRequest::setMinReadyInstanceRatio(int minReadyInstanceRatio) {
  minReadyInstanceRatio_ = minReadyInstanceRatio;
  setParameter(std::string("MinReadyInstanceRatio"), std::to_string(minReadyInstanceRatio));
}

bool RescaleApplicationRequest::getAutoEnableApplicationScalingRule() const {
  return autoEnableApplicationScalingRule_;
}

void RescaleApplicationRequest::setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule) {
  autoEnableApplicationScalingRule_ = autoEnableApplicationScalingRule;
  setParameter(std::string("AutoEnableApplicationScalingRule"), autoEnableApplicationScalingRule ? "true" : "false");
}


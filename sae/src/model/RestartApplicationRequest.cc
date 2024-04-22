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

#include <alibabacloud/sae/model/RestartApplicationRequest.h>

using AlibabaCloud::Sae::Model::RestartApplicationRequest;

RestartApplicationRequest::RestartApplicationRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/restartApplication"};
  setMethod(HttpRequest::Method::Put);
}

RestartApplicationRequest::~RestartApplicationRequest() {}

int RestartApplicationRequest::getMinReadyInstances() const {
  return minReadyInstances_;
}

void RestartApplicationRequest::setMinReadyInstances(int minReadyInstances) {
  minReadyInstances_ = minReadyInstances;
  setParameter(std::string("MinReadyInstances"), std::to_string(minReadyInstances));
}

std::string RestartApplicationRequest::getAppId() const {
  return appId_;
}

void RestartApplicationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int RestartApplicationRequest::getMinReadyInstanceRatio() const {
  return minReadyInstanceRatio_;
}

void RestartApplicationRequest::setMinReadyInstanceRatio(int minReadyInstanceRatio) {
  minReadyInstanceRatio_ = minReadyInstanceRatio;
  setParameter(std::string("MinReadyInstanceRatio"), std::to_string(minReadyInstanceRatio));
}

bool RestartApplicationRequest::getAutoEnableApplicationScalingRule() const {
  return autoEnableApplicationScalingRule_;
}

void RestartApplicationRequest::setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule) {
  autoEnableApplicationScalingRule_ = autoEnableApplicationScalingRule;
  setParameter(std::string("AutoEnableApplicationScalingRule"), autoEnableApplicationScalingRule ? "true" : "false");
}


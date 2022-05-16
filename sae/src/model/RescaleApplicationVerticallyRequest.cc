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

#include <alibabacloud/sae/model/RescaleApplicationVerticallyRequest.h>

using AlibabaCloud::Sae::Model::RescaleApplicationVerticallyRequest;

RescaleApplicationVerticallyRequest::RescaleApplicationVerticallyRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/rescaleApplicationVertically"};
  setMethod(HttpRequest::Method::Post);
}

RescaleApplicationVerticallyRequest::~RescaleApplicationVerticallyRequest() {}

std::string RescaleApplicationVerticallyRequest::getMemory() const {
  return memory_;
}

void RescaleApplicationVerticallyRequest::setMemory(const std::string &memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), memory);
}

std::string RescaleApplicationVerticallyRequest::getAppId() const {
  return appId_;
}

void RescaleApplicationVerticallyRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string RescaleApplicationVerticallyRequest::getCpu() const {
  return cpu_;
}

void RescaleApplicationVerticallyRequest::setCpu(const std::string &cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), cpu);
}


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

#include <alibabacloud/ecd/model/SetDesktopGroupTimerRequest.h>

using AlibabaCloud::Ecd::Model::SetDesktopGroupTimerRequest;

SetDesktopGroupTimerRequest::SetDesktopGroupTimerRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "SetDesktopGroupTimer") {
  setMethod(HttpRequest::Method::Post);
}

SetDesktopGroupTimerRequest::~SetDesktopGroupTimerRequest() {}

std::string SetDesktopGroupTimerRequest::getCronExpression() const {
  return cronExpression_;
}

void SetDesktopGroupTimerRequest::setCronExpression(const std::string &cronExpression) {
  cronExpression_ = cronExpression;
  setParameter(std::string("CronExpression"), cronExpression);
}

int SetDesktopGroupTimerRequest::getTimerType() const {
  return timerType_;
}

void SetDesktopGroupTimerRequest::setTimerType(int timerType) {
  timerType_ = timerType;
  setParameter(std::string("TimerType"), std::to_string(timerType));
}

int SetDesktopGroupTimerRequest::getResetType() const {
  return resetType_;
}

void SetDesktopGroupTimerRequest::setResetType(int resetType) {
  resetType_ = resetType;
  setParameter(std::string("ResetType"), std::to_string(resetType));
}

std::string SetDesktopGroupTimerRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void SetDesktopGroupTimerRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string SetDesktopGroupTimerRequest::getRegionId() const {
  return regionId_;
}

void SetDesktopGroupTimerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool SetDesktopGroupTimerRequest::getForce() const {
  return force_;
}

void SetDesktopGroupTimerRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}


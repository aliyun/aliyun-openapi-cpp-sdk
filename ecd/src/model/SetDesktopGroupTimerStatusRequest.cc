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

#include <alibabacloud/ecd/model/SetDesktopGroupTimerStatusRequest.h>

using AlibabaCloud::Ecd::Model::SetDesktopGroupTimerStatusRequest;

SetDesktopGroupTimerStatusRequest::SetDesktopGroupTimerStatusRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "SetDesktopGroupTimerStatus") {
  setMethod(HttpRequest::Method::Post);
}

SetDesktopGroupTimerStatusRequest::~SetDesktopGroupTimerStatusRequest() {}

int SetDesktopGroupTimerStatusRequest::getTimerType() const {
  return timerType_;
}

void SetDesktopGroupTimerStatusRequest::setTimerType(int timerType) {
  timerType_ = timerType;
  setParameter(std::string("TimerType"), std::to_string(timerType));
}

std::string SetDesktopGroupTimerStatusRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void SetDesktopGroupTimerStatusRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string SetDesktopGroupTimerStatusRequest::getRegionId() const {
  return regionId_;
}

void SetDesktopGroupTimerStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int SetDesktopGroupTimerStatusRequest::getStatus() const {
  return status_;
}

void SetDesktopGroupTimerStatusRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


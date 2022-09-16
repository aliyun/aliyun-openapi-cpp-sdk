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

#include <alibabacloud/ecd/model/StopDesktopsRequest.h>

using AlibabaCloud::Ecd::Model::StopDesktopsRequest;

StopDesktopsRequest::StopDesktopsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "StopDesktops") {
  setMethod(HttpRequest::Method::Post);
}

StopDesktopsRequest::~StopDesktopsRequest() {}

std::string StopDesktopsRequest::getStoppedMode() const {
  return stoppedMode_;
}

void StopDesktopsRequest::setStoppedMode(const std::string &stoppedMode) {
  stoppedMode_ = stoppedMode;
  setParameter(std::string("StoppedMode"), stoppedMode);
}

std::string StopDesktopsRequest::getRegionId() const {
  return regionId_;
}

void StopDesktopsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> StopDesktopsRequest::getDesktopId() const {
  return desktopId_;
}

void StopDesktopsRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}


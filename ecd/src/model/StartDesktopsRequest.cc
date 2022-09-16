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

#include <alibabacloud/ecd/model/StartDesktopsRequest.h>

using AlibabaCloud::Ecd::Model::StartDesktopsRequest;

StartDesktopsRequest::StartDesktopsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "StartDesktops") {
  setMethod(HttpRequest::Method::Post);
}

StartDesktopsRequest::~StartDesktopsRequest() {}

std::string StartDesktopsRequest::getRegionId() const {
  return regionId_;
}

void StartDesktopsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> StartDesktopsRequest::getDesktopId() const {
  return desktopId_;
}

void StartDesktopsRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}


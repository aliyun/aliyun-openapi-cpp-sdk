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

#include <alibabacloud/ecd/model/ModifyDesktopNameRequest.h>

using AlibabaCloud::Ecd::Model::ModifyDesktopNameRequest;

ModifyDesktopNameRequest::ModifyDesktopNameRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyDesktopName") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDesktopNameRequest::~ModifyDesktopNameRequest() {}

std::string ModifyDesktopNameRequest::getNewDesktopName() const {
  return newDesktopName_;
}

void ModifyDesktopNameRequest::setNewDesktopName(const std::string &newDesktopName) {
  newDesktopName_ = newDesktopName;
  setParameter(std::string("NewDesktopName"), newDesktopName);
}

std::string ModifyDesktopNameRequest::getRegionId() const {
  return regionId_;
}

void ModifyDesktopNameRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDesktopNameRequest::getDesktopId() const {
  return desktopId_;
}

void ModifyDesktopNameRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}


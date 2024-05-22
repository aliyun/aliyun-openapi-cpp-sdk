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

#include <alibabacloud/polardbx/model/ModifyActiveOperationMaintainConfRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyActiveOperationMaintainConfRequest;

ModifyActiveOperationMaintainConfRequest::ModifyActiveOperationMaintainConfRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "ModifyActiveOperationMaintainConf") {
  setMethod(HttpRequest::Method::Get);
}

ModifyActiveOperationMaintainConfRequest::~ModifyActiveOperationMaintainConfRequest() {}

std::string ModifyActiveOperationMaintainConfRequest::getCycleTime() const {
  return cycleTime_;
}

void ModifyActiveOperationMaintainConfRequest::setCycleTime(const std::string &cycleTime) {
  cycleTime_ = cycleTime;
  setParameter(std::string("CycleTime"), cycleTime);
}

std::string ModifyActiveOperationMaintainConfRequest::getRegionId() const {
  return regionId_;
}

void ModifyActiveOperationMaintainConfRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyActiveOperationMaintainConfRequest::getMaintainStartTime() const {
  return maintainStartTime_;
}

void ModifyActiveOperationMaintainConfRequest::setMaintainStartTime(const std::string &maintainStartTime) {
  maintainStartTime_ = maintainStartTime;
  setParameter(std::string("MaintainStartTime"), maintainStartTime);
}

std::string ModifyActiveOperationMaintainConfRequest::getCycleType() const {
  return cycleType_;
}

void ModifyActiveOperationMaintainConfRequest::setCycleType(const std::string &cycleType) {
  cycleType_ = cycleType;
  setParameter(std::string("CycleType"), cycleType);
}

std::string ModifyActiveOperationMaintainConfRequest::getMaintainEndTime() const {
  return maintainEndTime_;
}

void ModifyActiveOperationMaintainConfRequest::setMaintainEndTime(const std::string &maintainEndTime) {
  maintainEndTime_ = maintainEndTime;
  setParameter(std::string("MaintainEndTime"), maintainEndTime);
}

int ModifyActiveOperationMaintainConfRequest::getStatus() const {
  return status_;
}

void ModifyActiveOperationMaintainConfRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


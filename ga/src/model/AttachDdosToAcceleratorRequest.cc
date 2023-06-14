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

#include <alibabacloud/ga/model/AttachDdosToAcceleratorRequest.h>

using AlibabaCloud::Ga::Model::AttachDdosToAcceleratorRequest;

AttachDdosToAcceleratorRequest::AttachDdosToAcceleratorRequest()
    : RpcServiceRequest("ga", "2019-11-20", "AttachDdosToAccelerator") {
  setMethod(HttpRequest::Method::Post);
}

AttachDdosToAcceleratorRequest::~AttachDdosToAcceleratorRequest() {}

std::string AttachDdosToAcceleratorRequest::getDdosId() const {
  return ddosId_;
}

void AttachDdosToAcceleratorRequest::setDdosId(const std::string &ddosId) {
  ddosId_ = ddosId;
  setParameter(std::string("DdosId"), ddosId);
}

std::string AttachDdosToAcceleratorRequest::getRegionId() const {
  return regionId_;
}

void AttachDdosToAcceleratorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachDdosToAcceleratorRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void AttachDdosToAcceleratorRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string AttachDdosToAcceleratorRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void AttachDdosToAcceleratorRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


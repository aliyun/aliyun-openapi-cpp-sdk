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

#include <alibabacloud/ga/model/UpdateAcceleratorCrossBorderModeRequest.h>

using AlibabaCloud::Ga::Model::UpdateAcceleratorCrossBorderModeRequest;

UpdateAcceleratorCrossBorderModeRequest::UpdateAcceleratorCrossBorderModeRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateAcceleratorCrossBorderMode") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAcceleratorCrossBorderModeRequest::~UpdateAcceleratorCrossBorderModeRequest() {}

std::string UpdateAcceleratorCrossBorderModeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAcceleratorCrossBorderModeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateAcceleratorCrossBorderModeRequest::getCrossBorderMode() const {
  return crossBorderMode_;
}

void UpdateAcceleratorCrossBorderModeRequest::setCrossBorderMode(const std::string &crossBorderMode) {
  crossBorderMode_ = crossBorderMode;
  setParameter(std::string("CrossBorderMode"), crossBorderMode);
}

std::string UpdateAcceleratorCrossBorderModeRequest::getRegionId() const {
  return regionId_;
}

void UpdateAcceleratorCrossBorderModeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateAcceleratorCrossBorderModeRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void UpdateAcceleratorCrossBorderModeRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


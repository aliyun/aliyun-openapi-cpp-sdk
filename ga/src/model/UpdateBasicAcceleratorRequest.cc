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

#include <alibabacloud/ga/model/UpdateBasicAcceleratorRequest.h>

using AlibabaCloud::Ga::Model::UpdateBasicAcceleratorRequest;

UpdateBasicAcceleratorRequest::UpdateBasicAcceleratorRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateBasicAccelerator") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBasicAcceleratorRequest::~UpdateBasicAcceleratorRequest() {}

std::string UpdateBasicAcceleratorRequest::getClientToken() const {
  return clientToken_;
}

void UpdateBasicAcceleratorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateBasicAcceleratorRequest::getDescription() const {
  return description_;
}

void UpdateBasicAcceleratorRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateBasicAcceleratorRequest::getRegionId() const {
  return regionId_;
}

void UpdateBasicAcceleratorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateBasicAcceleratorRequest::getName() const {
  return name_;
}

void UpdateBasicAcceleratorRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateBasicAcceleratorRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void UpdateBasicAcceleratorRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


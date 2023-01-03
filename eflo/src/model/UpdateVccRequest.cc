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

#include <alibabacloud/eflo/model/UpdateVccRequest.h>

using AlibabaCloud::Eflo::Model::UpdateVccRequest;

UpdateVccRequest::UpdateVccRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "UpdateVcc") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVccRequest::~UpdateVccRequest() {}

int UpdateVccRequest::getBandwidth() const {
  return bandwidth_;
}

void UpdateVccRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setBodyParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string UpdateVccRequest::getOrderId() const {
  return orderId_;
}

void UpdateVccRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setBodyParameter(std::string("OrderId"), orderId);
}

std::string UpdateVccRequest::getVccName() const {
  return vccName_;
}

void UpdateVccRequest::setVccName(const std::string &vccName) {
  vccName_ = vccName;
  setBodyParameter(std::string("VccName"), vccName);
}

std::string UpdateVccRequest::getRegionId() const {
  return regionId_;
}

void UpdateVccRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UpdateVccRequest::getVccId() const {
  return vccId_;
}

void UpdateVccRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}


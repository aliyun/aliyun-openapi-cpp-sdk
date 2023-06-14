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

#include <alibabacloud/ga/model/UpdateAcceleratorAutoRenewAttributeRequest.h>

using AlibabaCloud::Ga::Model::UpdateAcceleratorAutoRenewAttributeRequest;

UpdateAcceleratorAutoRenewAttributeRequest::UpdateAcceleratorAutoRenewAttributeRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateAcceleratorAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAcceleratorAutoRenewAttributeRequest::~UpdateAcceleratorAutoRenewAttributeRequest() {}

std::string UpdateAcceleratorAutoRenewAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAcceleratorAutoRenewAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int UpdateAcceleratorAutoRenewAttributeRequest::getAutoRenewDuration() const {
  return autoRenewDuration_;
}

void UpdateAcceleratorAutoRenewAttributeRequest::setAutoRenewDuration(int autoRenewDuration) {
  autoRenewDuration_ = autoRenewDuration;
  setParameter(std::string("AutoRenewDuration"), std::to_string(autoRenewDuration));
}

bool UpdateAcceleratorAutoRenewAttributeRequest::getAutoRenew() const {
  return autoRenew_;
}

void UpdateAcceleratorAutoRenewAttributeRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string UpdateAcceleratorAutoRenewAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateAcceleratorAutoRenewAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateAcceleratorAutoRenewAttributeRequest::getRenewalStatus() const {
  return renewalStatus_;
}

void UpdateAcceleratorAutoRenewAttributeRequest::setRenewalStatus(const std::string &renewalStatus) {
  renewalStatus_ = renewalStatus;
  setParameter(std::string("RenewalStatus"), renewalStatus);
}

std::string UpdateAcceleratorAutoRenewAttributeRequest::getName() const {
  return name_;
}

void UpdateAcceleratorAutoRenewAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateAcceleratorAutoRenewAttributeRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void UpdateAcceleratorAutoRenewAttributeRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}


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

#include <alibabacloud/ga/model/UpdateBandwidthPackagaAutoRenewAttributeRequest.h>

using AlibabaCloud::Ga::Model::UpdateBandwidthPackagaAutoRenewAttributeRequest;

UpdateBandwidthPackagaAutoRenewAttributeRequest::UpdateBandwidthPackagaAutoRenewAttributeRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateBandwidthPackagaAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBandwidthPackagaAutoRenewAttributeRequest::~UpdateBandwidthPackagaAutoRenewAttributeRequest() {}

std::string UpdateBandwidthPackagaAutoRenewAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateBandwidthPackagaAutoRenewAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int UpdateBandwidthPackagaAutoRenewAttributeRequest::getAutoRenewDuration() const {
  return autoRenewDuration_;
}

void UpdateBandwidthPackagaAutoRenewAttributeRequest::setAutoRenewDuration(int autoRenewDuration) {
  autoRenewDuration_ = autoRenewDuration;
  setParameter(std::string("AutoRenewDuration"), std::to_string(autoRenewDuration));
}

std::string UpdateBandwidthPackagaAutoRenewAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateBandwidthPackagaAutoRenewAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool UpdateBandwidthPackagaAutoRenewAttributeRequest::getAutoRenew() const {
  return autoRenew_;
}

void UpdateBandwidthPackagaAutoRenewAttributeRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string UpdateBandwidthPackagaAutoRenewAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateBandwidthPackagaAutoRenewAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateBandwidthPackagaAutoRenewAttributeRequest::getRenewalStatus() const {
  return renewalStatus_;
}

void UpdateBandwidthPackagaAutoRenewAttributeRequest::setRenewalStatus(const std::string &renewalStatus) {
  renewalStatus_ = renewalStatus;
  setParameter(std::string("RenewalStatus"), renewalStatus);
}

std::string UpdateBandwidthPackagaAutoRenewAttributeRequest::getName() const {
  return name_;
}

void UpdateBandwidthPackagaAutoRenewAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


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

#include <alibabacloud/ens/model/ModifyInstanceChargeTypeRequest.h>

using AlibabaCloud::Ens::Model::ModifyInstanceChargeTypeRequest;

ModifyInstanceChargeTypeRequest::ModifyInstanceChargeTypeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyInstanceChargeType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceChargeTypeRequest::~ModifyInstanceChargeTypeRequest() {}

std::string ModifyInstanceChargeTypeRequest::getPeriod() const {
  return period_;
}

void ModifyInstanceChargeTypeRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

bool ModifyInstanceChargeTypeRequest::getIncludeDataDisks() const {
  return includeDataDisks_;
}

void ModifyInstanceChargeTypeRequest::setIncludeDataDisks(bool includeDataDisks) {
  includeDataDisks_ = includeDataDisks;
  setParameter(std::string("IncludeDataDisks"), includeDataDisks ? "true" : "false");
}

std::string ModifyInstanceChargeTypeRequest::getPeriodUnit() const {
  return periodUnit_;
}

void ModifyInstanceChargeTypeRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool ModifyInstanceChargeTypeRequest::getAutoRenew() const {
  return autoRenew_;
}

void ModifyInstanceChargeTypeRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::vector<ModifyInstanceChargeTypeRequest::std::string> ModifyInstanceChargeTypeRequest::getInstanceIds() const {
  return instanceIds_;
}

void ModifyInstanceChargeTypeRequest::setInstanceIds(const std::vector<ModifyInstanceChargeTypeRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

std::string ModifyInstanceChargeTypeRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void ModifyInstanceChargeTypeRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

bool ModifyInstanceChargeTypeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyInstanceChargeTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}


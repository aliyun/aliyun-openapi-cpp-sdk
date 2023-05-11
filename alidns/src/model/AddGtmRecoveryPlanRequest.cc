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

#include <alibabacloud/alidns/model/AddGtmRecoveryPlanRequest.h>

using AlibabaCloud::Alidns::Model::AddGtmRecoveryPlanRequest;

AddGtmRecoveryPlanRequest::AddGtmRecoveryPlanRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "AddGtmRecoveryPlan") {
  setMethod(HttpRequest::Method::Post);
}

AddGtmRecoveryPlanRequest::~AddGtmRecoveryPlanRequest() {}

std::string AddGtmRecoveryPlanRequest::getFaultAddrPool() const {
  return faultAddrPool_;
}

void AddGtmRecoveryPlanRequest::setFaultAddrPool(const std::string &faultAddrPool) {
  faultAddrPool_ = faultAddrPool;
  setParameter(std::string("FaultAddrPool"), faultAddrPool);
}

std::string AddGtmRecoveryPlanRequest::getRemark() const {
  return remark_;
}

void AddGtmRecoveryPlanRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddGtmRecoveryPlanRequest::getUserClientIp() const {
  return userClientIp_;
}

void AddGtmRecoveryPlanRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string AddGtmRecoveryPlanRequest::getName() const {
  return name_;
}

void AddGtmRecoveryPlanRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddGtmRecoveryPlanRequest::getLang() const {
  return lang_;
}

void AddGtmRecoveryPlanRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


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

#include <alibabacloud/arms/model/ApplyScenarioRequest.h>

using AlibabaCloud::ARMS::Model::ApplyScenarioRequest;

ApplyScenarioRequest::ApplyScenarioRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ApplyScenario") {
  setMethod(HttpRequest::Method::Post);
}

ApplyScenarioRequest::~ApplyScenarioRequest() {}

bool ApplyScenarioRequest::getSnForce() const {
  return snForce_;
}

void ApplyScenarioRequest::setSnForce(bool snForce) {
  snForce_ = snForce;
  setParameter(std::string("SnForce"), snForce ? "true" : "false");
}

std::string ApplyScenarioRequest::getSign() const {
  return sign_;
}

void ApplyScenarioRequest::setSign(const std::string &sign) {
  sign_ = sign;
  setParameter(std::string("Sign"), sign);
}

bool ApplyScenarioRequest::getSnStat() const {
  return snStat_;
}

void ApplyScenarioRequest::setSnStat(bool snStat) {
  snStat_ = snStat;
  setParameter(std::string("SnStat"), snStat ? "true" : "false");
}

std::string ApplyScenarioRequest::getRegionId() const {
  return regionId_;
}

void ApplyScenarioRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ApplyScenarioRequest::getScenario() const {
  return scenario_;
}

void ApplyScenarioRequest::setScenario(const std::string &scenario) {
  scenario_ = scenario;
  setParameter(std::string("Scenario"), scenario);
}

bool ApplyScenarioRequest::getSnDump() const {
  return snDump_;
}

void ApplyScenarioRequest::setSnDump(bool snDump) {
  snDump_ = snDump;
  setParameter(std::string("SnDump"), snDump ? "true" : "false");
}

std::string ApplyScenarioRequest::getAppId() const {
  return appId_;
}

void ApplyScenarioRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ApplyScenarioRequest::getName() const {
  return name_;
}

void ApplyScenarioRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool ApplyScenarioRequest::getSnTransfer() const {
  return snTransfer_;
}

void ApplyScenarioRequest::setSnTransfer(bool snTransfer) {
  snTransfer_ = snTransfer;
  setParameter(std::string("SnTransfer"), snTransfer ? "true" : "false");
}

bool ApplyScenarioRequest::getUpdateOption() const {
  return updateOption_;
}

void ApplyScenarioRequest::setUpdateOption(bool updateOption) {
  updateOption_ = updateOption;
  setParameter(std::string("UpdateOption"), updateOption ? "true" : "false");
}

std::string ApplyScenarioRequest::getConfig() const {
  return config_;
}

void ApplyScenarioRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}


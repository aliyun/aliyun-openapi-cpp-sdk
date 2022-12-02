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

#include <alibabacloud/sas/model/ModifyStrategyRequest.h>

using AlibabaCloud::Sas::Model::ModifyStrategyRequest;

ModifyStrategyRequest::ModifyStrategyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyStrategy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyStrategyRequest::~ModifyStrategyRequest() {}

std::string ModifyStrategyRequest::getTargetType() const {
  return targetType_;
}

void ModifyStrategyRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string ModifyStrategyRequest::getCycleDays() const {
  return cycleDays_;
}

void ModifyStrategyRequest::setCycleDays(const std::string &cycleDays) {
  cycleDays_ = cycleDays;
  setParameter(std::string("CycleDays"), cycleDays);
}

std::string ModifyStrategyRequest::getStartTime() const {
  return startTime_;
}

void ModifyStrategyRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ModifyStrategyRequest::getRiskSubTypeName() const {
  return riskSubTypeName_;
}

void ModifyStrategyRequest::setRiskSubTypeName(const std::string &riskSubTypeName) {
  riskSubTypeName_ = riskSubTypeName;
  setParameter(std::string("RiskSubTypeName"), riskSubTypeName);
}

std::string ModifyStrategyRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyStrategyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyStrategyRequest::getId() const {
  return id_;
}

void ModifyStrategyRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string ModifyStrategyRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void ModifyStrategyRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string ModifyStrategyRequest::getRiskCustomParams() const {
  return riskCustomParams_;
}

void ModifyStrategyRequest::setRiskCustomParams(const std::string &riskCustomParams) {
  riskCustomParams_ = riskCustomParams;
  setParameter(std::string("RiskCustomParams"), riskCustomParams);
}

std::string ModifyStrategyRequest::getEndTime() const {
  return endTime_;
}

void ModifyStrategyRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ModifyStrategyRequest::getCustomType() const {
  return customType_;
}

void ModifyStrategyRequest::setCustomType(const std::string &customType) {
  customType_ = customType;
  setParameter(std::string("CustomType"), customType);
}

std::string ModifyStrategyRequest::getCycleStartTime() const {
  return cycleStartTime_;
}

void ModifyStrategyRequest::setCycleStartTime(const std::string &cycleStartTime) {
  cycleStartTime_ = cycleStartTime;
  setParameter(std::string("CycleStartTime"), cycleStartTime);
}

std::string ModifyStrategyRequest::getName() const {
  return name_;
}

void ModifyStrategyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


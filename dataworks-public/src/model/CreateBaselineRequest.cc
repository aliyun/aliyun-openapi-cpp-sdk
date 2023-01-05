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

#include <alibabacloud/dataworks-public/model/CreateBaselineRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateBaselineRequest;

CreateBaselineRequest::CreateBaselineRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateBaseline") {
  setMethod(HttpRequest::Method::Post);
}

CreateBaselineRequest::~CreateBaselineRequest() {}

std::string CreateBaselineRequest::getOwner() const {
  return owner_;
}

void CreateBaselineRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

int CreateBaselineRequest::getAlertMarginThreshold() const {
  return alertMarginThreshold_;
}

void CreateBaselineRequest::setAlertMarginThreshold(int alertMarginThreshold) {
  alertMarginThreshold_ = alertMarginThreshold;
  setBodyParameter(std::string("AlertMarginThreshold"), std::to_string(alertMarginThreshold));
}

std::vector<CreateBaselineRequest::OvertimeSettings> CreateBaselineRequest::getOvertimeSettings() const {
  return overtimeSettings_;
}

void CreateBaselineRequest::setOvertimeSettings(const std::vector<CreateBaselineRequest::OvertimeSettings> &overtimeSettings) {
  overtimeSettings_ = overtimeSettings;
  for(int dep1 = 0; dep1 != overtimeSettings.size(); dep1++) {
  auto overtimeSettingsObj = overtimeSettings.at(dep1);
  std::string overtimeSettingsObjStr = std::string("OvertimeSettings") + "." + std::to_string(dep1 + 1);
    setBodyParameter(overtimeSettingsObjStr + ".Time", overtimeSettingsObj.time);
    setBodyParameter(overtimeSettingsObjStr + ".Cycle", std::to_string(overtimeSettingsObj.cycle));
  }
}

int CreateBaselineRequest::getPriority() const {
  return priority_;
}

void CreateBaselineRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateBaselineRequest::getBaselineType() const {
  return baselineType_;
}

void CreateBaselineRequest::setBaselineType(const std::string &baselineType) {
  baselineType_ = baselineType;
  setBodyParameter(std::string("BaselineType"), baselineType);
}

std::string CreateBaselineRequest::getBaselineName() const {
  return baselineName_;
}

void CreateBaselineRequest::setBaselineName(const std::string &baselineName) {
  baselineName_ = baselineName;
  setBodyParameter(std::string("BaselineName"), baselineName);
}

long CreateBaselineRequest::getProjectId() const {
  return projectId_;
}

void CreateBaselineRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateBaselineRequest::getNodeIds() const {
  return nodeIds_;
}

void CreateBaselineRequest::setNodeIds(const std::string &nodeIds) {
  nodeIds_ = nodeIds;
  setBodyParameter(std::string("NodeIds"), nodeIds);
}


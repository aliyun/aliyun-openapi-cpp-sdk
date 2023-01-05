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

#include <alibabacloud/dataworks-public/model/UpdateBaselineRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateBaselineRequest;

UpdateBaselineRequest::UpdateBaselineRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateBaseline") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBaselineRequest::~UpdateBaselineRequest() {}

std::string UpdateBaselineRequest::getOwner() const {
  return owner_;
}

void UpdateBaselineRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

std::string UpdateBaselineRequest::getRemoveNodeIds() const {
  return removeNodeIds_;
}

void UpdateBaselineRequest::setRemoveNodeIds(const std::string &removeNodeIds) {
  removeNodeIds_ = removeNodeIds;
  setBodyParameter(std::string("RemoveNodeIds"), removeNodeIds);
}

int UpdateBaselineRequest::getAlertMarginThreshold() const {
  return alertMarginThreshold_;
}

void UpdateBaselineRequest::setAlertMarginThreshold(int alertMarginThreshold) {
  alertMarginThreshold_ = alertMarginThreshold;
  setBodyParameter(std::string("AlertMarginThreshold"), std::to_string(alertMarginThreshold));
}

std::vector<UpdateBaselineRequest::OvertimeSettings> UpdateBaselineRequest::getOvertimeSettings() const {
  return overtimeSettings_;
}

void UpdateBaselineRequest::setOvertimeSettings(const std::vector<UpdateBaselineRequest::OvertimeSettings> &overtimeSettings) {
  overtimeSettings_ = overtimeSettings;
  for(int dep1 = 0; dep1 != overtimeSettings.size(); dep1++) {
    setBodyParameter(std::string("OvertimeSettings") + "." + std::to_string(dep1 + 1) + ".Time", overtimeSettings[dep1].time);
    setBodyParameter(std::string("OvertimeSettings") + "." + std::to_string(dep1 + 1) + ".Cycle", std::to_string(overtimeSettings[dep1].cycle));
  }
}

int UpdateBaselineRequest::getPriority() const {
  return priority_;
}

void UpdateBaselineRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

long UpdateBaselineRequest::getBaselineId() const {
  return baselineId_;
}

void UpdateBaselineRequest::setBaselineId(long baselineId) {
  baselineId_ = baselineId;
  setBodyParameter(std::string("BaselineId"), std::to_string(baselineId));
}

bool UpdateBaselineRequest::getEnabled() const {
  return enabled_;
}

void UpdateBaselineRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setBodyParameter(std::string("Enabled"), enabled ? "true" : "false");
}

std::string UpdateBaselineRequest::getBaselineType() const {
  return baselineType_;
}

void UpdateBaselineRequest::setBaselineType(const std::string &baselineType) {
  baselineType_ = baselineType;
  setBodyParameter(std::string("BaselineType"), baselineType);
}

bool UpdateBaselineRequest::getAlertEnabled() const {
  return alertEnabled_;
}

void UpdateBaselineRequest::setAlertEnabled(bool alertEnabled) {
  alertEnabled_ = alertEnabled;
  setBodyParameter(std::string("AlertEnabled"), alertEnabled ? "true" : "false");
}

std::vector<UpdateBaselineRequest::AlertSettings> UpdateBaselineRequest::getAlertSettings() const {
  return alertSettings_;
}

void UpdateBaselineRequest::setAlertSettings(const std::vector<UpdateBaselineRequest::AlertSettings> &alertSettings) {
  alertSettings_ = alertSettings;
  for(int dep1 = 0; dep1 != alertSettings.size(); dep1++) {
    for(int dep2 = 0; dep2 != alertSettings[dep1].dingRobots.size(); dep2++) {
      setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".DingRobots." + std::to_string(dep2 + 1) + ".AtAll", alertSettings[dep1].dingRobots[dep2].atAll ? "true" : "false");
      setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".DingRobots." + std::to_string(dep2 + 1) + ".WebUrl", alertSettings[dep1].dingRobots[dep2].webUrl);
    }
    setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".AlertType", alertSettings[dep1].alertType);
    setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".AlertMaximum", std::to_string(alertSettings[dep1].alertMaximum));
    setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".SilenceStartTime", alertSettings[dep1].silenceStartTime);
    for(int dep2 = 0; dep2 != alertSettings[dep1].webhooks.size(); dep2++) {
      setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".Webhooks." + std::to_string(dep2 + 1), alertSettings[dep1].webhooks[dep2]);
    }
    setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".BaselineAlertEnabled", alertSettings[dep1].baselineAlertEnabled ? "true" : "false");
    setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".AlertRecipientType", alertSettings[dep1].alertRecipientType);
    setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".AlertInterval", std::to_string(alertSettings[dep1].alertInterval));
    for(int dep2 = 0; dep2 != alertSettings[dep1].topicTypes.size(); dep2++) {
      setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".TopicTypes." + std::to_string(dep2 + 1), alertSettings[dep1].topicTypes[dep2]);
    }
    setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".AlertRecipient", alertSettings[dep1].alertRecipient);
    for(int dep2 = 0; dep2 != alertSettings[dep1].alertMethods.size(); dep2++) {
      setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".AlertMethods." + std::to_string(dep2 + 1), alertSettings[dep1].alertMethods[dep2]);
    }
    setBodyParameter(std::string("AlertSettings") + "." + std::to_string(dep1 + 1) + ".SilenceEndTime", alertSettings[dep1].silenceEndTime);
  }
}

std::string UpdateBaselineRequest::getBaselineName() const {
  return baselineName_;
}

void UpdateBaselineRequest::setBaselineName(const std::string &baselineName) {
  baselineName_ = baselineName;
  setBodyParameter(std::string("BaselineName"), baselineName);
}

long UpdateBaselineRequest::getProjectId() const {
  return projectId_;
}

void UpdateBaselineRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string UpdateBaselineRequest::getNodeIds() const {
  return nodeIds_;
}

void UpdateBaselineRequest::setNodeIds(const std::string &nodeIds) {
  nodeIds_ = nodeIds;
  setBodyParameter(std::string("NodeIds"), nodeIds);
}


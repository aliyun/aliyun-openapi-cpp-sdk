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

#include <alibabacloud/dataworks-public/model/UpdateDIAlarmRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateDIAlarmRuleRequest;

UpdateDIAlarmRuleRequest::UpdateDIAlarmRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateDIAlarmRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDIAlarmRuleRequest::~UpdateDIAlarmRuleRequest() {}

std::string UpdateDIAlarmRuleRequest::getMetricType() const {
  return metricType_;
}

void UpdateDIAlarmRuleRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setBodyParameter(std::string("MetricType"), metricType);
}

std::string UpdateDIAlarmRuleRequest::getTriggerConditions() const {
  return triggerConditions_;
}

void UpdateDIAlarmRuleRequest::setTriggerConditions(const std::string &triggerConditions) {
  triggerConditions_ = triggerConditions;
  setBodyParameter(std::string("TriggerConditions"), triggerConditions);
}

std::string UpdateDIAlarmRuleRequest::getDescription() const {
  return description_;
}

void UpdateDIAlarmRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateDIAlarmRuleRequest::getNotificationSettings() const {
  return notificationSettings_;
}

void UpdateDIAlarmRuleRequest::setNotificationSettings(const std::string &notificationSettings) {
  notificationSettings_ = notificationSettings;
  setBodyParameter(std::string("NotificationSettings"), notificationSettings);
}

bool UpdateDIAlarmRuleRequest::getEnabled() const {
  return enabled_;
}

void UpdateDIAlarmRuleRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setBodyParameter(std::string("Enabled"), enabled ? "true" : "false");
}

long UpdateDIAlarmRuleRequest::getDIAlarmRuleId() const {
  return dIAlarmRuleId_;
}

void UpdateDIAlarmRuleRequest::setDIAlarmRuleId(long dIAlarmRuleId) {
  dIAlarmRuleId_ = dIAlarmRuleId;
  setBodyParameter(std::string("DIAlarmRuleId"), std::to_string(dIAlarmRuleId));
}


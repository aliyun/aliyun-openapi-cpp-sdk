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

#include <alibabacloud/dataworks-public/model/CreateDIAlarmRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDIAlarmRuleRequest;

CreateDIAlarmRuleRequest::CreateDIAlarmRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDIAlarmRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateDIAlarmRuleRequest::~CreateDIAlarmRuleRequest() {}

std::string CreateDIAlarmRuleRequest::getMetricType() const {
  return metricType_;
}

void CreateDIAlarmRuleRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setBodyParameter(std::string("MetricType"), metricType);
}

std::string CreateDIAlarmRuleRequest::getTriggerConditions() const {
  return triggerConditions_;
}

void CreateDIAlarmRuleRequest::setTriggerConditions(const std::string &triggerConditions) {
  triggerConditions_ = triggerConditions;
  setBodyParameter(std::string("TriggerConditions"), triggerConditions);
}

std::string CreateDIAlarmRuleRequest::getDescription() const {
  return description_;
}

void CreateDIAlarmRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateDIAlarmRuleRequest::getNotificationSettings() const {
  return notificationSettings_;
}

void CreateDIAlarmRuleRequest::setNotificationSettings(const std::string &notificationSettings) {
  notificationSettings_ = notificationSettings;
  setBodyParameter(std::string("NotificationSettings"), notificationSettings);
}

bool CreateDIAlarmRuleRequest::getEnabled() const {
  return enabled_;
}

void CreateDIAlarmRuleRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setBodyParameter(std::string("Enabled"), enabled ? "true" : "false");
}

long CreateDIAlarmRuleRequest::getDIJobId() const {
  return dIJobId_;
}

void CreateDIAlarmRuleRequest::setDIJobId(long dIJobId) {
  dIJobId_ = dIJobId;
  setBodyParameter(std::string("DIJobId"), std::to_string(dIJobId));
}


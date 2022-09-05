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

#include <alibabacloud/arms/model/CreateOrUpdateAlertRuleRequest.h>

using AlibabaCloud::ARMS::Model::CreateOrUpdateAlertRuleRequest;

CreateOrUpdateAlertRuleRequest::CreateOrUpdateAlertRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateOrUpdateAlertRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateAlertRuleRequest::~CreateOrUpdateAlertRuleRequest() {}

long CreateOrUpdateAlertRuleRequest::getAlertGroup() const {
  return alertGroup_;
}

void CreateOrUpdateAlertRuleRequest::setAlertGroup(long alertGroup) {
  alertGroup_ = alertGroup;
  setBodyParameter(std::string("AlertGroup"), std::to_string(alertGroup));
}

std::string CreateOrUpdateAlertRuleRequest::getAlertName() const {
  return alertName_;
}

void CreateOrUpdateAlertRuleRequest::setAlertName(const std::string &alertName) {
  alertName_ = alertName;
  setBodyParameter(std::string("AlertName"), alertName);
}

std::string CreateOrUpdateAlertRuleRequest::getAlertStatus() const {
  return alertStatus_;
}

void CreateOrUpdateAlertRuleRequest::setAlertStatus(const std::string &alertStatus) {
  alertStatus_ = alertStatus;
  setBodyParameter(std::string("AlertStatus"), alertStatus);
}

std::string CreateOrUpdateAlertRuleRequest::getAnnotations() const {
  return annotations_;
}

void CreateOrUpdateAlertRuleRequest::setAnnotations(const std::string &annotations) {
  annotations_ = annotations;
  setBodyParameter(std::string("Annotations"), annotations);
}

long CreateOrUpdateAlertRuleRequest::getDuration() const {
  return duration_;
}

void CreateOrUpdateAlertRuleRequest::setDuration(long duration) {
  duration_ = duration;
  setBodyParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateOrUpdateAlertRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateOrUpdateAlertRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateOrUpdateAlertRuleRequest::getMetricsKey() const {
  return metricsKey_;
}

void CreateOrUpdateAlertRuleRequest::setMetricsKey(const std::string &metricsKey) {
  metricsKey_ = metricsKey;
  setBodyParameter(std::string("MetricsKey"), metricsKey);
}

std::string CreateOrUpdateAlertRuleRequest::getAlertRuleContent() const {
  return alertRuleContent_;
}

void CreateOrUpdateAlertRuleRequest::setAlertRuleContent(const std::string &alertRuleContent) {
  alertRuleContent_ = alertRuleContent;
  setBodyParameter(std::string("AlertRuleContent"), alertRuleContent);
}

std::string CreateOrUpdateAlertRuleRequest::getPromQL() const {
  return promQL_;
}

void CreateOrUpdateAlertRuleRequest::setPromQL(const std::string &promQL) {
  promQL_ = promQL;
  setBodyParameter(std::string("PromQL"), promQL);
}

std::string CreateOrUpdateAlertRuleRequest::getLevel() const {
  return level_;
}

void CreateOrUpdateAlertRuleRequest::setLevel(const std::string &level) {
  level_ = level;
  setBodyParameter(std::string("Level"), level);
}

bool CreateOrUpdateAlertRuleRequest::getAutoAddNewApplication() const {
  return autoAddNewApplication_;
}

void CreateOrUpdateAlertRuleRequest::setAutoAddNewApplication(bool autoAddNewApplication) {
  autoAddNewApplication_ = autoAddNewApplication;
  setBodyParameter(std::string("AutoAddNewApplication"), autoAddNewApplication ? "true" : "false");
}

std::string CreateOrUpdateAlertRuleRequest::getFilters() const {
  return filters_;
}

void CreateOrUpdateAlertRuleRequest::setFilters(const std::string &filters) {
  filters_ = filters;
  setBodyParameter(std::string("Filters"), filters);
}

std::string CreateOrUpdateAlertRuleRequest::getClusterId() const {
  return clusterId_;
}

void CreateOrUpdateAlertRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::string CreateOrUpdateAlertRuleRequest::getMessage() const {
  return message_;
}

void CreateOrUpdateAlertRuleRequest::setMessage(const std::string &message) {
  message_ = message;
  setBodyParameter(std::string("Message"), message);
}

std::string CreateOrUpdateAlertRuleRequest::getNotifyStrategy() const {
  return notifyStrategy_;
}

void CreateOrUpdateAlertRuleRequest::setNotifyStrategy(const std::string &notifyStrategy) {
  notifyStrategy_ = notifyStrategy;
  setBodyParameter(std::string("NotifyStrategy"), notifyStrategy);
}

std::string CreateOrUpdateAlertRuleRequest::getLabels() const {
  return labels_;
}

void CreateOrUpdateAlertRuleRequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setBodyParameter(std::string("Labels"), labels);
}

std::string CreateOrUpdateAlertRuleRequest::getAlertType() const {
  return alertType_;
}

void CreateOrUpdateAlertRuleRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setBodyParameter(std::string("AlertType"), alertType);
}

std::string CreateOrUpdateAlertRuleRequest::getAlertCheckType() const {
  return alertCheckType_;
}

void CreateOrUpdateAlertRuleRequest::setAlertCheckType(const std::string &alertCheckType) {
  alertCheckType_ = alertCheckType;
  setBodyParameter(std::string("AlertCheckType"), alertCheckType);
}

std::string CreateOrUpdateAlertRuleRequest::getMetricsType() const {
  return metricsType_;
}

void CreateOrUpdateAlertRuleRequest::setMetricsType(const std::string &metricsType) {
  metricsType_ = metricsType;
  setBodyParameter(std::string("MetricsType"), metricsType);
}

long CreateOrUpdateAlertRuleRequest::getAlertId() const {
  return alertId_;
}

void CreateOrUpdateAlertRuleRequest::setAlertId(long alertId) {
  alertId_ = alertId;
  setBodyParameter(std::string("AlertId"), std::to_string(alertId));
}

std::string CreateOrUpdateAlertRuleRequest::getPids() const {
  return pids_;
}

void CreateOrUpdateAlertRuleRequest::setPids(const std::string &pids) {
  pids_ = pids;
  setBodyParameter(std::string("Pids"), pids);
}


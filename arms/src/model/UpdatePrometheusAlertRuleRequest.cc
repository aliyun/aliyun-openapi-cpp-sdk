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

#include <alibabacloud/arms/model/UpdatePrometheusAlertRuleRequest.h>

using AlibabaCloud::ARMS::Model::UpdatePrometheusAlertRuleRequest;

UpdatePrometheusAlertRuleRequest::UpdatePrometheusAlertRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdatePrometheusAlertRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrometheusAlertRuleRequest::~UpdatePrometheusAlertRuleRequest() {}

std::string UpdatePrometheusAlertRuleRequest::getExpression() const {
  return expression_;
}

void UpdatePrometheusAlertRuleRequest::setExpression(const std::string &expression) {
  expression_ = expression;
  setParameter(std::string("Expression"), expression);
}

std::string UpdatePrometheusAlertRuleRequest::getAlertName() const {
  return alertName_;
}

void UpdatePrometheusAlertRuleRequest::setAlertName(const std::string &alertName) {
  alertName_ = alertName;
  setParameter(std::string("AlertName"), alertName);
}

std::string UpdatePrometheusAlertRuleRequest::getAnnotations() const {
  return annotations_;
}

void UpdatePrometheusAlertRuleRequest::setAnnotations(const std::string &annotations) {
  annotations_ = annotations;
  setParameter(std::string("Annotations"), annotations);
}

std::string UpdatePrometheusAlertRuleRequest::getClusterId() const {
  return clusterId_;
}

void UpdatePrometheusAlertRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long UpdatePrometheusAlertRuleRequest::getDispatchRuleId() const {
  return dispatchRuleId_;
}

void UpdatePrometheusAlertRuleRequest::setDispatchRuleId(long dispatchRuleId) {
  dispatchRuleId_ = dispatchRuleId;
  setParameter(std::string("DispatchRuleId"), std::to_string(dispatchRuleId));
}

std::string UpdatePrometheusAlertRuleRequest::getProxyUserId() const {
  return proxyUserId_;
}

void UpdatePrometheusAlertRuleRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string UpdatePrometheusAlertRuleRequest::getType() const {
  return type_;
}

void UpdatePrometheusAlertRuleRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string UpdatePrometheusAlertRuleRequest::getMessage() const {
  return message_;
}

void UpdatePrometheusAlertRuleRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

std::string UpdatePrometheusAlertRuleRequest::getLabels() const {
  return labels_;
}

void UpdatePrometheusAlertRuleRequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setParameter(std::string("Labels"), labels);
}

std::vector<UpdatePrometheusAlertRuleRequest::Tags> UpdatePrometheusAlertRuleRequest::getTags() const {
  return tags_;
}

void UpdatePrometheusAlertRuleRequest::setTags(const std::vector<UpdatePrometheusAlertRuleRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string UpdatePrometheusAlertRuleRequest::getDuration() const {
  return duration_;
}

void UpdatePrometheusAlertRuleRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string UpdatePrometheusAlertRuleRequest::getRegionId() const {
  return regionId_;
}

void UpdatePrometheusAlertRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long UpdatePrometheusAlertRuleRequest::getAlertId() const {
  return alertId_;
}

void UpdatePrometheusAlertRuleRequest::setAlertId(long alertId) {
  alertId_ = alertId;
  setParameter(std::string("AlertId"), std::to_string(alertId));
}

std::string UpdatePrometheusAlertRuleRequest::getNotifyType() const {
  return notifyType_;
}

void UpdatePrometheusAlertRuleRequest::setNotifyType(const std::string &notifyType) {
  notifyType_ = notifyType;
  setParameter(std::string("NotifyType"), notifyType);
}


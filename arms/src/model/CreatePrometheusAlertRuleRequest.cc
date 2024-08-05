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

#include <alibabacloud/arms/model/CreatePrometheusAlertRuleRequest.h>

using AlibabaCloud::ARMS::Model::CreatePrometheusAlertRuleRequest;

CreatePrometheusAlertRuleRequest::CreatePrometheusAlertRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreatePrometheusAlertRule") {
  setMethod(HttpRequest::Method::Post);
}

CreatePrometheusAlertRuleRequest::~CreatePrometheusAlertRuleRequest() {}

std::string CreatePrometheusAlertRuleRequest::getProductCode() const {
  return productCode_;
}

void CreatePrometheusAlertRuleRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string CreatePrometheusAlertRuleRequest::getExpression() const {
  return expression_;
}

void CreatePrometheusAlertRuleRequest::setExpression(const std::string &expression) {
  expression_ = expression;
  setParameter(std::string("Expression"), expression);
}

std::string CreatePrometheusAlertRuleRequest::getAlertName() const {
  return alertName_;
}

void CreatePrometheusAlertRuleRequest::setAlertName(const std::string &alertName) {
  alertName_ = alertName;
  setParameter(std::string("AlertName"), alertName);
}

std::string CreatePrometheusAlertRuleRequest::getAnnotations() const {
  return annotations_;
}

void CreatePrometheusAlertRuleRequest::setAnnotations(const std::string &annotations) {
  annotations_ = annotations;
  setParameter(std::string("Annotations"), annotations);
}

std::string CreatePrometheusAlertRuleRequest::getClusterId() const {
  return clusterId_;
}

void CreatePrometheusAlertRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long CreatePrometheusAlertRuleRequest::getDispatchRuleId() const {
  return dispatchRuleId_;
}

void CreatePrometheusAlertRuleRequest::setDispatchRuleId(long dispatchRuleId) {
  dispatchRuleId_ = dispatchRuleId;
  setParameter(std::string("DispatchRuleId"), std::to_string(dispatchRuleId));
}

std::string CreatePrometheusAlertRuleRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CreatePrometheusAlertRuleRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string CreatePrometheusAlertRuleRequest::getType() const {
  return type_;
}

void CreatePrometheusAlertRuleRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreatePrometheusAlertRuleRequest::getMessage() const {
  return message_;
}

void CreatePrometheusAlertRuleRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

std::string CreatePrometheusAlertRuleRequest::getLabels() const {
  return labels_;
}

void CreatePrometheusAlertRuleRequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setParameter(std::string("Labels"), labels);
}

std::vector<CreatePrometheusAlertRuleRequest::Tags> CreatePrometheusAlertRuleRequest::getTags() const {
  return tags_;
}

void CreatePrometheusAlertRuleRequest::setTags(const std::vector<CreatePrometheusAlertRuleRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string CreatePrometheusAlertRuleRequest::getDuration() const {
  return duration_;
}

void CreatePrometheusAlertRuleRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string CreatePrometheusAlertRuleRequest::getRegionId() const {
  return regionId_;
}

void CreatePrometheusAlertRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePrometheusAlertRuleRequest::getNotifyType() const {
  return notifyType_;
}

void CreatePrometheusAlertRuleRequest::setNotifyType(const std::string &notifyType) {
  notifyType_ = notifyType;
  setParameter(std::string("NotifyType"), notifyType);
}


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

#include <alibabacloud/mse/model/CreateAlarmRuleRequest.h>

using AlibabaCloud::Mse::Model::CreateAlarmRuleRequest;

CreateAlarmRuleRequest::CreateAlarmRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateAlarmRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateAlarmRuleRequest::~CreateAlarmRuleRequest() {}

int CreateAlarmRuleRequest::getNValue() const {
  return nValue_;
}

void CreateAlarmRuleRequest::setNValue(int nValue) {
  nValue_ = nValue;
  setParameter(std::string("NValue"), std::to_string(nValue));
}

std::string CreateAlarmRuleRequest::getAlarmItem() const {
  return alarmItem_;
}

void CreateAlarmRuleRequest::setAlarmItem(const std::string &alarmItem) {
  alarmItem_ = alarmItem;
  setParameter(std::string("AlarmItem"), alarmItem);
}

std::string CreateAlarmRuleRequest::getClusterId() const {
  return clusterId_;
}

void CreateAlarmRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreateAlarmRuleRequest::get_Operator() const {
  return _operator_;
}

void CreateAlarmRuleRequest::set_Operator(const std::string &_operator) {
  _operator_ = _operator;
  setParameter(std::string("Operator"), _operator);
}

std::string CreateAlarmRuleRequest::getAlarmAliasName() const {
  return alarmAliasName_;
}

void CreateAlarmRuleRequest::setAlarmAliasName(const std::string &alarmAliasName) {
  alarmAliasName_ = alarmAliasName;
  setParameter(std::string("AlarmAliasName"), alarmAliasName);
}

std::string CreateAlarmRuleRequest::getInstanceId() const {
  return instanceId_;
}

void CreateAlarmRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateAlarmRuleRequest::getContactGroupIds() const {
  return contactGroupIds_;
}

void CreateAlarmRuleRequest::setContactGroupIds(const std::string &contactGroupIds) {
  contactGroupIds_ = contactGroupIds;
  setParameter(std::string("ContactGroupIds"), contactGroupIds);
}

std::string CreateAlarmRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateAlarmRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateAlarmRuleRequest::getAlertWay() const {
  return alertWay_;
}

void CreateAlarmRuleRequest::setAlertWay(const std::string &alertWay) {
  alertWay_ = alertWay;
  setParameter(std::string("AlertWay"), alertWay);
}

std::string CreateAlarmRuleRequest::getAggregates() const {
  return aggregates_;
}

void CreateAlarmRuleRequest::setAggregates(const std::string &aggregates) {
  aggregates_ = aggregates;
  setParameter(std::string("Aggregates"), aggregates);
}

float CreateAlarmRuleRequest::getValue() const {
  return value_;
}

void CreateAlarmRuleRequest::setValue(float value) {
  value_ = value;
  setParameter(std::string("Value"), std::to_string(value));
}


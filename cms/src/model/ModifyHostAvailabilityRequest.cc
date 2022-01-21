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

#include <alibabacloud/cms/model/ModifyHostAvailabilityRequest.h>

using AlibabaCloud::Cms::Model::ModifyHostAvailabilityRequest;

ModifyHostAvailabilityRequest::ModifyHostAvailabilityRequest()
    : RpcServiceRequest("cms", "2019-01-01", "ModifyHostAvailability") {
  setMethod(HttpRequest::Method::Post);
}

ModifyHostAvailabilityRequest::~ModifyHostAvailabilityRequest() {}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpMethod() const {
  return taskOptionHttpMethod_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpMethod(const std::string &taskOptionHttpMethod) {
  taskOptionHttpMethod_ = taskOptionHttpMethod;
  setParameter(std::string("TaskOption.HttpMethod"), taskOptionHttpMethod);
}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpHeader() const {
  return taskOptionHttpHeader_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpHeader(const std::string &taskOptionHttpHeader) {
  taskOptionHttpHeader_ = taskOptionHttpHeader;
  setParameter(std::string("TaskOption.HttpHeader"), taskOptionHttpHeader);
}

std::vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList> ModifyHostAvailabilityRequest::getAlertConfigEscalationList() const {
  return alertConfigEscalationList_;
}

void ModifyHostAvailabilityRequest::setAlertConfigEscalationList(const std::vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList> &alertConfigEscalationList) {
  alertConfigEscalationList_ = alertConfigEscalationList;
  for(int dep1 = 0; dep1 != alertConfigEscalationList.size(); dep1++) {
  auto alertConfigEscalationListObj = alertConfigEscalationList.at(dep1);
  std::string alertConfigEscalationListObjStr = std::string("AlertConfigEscalationList") + "." + std::to_string(dep1 + 1);
    setParameter(alertConfigEscalationListObjStr + ".Times", std::to_string(alertConfigEscalationListObj.times));
    setParameter(alertConfigEscalationListObjStr + ".MetricName", alertConfigEscalationListObj.metricName);
    setParameter(alertConfigEscalationListObjStr + ".Value", alertConfigEscalationListObj.value);
    setParameter(alertConfigEscalationListObjStr + ".Operator", alertConfigEscalationListObj._operator);
    setParameter(alertConfigEscalationListObjStr + ".Aggregate", alertConfigEscalationListObj.aggregate);
  }
}

std::string ModifyHostAvailabilityRequest::getTaskName() const {
  return taskName_;
}

void ModifyHostAvailabilityRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

int ModifyHostAvailabilityRequest::getAlertConfigSilenceTime() const {
  return alertConfigSilenceTime_;
}

void ModifyHostAvailabilityRequest::setAlertConfigSilenceTime(int alertConfigSilenceTime) {
  alertConfigSilenceTime_ = alertConfigSilenceTime;
  setParameter(std::string("AlertConfig.SilenceTime"), std::to_string(alertConfigSilenceTime));
}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpResponseCharset() const {
  return taskOptionHttpResponseCharset_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpResponseCharset(const std::string &taskOptionHttpResponseCharset) {
  taskOptionHttpResponseCharset_ = taskOptionHttpResponseCharset;
  setParameter(std::string("TaskOption.HttpResponseCharset"), taskOptionHttpResponseCharset);
}

bool ModifyHostAvailabilityRequest::getTaskOptionHttpNegative() const {
  return taskOptionHttpNegative_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpNegative(bool taskOptionHttpNegative) {
  taskOptionHttpNegative_ = taskOptionHttpNegative;
  setParameter(std::string("TaskOption.HttpNegative"), taskOptionHttpNegative ? "true" : "false");
}

int ModifyHostAvailabilityRequest::getTaskOptionInterval() const {
  return taskOptionInterval_;
}

void ModifyHostAvailabilityRequest::setTaskOptionInterval(int taskOptionInterval) {
  taskOptionInterval_ = taskOptionInterval;
  setParameter(std::string("TaskOption.Interval"), std::to_string(taskOptionInterval));
}

int ModifyHostAvailabilityRequest::getAlertConfigNotifyType() const {
  return alertConfigNotifyType_;
}

void ModifyHostAvailabilityRequest::setAlertConfigNotifyType(int alertConfigNotifyType) {
  alertConfigNotifyType_ = alertConfigNotifyType;
  setParameter(std::string("AlertConfig.NotifyType"), std::to_string(alertConfigNotifyType));
}

std::string ModifyHostAvailabilityRequest::getTaskOptionTelnetOrPingHost() const {
  return taskOptionTelnetOrPingHost_;
}

void ModifyHostAvailabilityRequest::setTaskOptionTelnetOrPingHost(const std::string &taskOptionTelnetOrPingHost) {
  taskOptionTelnetOrPingHost_ = taskOptionTelnetOrPingHost;
  setParameter(std::string("TaskOption.TelnetOrPingHost"), taskOptionTelnetOrPingHost);
}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpResponseMatchContent() const {
  return taskOptionHttpResponseMatchContent_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpResponseMatchContent(const std::string &taskOptionHttpResponseMatchContent) {
  taskOptionHttpResponseMatchContent_ = taskOptionHttpResponseMatchContent;
  setParameter(std::string("TaskOption.HttpResponseMatchContent"), taskOptionHttpResponseMatchContent);
}

long ModifyHostAvailabilityRequest::getId() const {
  return id_;
}

void ModifyHostAvailabilityRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::vector<std::string> ModifyHostAvailabilityRequest::getInstanceList() const {
  return instanceList_;
}

void ModifyHostAvailabilityRequest::setInstanceList(const std::vector<std::string> &instanceList) {
  instanceList_ = instanceList;
}

long ModifyHostAvailabilityRequest::getGroupId() const {
  return groupId_;
}

void ModifyHostAvailabilityRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int ModifyHostAvailabilityRequest::getAlertConfigEndTime() const {
  return alertConfigEndTime_;
}

void ModifyHostAvailabilityRequest::setAlertConfigEndTime(int alertConfigEndTime) {
  alertConfigEndTime_ = alertConfigEndTime;
  setParameter(std::string("AlertConfig.EndTime"), std::to_string(alertConfigEndTime));
}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpURI() const {
  return taskOptionHttpURI_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpURI(const std::string &taskOptionHttpURI) {
  taskOptionHttpURI_ = taskOptionHttpURI;
  setParameter(std::string("TaskOption.HttpURI"), taskOptionHttpURI);
}

std::string ModifyHostAvailabilityRequest::getTaskScope() const {
  return taskScope_;
}

void ModifyHostAvailabilityRequest::setTaskScope(const std::string &taskScope) {
  taskScope_ = taskScope;
  setParameter(std::string("TaskScope"), taskScope);
}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpPostContent() const {
  return taskOptionHttpPostContent_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpPostContent(const std::string &taskOptionHttpPostContent) {
  taskOptionHttpPostContent_ = taskOptionHttpPostContent;
  setParameter(std::string("TaskOption.HttpPostContent"), taskOptionHttpPostContent);
}

int ModifyHostAvailabilityRequest::getAlertConfigStartTime() const {
  return alertConfigStartTime_;
}

void ModifyHostAvailabilityRequest::setAlertConfigStartTime(int alertConfigStartTime) {
  alertConfigStartTime_ = alertConfigStartTime;
  setParameter(std::string("AlertConfig.StartTime"), std::to_string(alertConfigStartTime));
}

std::string ModifyHostAvailabilityRequest::getAlertConfigWebHook() const {
  return alertConfigWebHook_;
}

void ModifyHostAvailabilityRequest::setAlertConfigWebHook(const std::string &alertConfigWebHook) {
  alertConfigWebHook_ = alertConfigWebHook;
  setParameter(std::string("AlertConfig.WebHook"), alertConfigWebHook);
}


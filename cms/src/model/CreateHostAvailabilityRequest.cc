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

#include <alibabacloud/cms/model/CreateHostAvailabilityRequest.h>

using AlibabaCloud::Cms::Model::CreateHostAvailabilityRequest;

CreateHostAvailabilityRequest::CreateHostAvailabilityRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateHostAvailability") {
  setMethod(HttpRequest::Method::Post);
}

CreateHostAvailabilityRequest::~CreateHostAvailabilityRequest() {}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpMethod() const {
  return taskOptionHttpMethod_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpMethod(const std::string &taskOptionHttpMethod) {
  taskOptionHttpMethod_ = taskOptionHttpMethod;
  setParameter(std::string("TaskOption.HttpMethod"), taskOptionHttpMethod);
}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpHeader() const {
  return taskOptionHttpHeader_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpHeader(const std::string &taskOptionHttpHeader) {
  taskOptionHttpHeader_ = taskOptionHttpHeader;
  setParameter(std::string("TaskOption.HttpHeader"), taskOptionHttpHeader);
}

std::vector<CreateHostAvailabilityRequest::AlertConfigEscalationList> CreateHostAvailabilityRequest::getAlertConfigEscalationList() const {
  return alertConfigEscalationList_;
}

void CreateHostAvailabilityRequest::setAlertConfigEscalationList(const std::vector<CreateHostAvailabilityRequest::AlertConfigEscalationList> &alertConfigEscalationList) {
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

std::string CreateHostAvailabilityRequest::getTaskName() const {
  return taskName_;
}

void CreateHostAvailabilityRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

int CreateHostAvailabilityRequest::getAlertConfigSilenceTime() const {
  return alertConfigSilenceTime_;
}

void CreateHostAvailabilityRequest::setAlertConfigSilenceTime(int alertConfigSilenceTime) {
  alertConfigSilenceTime_ = alertConfigSilenceTime;
  setParameter(std::string("AlertConfig.SilenceTime"), std::to_string(alertConfigSilenceTime));
}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpResponseCharset() const {
  return taskOptionHttpResponseCharset_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpResponseCharset(const std::string &taskOptionHttpResponseCharset) {
  taskOptionHttpResponseCharset_ = taskOptionHttpResponseCharset;
  setParameter(std::string("TaskOption.HttpResponseCharset"), taskOptionHttpResponseCharset);
}

bool CreateHostAvailabilityRequest::getTaskOptionHttpNegative() const {
  return taskOptionHttpNegative_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpNegative(bool taskOptionHttpNegative) {
  taskOptionHttpNegative_ = taskOptionHttpNegative;
  setParameter(std::string("TaskOption.HttpNegative"), taskOptionHttpNegative ? "true" : "false");
}

int CreateHostAvailabilityRequest::getTaskOptionInterval() const {
  return taskOptionInterval_;
}

void CreateHostAvailabilityRequest::setTaskOptionInterval(int taskOptionInterval) {
  taskOptionInterval_ = taskOptionInterval;
  setParameter(std::string("TaskOption.Interval"), std::to_string(taskOptionInterval));
}

int CreateHostAvailabilityRequest::getAlertConfigNotifyType() const {
  return alertConfigNotifyType_;
}

void CreateHostAvailabilityRequest::setAlertConfigNotifyType(int alertConfigNotifyType) {
  alertConfigNotifyType_ = alertConfigNotifyType;
  setParameter(std::string("AlertConfig.NotifyType"), std::to_string(alertConfigNotifyType));
}

std::string CreateHostAvailabilityRequest::getTaskOptionTelnetOrPingHost() const {
  return taskOptionTelnetOrPingHost_;
}

void CreateHostAvailabilityRequest::setTaskOptionTelnetOrPingHost(const std::string &taskOptionTelnetOrPingHost) {
  taskOptionTelnetOrPingHost_ = taskOptionTelnetOrPingHost;
  setParameter(std::string("TaskOption.TelnetOrPingHost"), taskOptionTelnetOrPingHost);
}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpResponseMatchContent() const {
  return taskOptionHttpResponseMatchContent_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpResponseMatchContent(const std::string &taskOptionHttpResponseMatchContent) {
  taskOptionHttpResponseMatchContent_ = taskOptionHttpResponseMatchContent;
  setParameter(std::string("TaskOption.HttpResponseMatchContent"), taskOptionHttpResponseMatchContent);
}

std::vector<std::string> CreateHostAvailabilityRequest::getInstanceList() const {
  return instanceList_;
}

void CreateHostAvailabilityRequest::setInstanceList(const std::vector<std::string> &instanceList) {
  instanceList_ = instanceList;
}

std::string CreateHostAvailabilityRequest::getTaskType() const {
  return taskType_;
}

void CreateHostAvailabilityRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long CreateHostAvailabilityRequest::getGroupId() const {
  return groupId_;
}

void CreateHostAvailabilityRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int CreateHostAvailabilityRequest::getAlertConfigEndTime() const {
  return alertConfigEndTime_;
}

void CreateHostAvailabilityRequest::setAlertConfigEndTime(int alertConfigEndTime) {
  alertConfigEndTime_ = alertConfigEndTime;
  setParameter(std::string("AlertConfig.EndTime"), std::to_string(alertConfigEndTime));
}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpURI() const {
  return taskOptionHttpURI_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpURI(const std::string &taskOptionHttpURI) {
  taskOptionHttpURI_ = taskOptionHttpURI;
  setParameter(std::string("TaskOption.HttpURI"), taskOptionHttpURI);
}

std::string CreateHostAvailabilityRequest::getTaskScope() const {
  return taskScope_;
}

void CreateHostAvailabilityRequest::setTaskScope(const std::string &taskScope) {
  taskScope_ = taskScope;
  setParameter(std::string("TaskScope"), taskScope);
}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpPostContent() const {
  return taskOptionHttpPostContent_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpPostContent(const std::string &taskOptionHttpPostContent) {
  taskOptionHttpPostContent_ = taskOptionHttpPostContent;
  setParameter(std::string("TaskOption.HttpPostContent"), taskOptionHttpPostContent);
}

int CreateHostAvailabilityRequest::getAlertConfigStartTime() const {
  return alertConfigStartTime_;
}

void CreateHostAvailabilityRequest::setAlertConfigStartTime(int alertConfigStartTime) {
  alertConfigStartTime_ = alertConfigStartTime;
  setParameter(std::string("AlertConfig.StartTime"), std::to_string(alertConfigStartTime));
}

std::string CreateHostAvailabilityRequest::getAlertConfigWebHook() const {
  return alertConfigWebHook_;
}

void CreateHostAvailabilityRequest::setAlertConfigWebHook(const std::string &alertConfigWebHook) {
  alertConfigWebHook_ = alertConfigWebHook;
  setParameter(std::string("AlertConfig.WebHook"), alertConfigWebHook);
}


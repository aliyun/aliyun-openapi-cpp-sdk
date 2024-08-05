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

#include <alibabacloud/arms/model/ListAlertsRequest.h>

using AlibabaCloud::ARMS::Model::ListAlertsRequest;

ListAlertsRequest::ListAlertsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListAlerts") {
  setMethod(HttpRequest::Method::Post);
}

ListAlertsRequest::~ListAlertsRequest() {}

std::string ListAlertsRequest::getSeverity() const {
  return severity_;
}

void ListAlertsRequest::setSeverity(const std::string &severity) {
  severity_ = severity;
  setParameter(std::string("Severity"), severity);
}

std::string ListAlertsRequest::getOwner() const {
  return owner_;
}

void ListAlertsRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

std::string ListAlertsRequest::getIntegrationType() const {
  return integrationType_;
}

void ListAlertsRequest::setIntegrationType(const std::string &integrationType) {
  integrationType_ = integrationType;
  setParameter(std::string("IntegrationType"), integrationType);
}

std::string ListAlertsRequest::getAlertName() const {
  return alertName_;
}

void ListAlertsRequest::setAlertName(const std::string &alertName) {
  alertName_ = alertName;
  setParameter(std::string("AlertName"), alertName);
}

bool ListAlertsRequest::getShowActivities() const {
  return showActivities_;
}

void ListAlertsRequest::setShowActivities(bool showActivities) {
  showActivities_ = showActivities;
  setParameter(std::string("ShowActivities"), showActivities ? "true" : "false");
}

std::string ListAlertsRequest::getEndTime() const {
  return endTime_;
}

void ListAlertsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long ListAlertsRequest::getDispatchRuleId() const {
  return dispatchRuleId_;
}

void ListAlertsRequest::setDispatchRuleId(long dispatchRuleId) {
  dispatchRuleId_ = dispatchRuleId;
  setParameter(std::string("DispatchRuleId"), std::to_string(dispatchRuleId));
}

std::string ListAlertsRequest::getStartTime() const {
  return startTime_;
}

void ListAlertsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

bool ListAlertsRequest::getShowEvents() const {
  return showEvents_;
}

void ListAlertsRequest::setShowEvents(bool showEvents) {
  showEvents_ = showEvents;
  setParameter(std::string("ShowEvents"), showEvents ? "true" : "false");
}

std::string ListAlertsRequest::getProxyUserId() const {
  return proxyUserId_;
}

void ListAlertsRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string ListAlertsRequest::getNotifyRobotName() const {
  return notifyRobotName_;
}

void ListAlertsRequest::setNotifyRobotName(const std::string &notifyRobotName) {
  notifyRobotName_ = notifyRobotName;
  setParameter(std::string("NotifyRobotName"), notifyRobotName);
}

long ListAlertsRequest::getSize() const {
  return size_;
}

void ListAlertsRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListAlertsRequest::getRegionId() const {
  return regionId_;
}

void ListAlertsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ListAlertsRequest::getState() const {
  return state_;
}

void ListAlertsRequest::setState(long state) {
  state_ = state;
  setParameter(std::string("State"), std::to_string(state));
}

long ListAlertsRequest::getPage() const {
  return page_;
}

void ListAlertsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}


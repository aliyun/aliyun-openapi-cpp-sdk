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

#include <alibabacloud/arms/model/SearchEventsRequest.h>

using AlibabaCloud::ARMS::Model::SearchEventsRequest;

SearchEventsRequest::SearchEventsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SearchEvents") {
  setMethod(HttpRequest::Method::Post);
}

SearchEventsRequest::~SearchEventsRequest() {}

int SearchEventsRequest::getIsTrigger() const {
  return isTrigger_;
}

void SearchEventsRequest::setIsTrigger(int isTrigger) {
  isTrigger_ = isTrigger;
  setParameter(std::string("IsTrigger"), std::to_string(isTrigger));
}

std::string SearchEventsRequest::getAppType() const {
  return appType_;
}

void SearchEventsRequest::setAppType(const std::string &appType) {
  appType_ = appType;
  setParameter(std::string("AppType"), appType);
}

long SearchEventsRequest::getEndTime() const {
  return endTime_;
}

void SearchEventsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string SearchEventsRequest::getPid() const {
  return pid_;
}

void SearchEventsRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

int SearchEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void SearchEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long SearchEventsRequest::getStartTime() const {
  return startTime_;
}

void SearchEventsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string SearchEventsRequest::getProxyUserId() const {
  return proxyUserId_;
}

void SearchEventsRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

int SearchEventsRequest::getAlertType() const {
  return alertType_;
}

void SearchEventsRequest::setAlertType(int alertType) {
  alertType_ = alertType;
  setParameter(std::string("AlertType"), std::to_string(alertType));
}

std::string SearchEventsRequest::getRegionId() const {
  return regionId_;
}

void SearchEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int SearchEventsRequest::getPageSize() const {
  return pageSize_;
}

void SearchEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long SearchEventsRequest::getAlertId() const {
  return alertId_;
}

void SearchEventsRequest::setAlertId(long alertId) {
  alertId_ = alertId;
  setParameter(std::string("AlertId"), std::to_string(alertId));
}


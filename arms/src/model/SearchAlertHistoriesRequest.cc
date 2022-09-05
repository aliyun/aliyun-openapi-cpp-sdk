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

#include <alibabacloud/arms/model/SearchAlertHistoriesRequest.h>

using AlibabaCloud::ARMS::Model::SearchAlertHistoriesRequest;

SearchAlertHistoriesRequest::SearchAlertHistoriesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SearchAlertHistories") {
  setMethod(HttpRequest::Method::Post);
}

SearchAlertHistoriesRequest::~SearchAlertHistoriesRequest() {}

long SearchAlertHistoriesRequest::getEndTime() const {
  return endTime_;
}

void SearchAlertHistoriesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int SearchAlertHistoriesRequest::getCurrentPage() const {
  return currentPage_;
}

void SearchAlertHistoriesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long SearchAlertHistoriesRequest::getStartTime() const {
  return startTime_;
}

void SearchAlertHistoriesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string SearchAlertHistoriesRequest::getProxyUserId() const {
  return proxyUserId_;
}

void SearchAlertHistoriesRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

int SearchAlertHistoriesRequest::getAlertType() const {
  return alertType_;
}

void SearchAlertHistoriesRequest::setAlertType(int alertType) {
  alertType_ = alertType;
  setParameter(std::string("AlertType"), std::to_string(alertType));
}

std::string SearchAlertHistoriesRequest::getRegionId() const {
  return regionId_;
}

void SearchAlertHistoriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int SearchAlertHistoriesRequest::getPageSize() const {
  return pageSize_;
}

void SearchAlertHistoriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long SearchAlertHistoriesRequest::getAlertId() const {
  return alertId_;
}

void SearchAlertHistoriesRequest::setAlertId(long alertId) {
  alertId_ = alertId;
  setParameter(std::string("AlertId"), std::to_string(alertId));
}


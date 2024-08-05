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

#include <alibabacloud/arms/model/ListAlertEventsRequest.h>

using AlibabaCloud::ARMS::Model::ListAlertEventsRequest;

ListAlertEventsRequest::ListAlertEventsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListAlertEvents") {
  setMethod(HttpRequest::Method::Post);
}

ListAlertEventsRequest::~ListAlertEventsRequest() {}

std::string ListAlertEventsRequest::getAlertName() const {
  return alertName_;
}

void ListAlertEventsRequest::setAlertName(const std::string &alertName) {
  alertName_ = alertName;
  setParameter(std::string("AlertName"), alertName);
}

std::string ListAlertEventsRequest::getEndTime() const {
  return endTime_;
}

void ListAlertEventsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListAlertEventsRequest::getStartTime() const {
  return startTime_;
}

void ListAlertEventsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ListAlertEventsRequest::getProxyUserId() const {
  return proxyUserId_;
}

void ListAlertEventsRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

long ListAlertEventsRequest::getSize() const {
  return size_;
}

void ListAlertEventsRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListAlertEventsRequest::getMatchingConditions() const {
  return matchingConditions_;
}

void ListAlertEventsRequest::setMatchingConditions(const std::string &matchingConditions) {
  matchingConditions_ = matchingConditions;
  setParameter(std::string("MatchingConditions"), matchingConditions);
}

bool ListAlertEventsRequest::getShowNotificationPolicies() const {
  return showNotificationPolicies_;
}

void ListAlertEventsRequest::setShowNotificationPolicies(bool showNotificationPolicies) {
  showNotificationPolicies_ = showNotificationPolicies;
  setParameter(std::string("ShowNotificationPolicies"), showNotificationPolicies ? "true" : "false");
}

long ListAlertEventsRequest::getPage() const {
  return page_;
}

void ListAlertEventsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string ListAlertEventsRequest::getStatus() const {
  return status_;
}

void ListAlertEventsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


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

#include <alibabacloud/dataworks-public/model/ListAlertMessagesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListAlertMessagesRequest;

ListAlertMessagesRequest::ListAlertMessagesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListAlertMessages") {
  setMethod(HttpRequest::Method::Post);
}

ListAlertMessagesRequest::~ListAlertMessagesRequest() {}

std::string ListAlertMessagesRequest::getAlertUser() const {
  return alertUser_;
}

void ListAlertMessagesRequest::setAlertUser(const std::string &alertUser) {
  alertUser_ = alertUser;
  setBodyParameter(std::string("AlertUser"), alertUser);
}

std::string ListAlertMessagesRequest::getEndTime() const {
  return endTime_;
}

void ListAlertMessagesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string ListAlertMessagesRequest::getBeginTime() const {
  return beginTime_;
}

void ListAlertMessagesRequest::setBeginTime(const std::string &beginTime) {
  beginTime_ = beginTime;
  setBodyParameter(std::string("BeginTime"), beginTime);
}

std::string ListAlertMessagesRequest::getAlertMethods() const {
  return alertMethods_;
}

void ListAlertMessagesRequest::setAlertMethods(const std::string &alertMethods) {
  alertMethods_ = alertMethods;
  setBodyParameter(std::string("AlertMethods"), alertMethods);
}

int ListAlertMessagesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAlertMessagesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListAlertMessagesRequest::getBaselineId() const {
  return baselineId_;
}

void ListAlertMessagesRequest::setBaselineId(long baselineId) {
  baselineId_ = baselineId;
  setBodyParameter(std::string("BaselineId"), std::to_string(baselineId));
}

long ListAlertMessagesRequest::getRemindId() const {
  return remindId_;
}

void ListAlertMessagesRequest::setRemindId(long remindId) {
  remindId_ = remindId;
  setBodyParameter(std::string("RemindId"), std::to_string(remindId));
}

int ListAlertMessagesRequest::getPageSize() const {
  return pageSize_;
}

void ListAlertMessagesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAlertMessagesRequest::getAlertRuleTypes() const {
  return alertRuleTypes_;
}

void ListAlertMessagesRequest::setAlertRuleTypes(const std::string &alertRuleTypes) {
  alertRuleTypes_ = alertRuleTypes;
  setBodyParameter(std::string("AlertRuleTypes"), alertRuleTypes);
}


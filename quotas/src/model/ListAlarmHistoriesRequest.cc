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

#include <alibabacloud/quotas/model/ListAlarmHistoriesRequest.h>

using AlibabaCloud::Quotas::Model::ListAlarmHistoriesRequest;

ListAlarmHistoriesRequest::ListAlarmHistoriesRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ListAlarmHistories") {
  setMethod(HttpRequest::Method::Post);
}

ListAlarmHistoriesRequest::~ListAlarmHistoriesRequest() {}

std::string ListAlarmHistoriesRequest::getProductCode() const {
  return productCode_;
}

void ListAlarmHistoriesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

long ListAlarmHistoriesRequest::getStartTime() const {
  return startTime_;
}

void ListAlarmHistoriesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListAlarmHistoriesRequest::getNextToken() const {
  return nextToken_;
}

void ListAlarmHistoriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::string ListAlarmHistoriesRequest::getKeyword() const {
  return keyword_;
}

void ListAlarmHistoriesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setBodyParameter(std::string("Keyword"), keyword);
}

std::string ListAlarmHistoriesRequest::getOriginalContext() const {
  return originalContext_;
}

void ListAlarmHistoriesRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

long ListAlarmHistoriesRequest::getEndTime() const {
  return endTime_;
}

void ListAlarmHistoriesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListAlarmHistoriesRequest::getAlarmId() const {
  return alarmId_;
}

void ListAlarmHistoriesRequest::setAlarmId(const std::string &alarmId) {
  alarmId_ = alarmId;
  setBodyParameter(std::string("AlarmId"), alarmId);
}

int ListAlarmHistoriesRequest::getMaxResults() const {
  return maxResults_;
}

void ListAlarmHistoriesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}


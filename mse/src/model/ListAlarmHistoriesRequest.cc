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

#include <alibabacloud/mse/model/ListAlarmHistoriesRequest.h>

using AlibabaCloud::Mse::Model::ListAlarmHistoriesRequest;

ListAlarmHistoriesRequest::ListAlarmHistoriesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListAlarmHistories") {
  setMethod(HttpRequest::Method::Get);
}

ListAlarmHistoriesRequest::~ListAlarmHistoriesRequest() {}

long ListAlarmHistoriesRequest::getEndTime() const {
  return endTime_;
}

void ListAlarmHistoriesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListAlarmHistoriesRequest::getAlarmMseType() const {
  return alarmMseType_;
}

void ListAlarmHistoriesRequest::setAlarmMseType(const std::string &alarmMseType) {
  alarmMseType_ = alarmMseType;
  setParameter(std::string("AlarmMseType"), alarmMseType);
}

long ListAlarmHistoriesRequest::getStartTime() const {
  return startTime_;
}

void ListAlarmHistoriesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListAlarmHistoriesRequest::getPageNum() const {
  return pageNum_;
}

void ListAlarmHistoriesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAlarmHistoriesRequest::getRequestPars() const {
  return requestPars_;
}

void ListAlarmHistoriesRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListAlarmHistoriesRequest::getPageSize() const {
  return pageSize_;
}

void ListAlarmHistoriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAlarmHistoriesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListAlarmHistoriesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ListAlarmHistoriesRequest::getAlarmName() const {
  return alarmName_;
}

void ListAlarmHistoriesRequest::setAlarmName(const std::string &alarmName) {
  alarmName_ = alarmName;
  setParameter(std::string("AlarmName"), alarmName);
}


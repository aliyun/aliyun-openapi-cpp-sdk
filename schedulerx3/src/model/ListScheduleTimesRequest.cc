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

#include <alibabacloud/schedulerx3/model/ListScheduleTimesRequest.h>

using AlibabaCloud::SchedulerX3::Model::ListScheduleTimesRequest;

ListScheduleTimesRequest::ListScheduleTimesRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ListScheduleTimes") {
  setMethod(HttpRequest::Method::Get);
}

ListScheduleTimesRequest::~ListScheduleTimesRequest() {}

std::string ListScheduleTimesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListScheduleTimesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListScheduleTimesRequest::getTimeZone() const {
  return timeZone_;
}

void ListScheduleTimesRequest::setTimeZone(const std::string &timeZone) {
  timeZone_ = timeZone;
  setParameter(std::string("TimeZone"), timeZone);
}

std::string ListScheduleTimesRequest::getAppName() const {
  return appName_;
}

void ListScheduleTimesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ListScheduleTimesRequest::getCalendar() const {
  return calendar_;
}

void ListScheduleTimesRequest::setCalendar(const std::string &calendar) {
  calendar_ = calendar;
  setParameter(std::string("Calendar"), calendar);
}

std::string ListScheduleTimesRequest::getClusterId() const {
  return clusterId_;
}

void ListScheduleTimesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListScheduleTimesRequest::getTimeExpression() const {
  return timeExpression_;
}

void ListScheduleTimesRequest::setTimeExpression(const std::string &timeExpression) {
  timeExpression_ = timeExpression;
  setParameter(std::string("TimeExpression"), timeExpression);
}

int ListScheduleTimesRequest::getTimeType() const {
  return timeType_;
}

void ListScheduleTimesRequest::setTimeType(int timeType) {
  timeType_ = timeType;
  setParameter(std::string("TimeType"), std::to_string(timeType));
}


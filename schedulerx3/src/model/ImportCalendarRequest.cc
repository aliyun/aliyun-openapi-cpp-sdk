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

#include <alibabacloud/schedulerx3/model/ImportCalendarRequest.h>

using AlibabaCloud::SchedulerX3::Model::ImportCalendarRequest;

ImportCalendarRequest::ImportCalendarRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ImportCalendar") {
  setMethod(HttpRequest::Method::Post);
}

ImportCalendarRequest::~ImportCalendarRequest() {}

std::string ImportCalendarRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ImportCalendarRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ImportCalendarRequest::getYear() const {
  return year_;
}

void ImportCalendarRequest::setYear(int year) {
  year_ = year;
  setBodyParameter(std::string("Year"), std::to_string(year));
}

std::string ImportCalendarRequest::getMonths() const {
  return months_;
}

void ImportCalendarRequest::setMonths(const std::string &months) {
  months_ = months;
  setBodyParameter(std::string("Months"), months);
}

std::string ImportCalendarRequest::getClusterId() const {
  return clusterId_;
}

void ImportCalendarRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::string ImportCalendarRequest::getName() const {
  return name_;
}

void ImportCalendarRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}


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

#include <alibabacloud/arms/model/ListInsightsEventsRequest.h>

using AlibabaCloud::ARMS::Model::ListInsightsEventsRequest;

ListInsightsEventsRequest::ListInsightsEventsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListInsightsEvents") {
  setMethod(HttpRequest::Method::Post);
}

ListInsightsEventsRequest::~ListInsightsEventsRequest() {}

std::string ListInsightsEventsRequest::getInsightsTypes() const {
  return insightsTypes_;
}

void ListInsightsEventsRequest::setInsightsTypes(const std::string &insightsTypes) {
  insightsTypes_ = insightsTypes;
  setParameter(std::string("InsightsTypes"), insightsTypes);
}

std::string ListInsightsEventsRequest::getRegionId() const {
  return regionId_;
}

void ListInsightsEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListInsightsEventsRequest::getEndTime() const {
  return endTime_;
}

void ListInsightsEventsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListInsightsEventsRequest::getPid() const {
  return pid_;
}

void ListInsightsEventsRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string ListInsightsEventsRequest::getStartTime() const {
  return startTime_;
}

void ListInsightsEventsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}


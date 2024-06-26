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

#include <alibabacloud/csas/model/ListPopTrafficStatisticsRequest.h>

using AlibabaCloud::Csas::Model::ListPopTrafficStatisticsRequest;

ListPopTrafficStatisticsRequest::ListPopTrafficStatisticsRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListPopTrafficStatistics") {
  setMethod(HttpRequest::Method::Get);
}

ListPopTrafficStatisticsRequest::~ListPopTrafficStatisticsRequest() {}

std::string ListPopTrafficStatisticsRequest::getEndTime() const {
  return endTime_;
}

void ListPopTrafficStatisticsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListPopTrafficStatisticsRequest::getStartTime() const {
  return startTime_;
}

void ListPopTrafficStatisticsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ListPopTrafficStatisticsRequest::getRegion() const {
  return region_;
}

void ListPopTrafficStatisticsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


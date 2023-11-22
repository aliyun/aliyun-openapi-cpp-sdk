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

#include <alibabacloud/live/model/DescribeLiveGrtnTrafficUsageRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveGrtnTrafficUsageRequest;

DescribeLiveGrtnTrafficUsageRequest::DescribeLiveGrtnTrafficUsageRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveGrtnTrafficUsage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveGrtnTrafficUsageRequest::~DescribeLiveGrtnTrafficUsageRequest() {}

std::string DescribeLiveGrtnTrafficUsageRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveGrtnTrafficUsageRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveGrtnTrafficUsageRequest::getArea() const {
  return area_;
}

void DescribeLiveGrtnTrafficUsageRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

std::string DescribeLiveGrtnTrafficUsageRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveGrtnTrafficUsageRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveGrtnTrafficUsageRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveGrtnTrafficUsageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveGrtnTrafficUsageRequest::getField() const {
  return field_;
}

void DescribeLiveGrtnTrafficUsageRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

std::string DescribeLiveGrtnTrafficUsageRequest::getAppId() const {
  return appId_;
}

void DescribeLiveGrtnTrafficUsageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeLiveGrtnTrafficUsageRequest::getInterval() const {
  return interval_;
}

void DescribeLiveGrtnTrafficUsageRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


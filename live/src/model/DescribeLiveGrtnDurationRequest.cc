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

#include <alibabacloud/live/model/DescribeLiveGrtnDurationRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveGrtnDurationRequest;

DescribeLiveGrtnDurationRequest::DescribeLiveGrtnDurationRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveGrtnDuration") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveGrtnDurationRequest::~DescribeLiveGrtnDurationRequest() {}

std::string DescribeLiveGrtnDurationRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveGrtnDurationRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveGrtnDurationRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveGrtnDurationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveGrtnDurationRequest::getArea() const {
  return area_;
}

void DescribeLiveGrtnDurationRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

std::string DescribeLiveGrtnDurationRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveGrtnDurationRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveGrtnDurationRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveGrtnDurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveGrtnDurationRequest::getAppId() const {
  return appId_;
}

void DescribeLiveGrtnDurationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeLiveGrtnDurationRequest::getInterval() const {
  return interval_;
}

void DescribeLiveGrtnDurationRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


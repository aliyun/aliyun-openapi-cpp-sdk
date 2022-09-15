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

#include <alibabacloud/live/model/DescribeMeterLiveRtcDurationRequest.h>

using AlibabaCloud::Live::Model::DescribeMeterLiveRtcDurationRequest;

DescribeMeterLiveRtcDurationRequest::DescribeMeterLiveRtcDurationRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeMeterLiveRtcDuration") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMeterLiveRtcDurationRequest::~DescribeMeterLiveRtcDurationRequest() {}

std::string DescribeMeterLiveRtcDurationRequest::getEndTime() const {
  return endTime_;
}

void DescribeMeterLiveRtcDurationRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMeterLiveRtcDurationRequest::getStartTime() const {
  return startTime_;
}

void DescribeMeterLiveRtcDurationRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMeterLiveRtcDurationRequest::getServiceArea() const {
  return serviceArea_;
}

void DescribeMeterLiveRtcDurationRequest::setServiceArea(const std::string &serviceArea) {
  serviceArea_ = serviceArea;
  setParameter(std::string("ServiceArea"), serviceArea);
}

std::string DescribeMeterLiveRtcDurationRequest::getAppId() const {
  return appId_;
}

void DescribeMeterLiveRtcDurationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("appId"), appId);
}

std::string DescribeMeterLiveRtcDurationRequest::getInterval() const {
  return interval_;
}

void DescribeMeterLiveRtcDurationRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


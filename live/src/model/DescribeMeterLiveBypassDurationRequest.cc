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

#include <alibabacloud/live/model/DescribeMeterLiveBypassDurationRequest.h>

using AlibabaCloud::Live::Model::DescribeMeterLiveBypassDurationRequest;

DescribeMeterLiveBypassDurationRequest::DescribeMeterLiveBypassDurationRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeMeterLiveBypassDuration") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMeterLiveBypassDurationRequest::~DescribeMeterLiveBypassDurationRequest() {}

std::string DescribeMeterLiveBypassDurationRequest::getEndTime() const {
  return endTime_;
}

void DescribeMeterLiveBypassDurationRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMeterLiveBypassDurationRequest::getStartTime() const {
  return startTime_;
}

void DescribeMeterLiveBypassDurationRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMeterLiveBypassDurationRequest::getAppId() const {
  return appId_;
}

void DescribeMeterLiveBypassDurationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeMeterLiveBypassDurationRequest::getInterval() const {
  return interval_;
}

void DescribeMeterLiveBypassDurationRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


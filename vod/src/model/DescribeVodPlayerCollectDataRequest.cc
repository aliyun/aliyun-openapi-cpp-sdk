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

#include <alibabacloud/vod/model/DescribeVodPlayerCollectDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodPlayerCollectDataRequest;

DescribeVodPlayerCollectDataRequest::DescribeVodPlayerCollectDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodPlayerCollectData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodPlayerCollectDataRequest::~DescribeVodPlayerCollectDataRequest() {}

std::string DescribeVodPlayerCollectDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodPlayerCollectDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodPlayerCollectDataRequest::getPeriod() const {
  return period_;
}

void DescribeVodPlayerCollectDataRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeVodPlayerCollectDataRequest::getOs() const {
  return os_;
}

void DescribeVodPlayerCollectDataRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

std::string DescribeVodPlayerCollectDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodPlayerCollectDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeVodPlayerCollectDataRequest::getAppId() const {
  return appId_;
}

void DescribeVodPlayerCollectDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeVodPlayerCollectDataRequest::getInterval() const {
  return interval_;
}

void DescribeVodPlayerCollectDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeVodPlayerCollectDataRequest::getMetrics() const {
  return metrics_;
}

void DescribeVodPlayerCollectDataRequest::setMetrics(const std::string &metrics) {
  metrics_ = metrics;
  setParameter(std::string("Metrics"), metrics);
}

std::string DescribeVodPlayerCollectDataRequest::getTerminalType() const {
  return terminalType_;
}

void DescribeVodPlayerCollectDataRequest::setTerminalType(const std::string &terminalType) {
  terminalType_ = terminalType;
  setParameter(std::string("TerminalType"), terminalType);
}


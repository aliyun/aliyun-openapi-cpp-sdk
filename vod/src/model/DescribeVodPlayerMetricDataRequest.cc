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

#include <alibabacloud/vod/model/DescribeVodPlayerMetricDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodPlayerMetricDataRequest;

DescribeVodPlayerMetricDataRequest::DescribeVodPlayerMetricDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodPlayerMetricData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodPlayerMetricDataRequest::~DescribeVodPlayerMetricDataRequest() {}

std::string DescribeVodPlayerMetricDataRequest::getLanguage() const {
  return language_;
}

void DescribeVodPlayerMetricDataRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string DescribeVodPlayerMetricDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodPlayerMetricDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeVodPlayerMetricDataRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVodPlayerMetricDataRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeVodPlayerMetricDataRequest::getTop() const {
  return top_;
}

void DescribeVodPlayerMetricDataRequest::setTop(long top) {
  top_ = top;
  setParameter(std::string("Top"), std::to_string(top));
}

long DescribeVodPlayerMetricDataRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVodPlayerMetricDataRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVodPlayerMetricDataRequest::getOs() const {
  return os_;
}

void DescribeVodPlayerMetricDataRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

std::string DescribeVodPlayerMetricDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodPlayerMetricDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeVodPlayerMetricDataRequest::getFilters() const {
  return filters_;
}

void DescribeVodPlayerMetricDataRequest::setFilters(const std::string &filters) {
  filters_ = filters;
  setParameter(std::string("Filters"), filters);
}

std::string DescribeVodPlayerMetricDataRequest::getAppId() const {
  return appId_;
}

void DescribeVodPlayerMetricDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeVodPlayerMetricDataRequest::getInterval() const {
  return interval_;
}

void DescribeVodPlayerMetricDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeVodPlayerMetricDataRequest::getMetrics() const {
  return metrics_;
}

void DescribeVodPlayerMetricDataRequest::setMetrics(const std::string &metrics) {
  metrics_ = metrics;
  setParameter(std::string("Metrics"), metrics);
}

std::string DescribeVodPlayerMetricDataRequest::getTerminalType() const {
  return terminalType_;
}

void DescribeVodPlayerMetricDataRequest::setTerminalType(const std::string &terminalType) {
  terminalType_ = terminalType;
  setParameter(std::string("TerminalType"), terminalType);
}


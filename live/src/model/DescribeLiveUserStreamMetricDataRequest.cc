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

#include <alibabacloud/live/model/DescribeLiveUserStreamMetricDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveUserStreamMetricDataRequest;

DescribeLiveUserStreamMetricDataRequest::DescribeLiveUserStreamMetricDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveUserStreamMetricData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveUserStreamMetricDataRequest::~DescribeLiveUserStreamMetricDataRequest() {}

std::string DescribeLiveUserStreamMetricDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveUserStreamMetricDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeLiveUserStreamMetricDataRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveUserStreamMetricDataRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveUserStreamMetricDataRequest::getProtocol() const {
  return protocol_;
}

void DescribeLiveUserStreamMetricDataRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string DescribeLiveUserStreamMetricDataRequest::getAppName() const {
  return appName_;
}

void DescribeLiveUserStreamMetricDataRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

long DescribeLiveUserStreamMetricDataRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveUserStreamMetricDataRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveUserStreamMetricDataRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveUserStreamMetricDataRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveUserStreamMetricDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveUserStreamMetricDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveUserStreamMetricDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveUserStreamMetricDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}


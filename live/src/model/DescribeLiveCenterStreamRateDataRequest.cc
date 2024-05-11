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

#include <alibabacloud/live/model/DescribeLiveCenterStreamRateDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveCenterStreamRateDataRequest;

DescribeLiveCenterStreamRateDataRequest::DescribeLiveCenterStreamRateDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveCenterStreamRateData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveCenterStreamRateDataRequest::~DescribeLiveCenterStreamRateDataRequest() {}

std::string DescribeLiveCenterStreamRateDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveCenterStreamRateDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveCenterStreamRateDataRequest::getAppName() const {
  return appName_;
}

void DescribeLiveCenterStreamRateDataRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLiveCenterStreamRateDataRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveCenterStreamRateDataRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveCenterStreamRateDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveCenterStreamRateDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveCenterStreamRateDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveCenterStreamRateDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}


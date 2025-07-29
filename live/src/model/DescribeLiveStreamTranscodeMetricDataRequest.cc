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

#include <alibabacloud/live/model/DescribeLiveStreamTranscodeMetricDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamTranscodeMetricDataRequest;

DescribeLiveStreamTranscodeMetricDataRequest::DescribeLiveStreamTranscodeMetricDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamTranscodeMetricData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamTranscodeMetricDataRequest::~DescribeLiveStreamTranscodeMetricDataRequest() {}

std::string DescribeLiveStreamTranscodeMetricDataRequest::getNextPageToken() const {
  return nextPageToken_;
}

void DescribeLiveStreamTranscodeMetricDataRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string DescribeLiveStreamTranscodeMetricDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveStreamTranscodeMetricDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveStreamTranscodeMetricDataRequest::getAppName() const {
  return appName_;
}

void DescribeLiveStreamTranscodeMetricDataRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLiveStreamTranscodeMetricDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveStreamTranscodeMetricDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveStreamTranscodeMetricDataRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveStreamTranscodeMetricDataRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveStreamTranscodeMetricDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveStreamTranscodeMetricDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveStreamTranscodeMetricDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveStreamTranscodeMetricDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveStreamTranscodeMetricDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamTranscodeMetricDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


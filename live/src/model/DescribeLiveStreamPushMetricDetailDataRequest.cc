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

#include <alibabacloud/live/model/DescribeLiveStreamPushMetricDetailDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamPushMetricDetailDataRequest;

DescribeLiveStreamPushMetricDetailDataRequest::DescribeLiveStreamPushMetricDetailDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamPushMetricDetailData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamPushMetricDetailDataRequest::~DescribeLiveStreamPushMetricDetailDataRequest() {}

std::string DescribeLiveStreamPushMetricDetailDataRequest::getNextPageToken() const {
  return nextPageToken_;
}

void DescribeLiveStreamPushMetricDetailDataRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string DescribeLiveStreamPushMetricDetailDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveStreamPushMetricDetailDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveStreamPushMetricDetailDataRequest::getAppName() const {
  return appName_;
}

void DescribeLiveStreamPushMetricDetailDataRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLiveStreamPushMetricDetailDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveStreamPushMetricDetailDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveStreamPushMetricDetailDataRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveStreamPushMetricDetailDataRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveStreamPushMetricDetailDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveStreamPushMetricDetailDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveStreamPushMetricDetailDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveStreamPushMetricDetailDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveStreamPushMetricDetailDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamPushMetricDetailDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


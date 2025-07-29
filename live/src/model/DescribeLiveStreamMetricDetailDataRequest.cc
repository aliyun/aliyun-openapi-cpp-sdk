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

#include <alibabacloud/live/model/DescribeLiveStreamMetricDetailDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamMetricDetailDataRequest;

DescribeLiveStreamMetricDetailDataRequest::DescribeLiveStreamMetricDetailDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamMetricDetailData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamMetricDetailDataRequest::~DescribeLiveStreamMetricDetailDataRequest() {}

std::string DescribeLiveStreamMetricDetailDataRequest::getNextPageToken() const {
  return nextPageToken_;
}

void DescribeLiveStreamMetricDetailDataRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string DescribeLiveStreamMetricDetailDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveStreamMetricDetailDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveStreamMetricDetailDataRequest::getProtocol() const {
  return protocol_;
}

void DescribeLiveStreamMetricDetailDataRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string DescribeLiveStreamMetricDetailDataRequest::getAppName() const {
  return appName_;
}

void DescribeLiveStreamMetricDetailDataRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLiveStreamMetricDetailDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveStreamMetricDetailDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveStreamMetricDetailDataRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveStreamMetricDetailDataRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveStreamMetricDetailDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveStreamMetricDetailDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveStreamMetricDetailDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveStreamMetricDetailDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveStreamMetricDetailDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamMetricDetailDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


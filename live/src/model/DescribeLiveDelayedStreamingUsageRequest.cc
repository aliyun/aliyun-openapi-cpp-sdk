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

#include <alibabacloud/live/model/DescribeLiveDelayedStreamingUsageRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDelayedStreamingUsageRequest;

DescribeLiveDelayedStreamingUsageRequest::DescribeLiveDelayedStreamingUsageRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDelayedStreamingUsage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDelayedStreamingUsageRequest::~DescribeLiveDelayedStreamingUsageRequest() {}

std::string DescribeLiveDelayedStreamingUsageRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDelayedStreamingUsageRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDelayedStreamingUsageRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDelayedStreamingUsageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDelayedStreamingUsageRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveDelayedStreamingUsageRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveDelayedStreamingUsageRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeLiveDelayedStreamingUsageRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeLiveDelayedStreamingUsageRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDelayedStreamingUsageRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDelayedStreamingUsageRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDelayedStreamingUsageRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDelayedStreamingUsageRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDelayedStreamingUsageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDelayedStreamingUsageRequest::getInterval() const {
  return interval_;
}

void DescribeLiveDelayedStreamingUsageRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeLiveDelayedStreamingUsageRequest::getRegion() const {
  return region_;
}

void DescribeLiveDelayedStreamingUsageRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


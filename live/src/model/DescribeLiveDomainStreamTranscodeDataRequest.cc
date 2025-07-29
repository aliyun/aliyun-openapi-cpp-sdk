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

#include <alibabacloud/live/model/DescribeLiveDomainStreamTranscodeDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainStreamTranscodeDataRequest;

DescribeLiveDomainStreamTranscodeDataRequest::DescribeLiveDomainStreamTranscodeDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainStreamTranscodeData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainStreamTranscodeDataRequest::~DescribeLiveDomainStreamTranscodeDataRequest() {}

std::string DescribeLiveDomainStreamTranscodeDataRequest::getPrecision() const {
  return precision_;
}

void DescribeLiveDomainStreamTranscodeDataRequest::setPrecision(const std::string &precision) {
  precision_ = precision;
  setParameter(std::string("Precision"), precision);
}

std::string DescribeLiveDomainStreamTranscodeDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainStreamTranscodeDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainStreamTranscodeDataRequest::getSplit() const {
  return split_;
}

void DescribeLiveDomainStreamTranscodeDataRequest::setSplit(const std::string &split) {
  split_ = split;
  setParameter(std::string("Split"), split);
}

std::string DescribeLiveDomainStreamTranscodeDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainStreamTranscodeDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainStreamTranscodeDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainStreamTranscodeDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainStreamTranscodeDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainStreamTranscodeDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainStreamTranscodeDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainStreamTranscodeDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDomainStreamTranscodeDataRequest::getInterval() const {
  return interval_;
}

void DescribeLiveDomainStreamTranscodeDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


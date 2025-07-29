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

#include <alibabacloud/live/model/DescribeLivePushProxyUsageDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLivePushProxyUsageDataRequest;

DescribeLivePushProxyUsageDataRequest::DescribeLivePushProxyUsageDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLivePushProxyUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLivePushProxyUsageDataRequest::~DescribeLivePushProxyUsageDataRequest() {}

std::string DescribeLivePushProxyUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLivePushProxyUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLivePushProxyUsageDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLivePushProxyUsageDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLivePushProxyUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeLivePushProxyUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeLivePushProxyUsageDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLivePushProxyUsageDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLivePushProxyUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLivePushProxyUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLivePushProxyUsageDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLivePushProxyUsageDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLivePushProxyUsageDataRequest::getRegion() const {
  return region_;
}

void DescribeLivePushProxyUsageDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


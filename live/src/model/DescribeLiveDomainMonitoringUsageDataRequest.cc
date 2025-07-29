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

#include <alibabacloud/live/model/DescribeLiveDomainMonitoringUsageDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainMonitoringUsageDataRequest;

DescribeLiveDomainMonitoringUsageDataRequest::DescribeLiveDomainMonitoringUsageDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainMonitoringUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainMonitoringUsageDataRequest::~DescribeLiveDomainMonitoringUsageDataRequest() {}

std::string DescribeLiveDomainMonitoringUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainMonitoringUsageDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainMonitoringUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeLiveDomainMonitoringUsageDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainMonitoringUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainMonitoringUsageDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDomainMonitoringUsageDataRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeLiveDomainMonitoringUsageDataRequest::getInterval() const {
  return interval_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeLiveDomainMonitoringUsageDataRequest::getRegion() const {
  return region_;
}

void DescribeLiveDomainMonitoringUsageDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


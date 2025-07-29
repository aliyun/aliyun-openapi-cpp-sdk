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

#include <alibabacloud/live/model/DescribeLiveProducerUsageDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveProducerUsageDataRequest;

DescribeLiveProducerUsageDataRequest::DescribeLiveProducerUsageDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveProducerUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveProducerUsageDataRequest::~DescribeLiveProducerUsageDataRequest() {}

std::string DescribeLiveProducerUsageDataRequest::getInstance() const {
  return instance_;
}

void DescribeLiveProducerUsageDataRequest::setInstance(const std::string &instance) {
  instance_ = instance;
  setParameter(std::string("Instance"), instance);
}

std::string DescribeLiveProducerUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveProducerUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveProducerUsageDataRequest::getType() const {
  return type_;
}

void DescribeLiveProducerUsageDataRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeLiveProducerUsageDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveProducerUsageDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveProducerUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeLiveProducerUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeLiveProducerUsageDataRequest::getApp() const {
  return app_;
}

void DescribeLiveProducerUsageDataRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("app"), app);
}

std::string DescribeLiveProducerUsageDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveProducerUsageDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveProducerUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveProducerUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveProducerUsageDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveProducerUsageDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveProducerUsageDataRequest::getInterval() const {
  return interval_;
}

void DescribeLiveProducerUsageDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeLiveProducerUsageDataRequest::getRegion() const {
  return region_;
}

void DescribeLiveProducerUsageDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


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

#include <alibabacloud/cdn/model/DescribeDomainHitRateDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainHitRateDataRequest;

DescribeDomainHitRateDataRequest::DescribeDomainHitRateDataRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainHitRateData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainHitRateDataRequest::~DescribeDomainHitRateDataRequest() {}

std::string DescribeDomainHitRateDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainHitRateDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainHitRateDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainHitRateDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainHitRateDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainHitRateDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainHitRateDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainHitRateDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainHitRateDataRequest::getInterval() const {
  return interval_;
}

void DescribeDomainHitRateDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


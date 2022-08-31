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

#include <alibabacloud/cdn/model/DescribeDomainReqHitRateDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainReqHitRateDataRequest;

DescribeDomainReqHitRateDataRequest::DescribeDomainReqHitRateDataRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainReqHitRateData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainReqHitRateDataRequest::~DescribeDomainReqHitRateDataRequest() {}

std::string DescribeDomainReqHitRateDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainReqHitRateDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainReqHitRateDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainReqHitRateDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainReqHitRateDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainReqHitRateDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainReqHitRateDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainReqHitRateDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainReqHitRateDataRequest::getInterval() const {
  return interval_;
}

void DescribeDomainReqHitRateDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


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

#include <alibabacloud/scdn/model/DescribeScdnDomainHitRateDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainHitRateDataRequest;

DescribeScdnDomainHitRateDataRequest::DescribeScdnDomainHitRateDataRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainHitRateData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainHitRateDataRequest::~DescribeScdnDomainHitRateDataRequest() {}

std::string DescribeScdnDomainHitRateDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainHitRateDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnDomainHitRateDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnDomainHitRateDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnDomainHitRateDataRequest::getInterval() const {
  return interval_;
}

void DescribeScdnDomainHitRateDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeScdnDomainHitRateDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDomainHitRateDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}


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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainMultiUsageDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainMultiUsageDataRequest;

DescribeDcdnDomainMultiUsageDataRequest::DescribeDcdnDomainMultiUsageDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainMultiUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainMultiUsageDataRequest::~DescribeDcdnDomainMultiUsageDataRequest() {}

std::string DescribeDcdnDomainMultiUsageDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainMultiUsageDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainMultiUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainMultiUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainMultiUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainMultiUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}


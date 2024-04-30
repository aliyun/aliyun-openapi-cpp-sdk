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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainIpaConnDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainIpaConnDataRequest;

DescribeDcdnDomainIpaConnDataRequest::DescribeDcdnDomainIpaConnDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainIpaConnData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainIpaConnDataRequest::~DescribeDcdnDomainIpaConnDataRequest() {}

std::string DescribeDcdnDomainIpaConnDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainIpaConnDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainIpaConnDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainIpaConnDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainIpaConnDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainIpaConnDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainIpaConnDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeDcdnDomainIpaConnDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}


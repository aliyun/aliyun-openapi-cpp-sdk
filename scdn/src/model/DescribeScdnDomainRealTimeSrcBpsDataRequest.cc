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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeSrcBpsDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeSrcBpsDataRequest;

DescribeScdnDomainRealTimeSrcBpsDataRequest::DescribeScdnDomainRealTimeSrcBpsDataRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeSrcBpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainRealTimeSrcBpsDataRequest::~DescribeScdnDomainRealTimeSrcBpsDataRequest() {}

std::string DescribeScdnDomainRealTimeSrcBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainRealTimeSrcBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnDomainRealTimeSrcBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnDomainRealTimeSrcBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnDomainRealTimeSrcBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDomainRealTimeSrcBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}


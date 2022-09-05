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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeSrcTrafficDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeSrcTrafficDataRequest;

DescribeDomainRealTimeSrcTrafficDataRequest::DescribeDomainRealTimeSrcTrafficDataRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainRealTimeSrcTrafficData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainRealTimeSrcTrafficDataRequest::~DescribeDomainRealTimeSrcTrafficDataRequest() {}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainRealTimeSrcTrafficDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


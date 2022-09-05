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

#include <alibabacloud/cdn/model/DescribeDomainSrcHttpCodeDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainSrcHttpCodeDataRequest;

DescribeDomainSrcHttpCodeDataRequest::DescribeDomainSrcHttpCodeDataRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainSrcHttpCodeData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainSrcHttpCodeDataRequest::~DescribeDomainSrcHttpCodeDataRequest() {}

std::string DescribeDomainSrcHttpCodeDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainSrcHttpCodeDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainSrcHttpCodeDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainSrcHttpCodeDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainSrcHttpCodeDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainSrcHttpCodeDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainSrcHttpCodeDataRequest::getInterval() const {
  return interval_;
}

void DescribeDomainSrcHttpCodeDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


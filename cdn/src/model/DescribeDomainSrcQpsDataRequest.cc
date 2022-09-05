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

#include <alibabacloud/cdn/model/DescribeDomainSrcQpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainSrcQpsDataRequest;

DescribeDomainSrcQpsDataRequest::DescribeDomainSrcQpsDataRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainSrcQpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainSrcQpsDataRequest::~DescribeDomainSrcQpsDataRequest() {}

std::string DescribeDomainSrcQpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainSrcQpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainSrcQpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainSrcQpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainSrcQpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainSrcQpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainSrcQpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainSrcQpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainSrcQpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeDomainSrcQpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}


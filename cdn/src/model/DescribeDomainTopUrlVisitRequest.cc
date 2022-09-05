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

#include <alibabacloud/cdn/model/DescribeDomainTopUrlVisitRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainTopUrlVisitRequest;

DescribeDomainTopUrlVisitRequest::DescribeDomainTopUrlVisitRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainTopUrlVisit") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainTopUrlVisitRequest::~DescribeDomainTopUrlVisitRequest() {}

std::string DescribeDomainTopUrlVisitRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainTopUrlVisitRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainTopUrlVisitRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainTopUrlVisitRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainTopUrlVisitRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainTopUrlVisitRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainTopUrlVisitRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainTopUrlVisitRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainTopUrlVisitRequest::getSortBy() const {
  return sortBy_;
}

void DescribeDomainTopUrlVisitRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}


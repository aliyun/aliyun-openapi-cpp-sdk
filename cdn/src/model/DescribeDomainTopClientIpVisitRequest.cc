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

#include <alibabacloud/cdn/model/DescribeDomainTopClientIpVisitRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainTopClientIpVisitRequest;

DescribeDomainTopClientIpVisitRequest::DescribeDomainTopClientIpVisitRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainTopClientIpVisit") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainTopClientIpVisitRequest::~DescribeDomainTopClientIpVisitRequest() {}

std::string DescribeDomainTopClientIpVisitRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDomainTopClientIpVisitRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDomainTopClientIpVisitRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainTopClientIpVisitRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainTopClientIpVisitRequest::getLimit() const {
  return limit_;
}

void DescribeDomainTopClientIpVisitRequest::setLimit(const std::string &limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), limit);
}

std::string DescribeDomainTopClientIpVisitRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainTopClientIpVisitRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainTopClientIpVisitRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainTopClientIpVisitRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainTopClientIpVisitRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainTopClientIpVisitRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainTopClientIpVisitRequest::getSortBy() const {
  return sortBy_;
}

void DescribeDomainTopClientIpVisitRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}


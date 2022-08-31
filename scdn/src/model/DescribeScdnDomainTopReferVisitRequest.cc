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

#include <alibabacloud/scdn/model/DescribeScdnDomainTopReferVisitRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainTopReferVisitRequest;

DescribeScdnDomainTopReferVisitRequest::DescribeScdnDomainTopReferVisitRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainTopReferVisit") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainTopReferVisitRequest::~DescribeScdnDomainTopReferVisitRequest() {}

std::string DescribeScdnDomainTopReferVisitRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainTopReferVisitRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnDomainTopReferVisitRequest::getSortBy() const {
  return sortBy_;
}

void DescribeScdnDomainTopReferVisitRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string DescribeScdnDomainTopReferVisitRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDomainTopReferVisitRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}


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

#include <alibabacloud/scdn/model/DescribeScdnCcTopUrlRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnCcTopUrlRequest;

DescribeScdnCcTopUrlRequest::DescribeScdnCcTopUrlRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnCcTopUrl") {
  setMethod(HttpRequest::Method::Get);
}

DescribeScdnCcTopUrlRequest::~DescribeScdnCcTopUrlRequest() {}

std::string DescribeScdnCcTopUrlRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnCcTopUrlRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnCcTopUrlRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScdnCcTopUrlRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeScdnCcTopUrlRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnCcTopUrlRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnCcTopUrlRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnCcTopUrlRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeScdnCcTopUrlRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScdnCcTopUrlRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}


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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainLogRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainLogRequest;

DescribeDcdnDomainLogRequest::DescribeDcdnDomainLogRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainLogRequest::~DescribeDcdnDomainLogRequest() {}

std::string DescribeDcdnDomainLogRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainLogRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDcdnDomainLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnDomainLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDcdnDomainLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeDcdnDomainLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnDomainLogRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


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

#include <alibabacloud/scdn/model/DescribeScdnDomainLogRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainLogRequest;

DescribeScdnDomainLogRequest::DescribeScdnDomainLogRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainLogRequest::~DescribeScdnDomainLogRequest() {}

std::string DescribeScdnDomainLogRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainLogRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeScdnDomainLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScdnDomainLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScdnDomainLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnDomainLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnDomainLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDomainLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeScdnDomainLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScdnDomainLogRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


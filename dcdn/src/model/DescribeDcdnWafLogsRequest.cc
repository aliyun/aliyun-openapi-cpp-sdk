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

#include <alibabacloud/dcdn/model/DescribeDcdnWafLogsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnWafLogsRequest;

DescribeDcdnWafLogsRequest::DescribeDcdnWafLogsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnWafLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnWafLogsRequest::~DescribeDcdnWafLogsRequest() {}

std::string DescribeDcdnWafLogsRequest::getLogType() const {
  return logType_;
}

void DescribeDcdnWafLogsRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setParameter(std::string("LogType"), logType);
}

std::string DescribeDcdnWafLogsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnWafLogsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDcdnWafLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnWafLogsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDcdnWafLogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnWafLogsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnWafLogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnWafLogsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeDcdnWafLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnWafLogsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


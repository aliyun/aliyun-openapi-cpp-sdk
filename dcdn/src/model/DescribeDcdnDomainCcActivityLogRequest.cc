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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainCcActivityLogRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainCcActivityLogRequest;

DescribeDcdnDomainCcActivityLogRequest::DescribeDcdnDomainCcActivityLogRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainCcActivityLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainCcActivityLogRequest::~DescribeDcdnDomainCcActivityLogRequest() {}

std::string DescribeDcdnDomainCcActivityLogRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainCcActivityLogRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDcdnDomainCcActivityLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnDomainCcActivityLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDcdnDomainCcActivityLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainCcActivityLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainCcActivityLogRequest::getRuleName() const {
  return ruleName_;
}

void DescribeDcdnDomainCcActivityLogRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DescribeDcdnDomainCcActivityLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainCcActivityLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainCcActivityLogRequest::getTriggerObject() const {
  return triggerObject_;
}

void DescribeDcdnDomainCcActivityLogRequest::setTriggerObject(const std::string &triggerObject) {
  triggerObject_ = triggerObject;
  setParameter(std::string("TriggerObject"), triggerObject);
}

std::string DescribeDcdnDomainCcActivityLogRequest::getValue() const {
  return value_;
}

void DescribeDcdnDomainCcActivityLogRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

long DescribeDcdnDomainCcActivityLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnDomainCcActivityLogRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


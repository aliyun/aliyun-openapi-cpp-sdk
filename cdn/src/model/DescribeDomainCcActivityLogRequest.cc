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

#include <alibabacloud/cdn/model/DescribeDomainCcActivityLogRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainCcActivityLogRequest;

DescribeDomainCcActivityLogRequest::DescribeDomainCcActivityLogRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainCcActivityLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainCcActivityLogRequest::~DescribeDomainCcActivityLogRequest() {}

std::string DescribeDomainCcActivityLogRequest::getRuleName() const {
  return ruleName_;
}

void DescribeDomainCcActivityLogRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DescribeDomainCcActivityLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainCcActivityLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainCcActivityLogRequest::getTriggerObject() const {
  return triggerObject_;
}

void DescribeDomainCcActivityLogRequest::setTriggerObject(const std::string &triggerObject) {
  triggerObject_ = triggerObject;
  setParameter(std::string("TriggerObject"), triggerObject);
}

long DescribeDomainCcActivityLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainCcActivityLogRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeDomainCcActivityLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainCcActivityLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDomainCcActivityLogRequest::getValue() const {
  return value_;
}

void DescribeDomainCcActivityLogRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string DescribeDomainCcActivityLogRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainCcActivityLogRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainCcActivityLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainCcActivityLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainCcActivityLogRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainCcActivityLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


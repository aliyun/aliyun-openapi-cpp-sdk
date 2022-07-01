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

#include <alibabacloud/ddoscoo/model/DescribeDomainAttackEventsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDomainAttackEventsRequest;

DescribeDomainAttackEventsRequest::DescribeDomainAttackEventsRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDomainAttackEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainAttackEventsRequest::~DescribeDomainAttackEventsRequest() {}

long DescribeDomainAttackEventsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainAttackEventsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeDomainAttackEventsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainAttackEventsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDomainAttackEventsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDomainAttackEventsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDomainAttackEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainAttackEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDomainAttackEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainAttackEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeDomainAttackEventsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainAttackEventsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeDomainAttackEventsRequest::getDomain() const {
  return domain_;
}

void DescribeDomainAttackEventsRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}


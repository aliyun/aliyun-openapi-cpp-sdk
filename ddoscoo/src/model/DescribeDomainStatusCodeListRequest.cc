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

#include <alibabacloud/ddoscoo/model/DescribeDomainStatusCodeListRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDomainStatusCodeListRequest;

DescribeDomainStatusCodeListRequest::DescribeDomainStatusCodeListRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDomainStatusCodeList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainStatusCodeListRequest::~DescribeDomainStatusCodeListRequest() {}

long DescribeDomainStatusCodeListRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainStatusCodeListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDomainStatusCodeListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDomainStatusCodeListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDomainStatusCodeListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainStatusCodeListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDomainStatusCodeListRequest::getQueryType() const {
  return queryType_;
}

void DescribeDomainStatusCodeListRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

long DescribeDomainStatusCodeListRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainStatusCodeListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeDomainStatusCodeListRequest::getDomain() const {
  return domain_;
}

void DescribeDomainStatusCodeListRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

long DescribeDomainStatusCodeListRequest::getInterval() const {
  return interval_;
}

void DescribeDomainStatusCodeListRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}


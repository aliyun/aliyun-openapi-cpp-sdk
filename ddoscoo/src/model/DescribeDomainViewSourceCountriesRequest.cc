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

#include <alibabacloud/ddoscoo/model/DescribeDomainViewSourceCountriesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDomainViewSourceCountriesRequest;

DescribeDomainViewSourceCountriesRequest::DescribeDomainViewSourceCountriesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDomainViewSourceCountries") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainViewSourceCountriesRequest::~DescribeDomainViewSourceCountriesRequest() {}

long DescribeDomainViewSourceCountriesRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainViewSourceCountriesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeDomainViewSourceCountriesRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainViewSourceCountriesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDomainViewSourceCountriesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDomainViewSourceCountriesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDomainViewSourceCountriesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainViewSourceCountriesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDomainViewSourceCountriesRequest::getDomain() const {
  return domain_;
}

void DescribeDomainViewSourceCountriesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}


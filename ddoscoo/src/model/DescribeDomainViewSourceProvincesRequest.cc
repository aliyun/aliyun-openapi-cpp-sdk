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

#include <alibabacloud/ddoscoo/model/DescribeDomainViewSourceProvincesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDomainViewSourceProvincesRequest;

DescribeDomainViewSourceProvincesRequest::DescribeDomainViewSourceProvincesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDomainViewSourceProvinces") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainViewSourceProvincesRequest::~DescribeDomainViewSourceProvincesRequest() {}

long DescribeDomainViewSourceProvincesRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainViewSourceProvincesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeDomainViewSourceProvincesRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainViewSourceProvincesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDomainViewSourceProvincesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDomainViewSourceProvincesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDomainViewSourceProvincesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainViewSourceProvincesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDomainViewSourceProvincesRequest::getDomain() const {
  return domain_;
}

void DescribeDomainViewSourceProvincesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}


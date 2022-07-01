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

#include <alibabacloud/ddoscoo/model/DescribeDomainResourceRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDomainResourceRequest;

DescribeDomainResourceRequest::DescribeDomainResourceRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDomainResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainResourceRequest::~DescribeDomainResourceRequest() {}

int DescribeDomainResourceRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainResourceRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDomainResourceRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainResourceRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDomainResourceRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainResourceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<std::string> DescribeDomainResourceRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeDomainResourceRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

std::string DescribeDomainResourceRequest::getQueryDomainPattern() const {
  return queryDomainPattern_;
}

void DescribeDomainResourceRequest::setQueryDomainPattern(const std::string &queryDomainPattern) {
  queryDomainPattern_ = queryDomainPattern;
  setParameter(std::string("QueryDomainPattern"), queryDomainPattern);
}

std::string DescribeDomainResourceRequest::getDomain() const {
  return domain_;
}

void DescribeDomainResourceRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}


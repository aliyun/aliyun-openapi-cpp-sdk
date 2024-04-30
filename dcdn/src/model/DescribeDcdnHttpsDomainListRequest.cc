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

#include <alibabacloud/dcdn/model/DescribeDcdnHttpsDomainListRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnHttpsDomainListRequest;

DescribeDcdnHttpsDomainListRequest::DescribeDcdnHttpsDomainListRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnHttpsDomainList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnHttpsDomainListRequest::~DescribeDcdnHttpsDomainListRequest() {}

int DescribeDcdnHttpsDomainListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnHttpsDomainListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDcdnHttpsDomainListRequest::getKeyword() const {
  return keyword_;
}

void DescribeDcdnHttpsDomainListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

int DescribeDcdnHttpsDomainListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnHttpsDomainListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


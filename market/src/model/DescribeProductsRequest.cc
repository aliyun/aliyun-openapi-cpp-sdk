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

#include <alibabacloud/market/model/DescribeProductsRequest.h>

using AlibabaCloud::Market::Model::DescribeProductsRequest;

DescribeProductsRequest::DescribeProductsRequest()
    : RpcServiceRequest("market", "2015-11-01", "DescribeProducts") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProductsRequest::~DescribeProductsRequest() {}

std::string DescribeProductsRequest::getSearchTerm() const {
  return searchTerm_;
}

void DescribeProductsRequest::setSearchTerm(const std::string &searchTerm) {
  searchTerm_ = searchTerm;
  setParameter(std::string("SearchTerm"), searchTerm);
}

int DescribeProductsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeProductsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::vector<DescribeProductsRequest::Filter> DescribeProductsRequest::getFilter() const {
  return filter_;
}

void DescribeProductsRequest::setFilter(const std::vector<DescribeProductsRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Value", filterObj.value);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

int DescribeProductsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeProductsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}


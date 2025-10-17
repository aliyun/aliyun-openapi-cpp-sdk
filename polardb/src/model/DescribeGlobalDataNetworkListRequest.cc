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

#include <alibabacloud/polardb/model/DescribeGlobalDataNetworkListRequest.h>

using AlibabaCloud::Polardb::Model::DescribeGlobalDataNetworkListRequest;

DescribeGlobalDataNetworkListRequest::DescribeGlobalDataNetworkListRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeGlobalDataNetworkList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGlobalDataNetworkListRequest::~DescribeGlobalDataNetworkListRequest() {}

long DescribeGlobalDataNetworkListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGlobalDataNetworkListRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGlobalDataNetworkListRequest::getNextToken() const {
  return nextToken_;
}

void DescribeGlobalDataNetworkListRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long DescribeGlobalDataNetworkListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGlobalDataNetworkListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeGlobalDataNetworkListRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeGlobalDataNetworkListRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}


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

#include <alibabacloud/sas/model/DescribeAccesskeyLeakListRequest.h>

using AlibabaCloud::Sas::Model::DescribeAccesskeyLeakListRequest;

DescribeAccesskeyLeakListRequest::DescribeAccesskeyLeakListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeAccesskeyLeakList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccesskeyLeakListRequest::~DescribeAccesskeyLeakListRequest() {}

long DescribeAccesskeyLeakListRequest::getStartTs() const {
  return startTs_;
}

void DescribeAccesskeyLeakListRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

std::string DescribeAccesskeyLeakListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAccesskeyLeakListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeAccesskeyLeakListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAccesskeyLeakListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAccesskeyLeakListRequest::getQuery() const {
  return query_;
}

void DescribeAccesskeyLeakListRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

int DescribeAccesskeyLeakListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeAccesskeyLeakListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeAccesskeyLeakListRequest::getStatus() const {
  return status_;
}

void DescribeAccesskeyLeakListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


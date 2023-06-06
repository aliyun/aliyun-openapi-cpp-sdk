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

#include <alibabacloud/sas/model/DescribeWebLockFileChangeStatisticsRequest.h>

using AlibabaCloud::Sas::Model::DescribeWebLockFileChangeStatisticsRequest;

DescribeWebLockFileChangeStatisticsRequest::DescribeWebLockFileChangeStatisticsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeWebLockFileChangeStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebLockFileChangeStatisticsRequest::~DescribeWebLockFileChangeStatisticsRequest() {}

std::string DescribeWebLockFileChangeStatisticsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebLockFileChangeStatisticsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeWebLockFileChangeStatisticsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWebLockFileChangeStatisticsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeWebLockFileChangeStatisticsRequest::getTsEnd() const {
  return tsEnd_;
}

void DescribeWebLockFileChangeStatisticsRequest::setTsEnd(long tsEnd) {
  tsEnd_ = tsEnd;
  setParameter(std::string("TsEnd"), std::to_string(tsEnd));
}

int DescribeWebLockFileChangeStatisticsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeWebLockFileChangeStatisticsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeWebLockFileChangeStatisticsRequest::getTsBegin() const {
  return tsBegin_;
}

void DescribeWebLockFileChangeStatisticsRequest::setTsBegin(long tsBegin) {
  tsBegin_ = tsBegin;
  setParameter(std::string("TsBegin"), std::to_string(tsBegin));
}


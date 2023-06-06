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

#include <alibabacloud/sas/model/DescribeWebLockProcessListRequest.h>

using AlibabaCloud::Sas::Model::DescribeWebLockProcessListRequest;

DescribeWebLockProcessListRequest::DescribeWebLockProcessListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeWebLockProcessList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebLockProcessListRequest::~DescribeWebLockProcessListRequest() {}

std::string DescribeWebLockProcessListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebLockProcessListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeWebLockProcessListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWebLockProcessListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeWebLockProcessListRequest::getProcessName() const {
  return processName_;
}

void DescribeWebLockProcessListRequest::setProcessName(const std::string &processName) {
  processName_ = processName;
  setParameter(std::string("ProcessName"), processName);
}

int DescribeWebLockProcessListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeWebLockProcessListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int DescribeWebLockProcessListRequest::getStatus() const {
  return status_;
}

void DescribeWebLockProcessListRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


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

#include <alibabacloud/sas/model/DescribeImageFixTaskRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageFixTaskRequest;

DescribeImageFixTaskRequest::DescribeImageFixTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageFixTask") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageFixTaskRequest::~DescribeImageFixTaskRequest() {}

long DescribeImageFixTaskRequest::getStartTime() const {
  return startTime_;
}

void DescribeImageFixTaskRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeImageFixTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageFixTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeImageFixTaskRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageFixTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeImageFixTaskRequest::getEndTime() const {
  return endTime_;
}

void DescribeImageFixTaskRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeImageFixTaskRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageFixTaskRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeImageFixTaskRequest::getStatus() const {
  return status_;
}

void DescribeImageFixTaskRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


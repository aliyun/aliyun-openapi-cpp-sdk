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

#include <alibabacloud/sas/model/DescribeWebLockFileEventsRequest.h>

using AlibabaCloud::Sas::Model::DescribeWebLockFileEventsRequest;

DescribeWebLockFileEventsRequest::DescribeWebLockFileEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeWebLockFileEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebLockFileEventsRequest::~DescribeWebLockFileEventsRequest() {}

std::string DescribeWebLockFileEventsRequest::getRemark() const {
  return remark_;
}

void DescribeWebLockFileEventsRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeWebLockFileEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebLockFileEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeWebLockFileEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWebLockFileEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeWebLockFileEventsRequest::getTsEnd() const {
  return tsEnd_;
}

void DescribeWebLockFileEventsRequest::setTsEnd(long tsEnd) {
  tsEnd_ = tsEnd;
  setParameter(std::string("TsEnd"), std::to_string(tsEnd));
}

std::string DescribeWebLockFileEventsRequest::getProcessName() const {
  return processName_;
}

void DescribeWebLockFileEventsRequest::setProcessName(const std::string &processName) {
  processName_ = processName;
  setParameter(std::string("ProcessName"), processName);
}

int DescribeWebLockFileEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeWebLockFileEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeWebLockFileEventsRequest::getDealed() const {
  return dealed_;
}

void DescribeWebLockFileEventsRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

long DescribeWebLockFileEventsRequest::getTsBegin() const {
  return tsBegin_;
}

void DescribeWebLockFileEventsRequest::setTsBegin(long tsBegin) {
  tsBegin_ = tsBegin;
  setParameter(std::string("TsBegin"), std::to_string(tsBegin));
}


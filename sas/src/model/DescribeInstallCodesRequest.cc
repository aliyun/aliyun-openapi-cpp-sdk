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

#include <alibabacloud/sas/model/DescribeInstallCodesRequest.h>

using AlibabaCloud::Sas::Model::DescribeInstallCodesRequest;

DescribeInstallCodesRequest::DescribeInstallCodesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeInstallCodes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstallCodesRequest::~DescribeInstallCodesRequest() {}

std::string DescribeInstallCodesRequest::getSubAccountName() const {
  return subAccountName_;
}

void DescribeInstallCodesRequest::setSubAccountName(const std::string &subAccountName) {
  subAccountName_ = subAccountName;
  setParameter(std::string("SubAccountName"), subAccountName);
}

std::string DescribeInstallCodesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstallCodesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeInstallCodesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstallCodesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeInstallCodesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeInstallCodesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int DescribeInstallCodesRequest::getStatus() const {
  return status_;
}

void DescribeInstallCodesRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


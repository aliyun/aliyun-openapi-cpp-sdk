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

#include <alibabacloud/sas/model/DescribeLoginBaseConfigsRequest.h>

using AlibabaCloud::Sas::Model::DescribeLoginBaseConfigsRequest;

DescribeLoginBaseConfigsRequest::DescribeLoginBaseConfigsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeLoginBaseConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLoginBaseConfigsRequest::~DescribeLoginBaseConfigsRequest() {}

std::string DescribeLoginBaseConfigsRequest::getType() const {
  return type_;
}

void DescribeLoginBaseConfigsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeLoginBaseConfigsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeLoginBaseConfigsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeLoginBaseConfigsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLoginBaseConfigsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeLoginBaseConfigsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeLoginBaseConfigsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeLoginBaseConfigsRequest::getTarget() const {
  return target_;
}

void DescribeLoginBaseConfigsRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}


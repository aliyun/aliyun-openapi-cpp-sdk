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

#include <alibabacloud/sas/model/DescribeWebPathRequest.h>

using AlibabaCloud::Sas::Model::DescribeWebPathRequest;

DescribeWebPathRequest::DescribeWebPathRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeWebPath") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebPathRequest::~DescribeWebPathRequest() {}

std::string DescribeWebPathRequest::getType() const {
  return type_;
}

void DescribeWebPathRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeWebPathRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebPathRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeWebPathRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWebPathRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeWebPathRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeWebPathRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeWebPathRequest::getTarget() const {
  return target_;
}

void DescribeWebPathRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}


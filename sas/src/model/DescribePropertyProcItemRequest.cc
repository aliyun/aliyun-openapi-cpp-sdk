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

#include <alibabacloud/sas/model/DescribePropertyProcItemRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyProcItemRequest;

DescribePropertyProcItemRequest::DescribePropertyProcItemRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribePropertyProcItem") {
  setMethod(HttpRequest::Method::Post);
}

DescribePropertyProcItemRequest::~DescribePropertyProcItemRequest() {}

std::string DescribePropertyProcItemRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePropertyProcItemRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePropertyProcItemRequest::getPageSize() const {
  return pageSize_;
}

void DescribePropertyProcItemRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribePropertyProcItemRequest::getForceFlush() const {
  return forceFlush_;
}

void DescribePropertyProcItemRequest::setForceFlush(bool forceFlush) {
  forceFlush_ = forceFlush;
  setParameter(std::string("ForceFlush"), forceFlush ? "true" : "false");
}

int DescribePropertyProcItemRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePropertyProcItemRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribePropertyProcItemRequest::getName() const {
  return name_;
}

void DescribePropertyProcItemRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


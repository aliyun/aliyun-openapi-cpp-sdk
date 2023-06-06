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

#include <alibabacloud/sas/model/DescribePropertyCronItemRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyCronItemRequest;

DescribePropertyCronItemRequest::DescribePropertyCronItemRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribePropertyCronItem") {
  setMethod(HttpRequest::Method::Post);
}

DescribePropertyCronItemRequest::~DescribePropertyCronItemRequest() {}

std::string DescribePropertyCronItemRequest::getSource() const {
  return source_;
}

void DescribePropertyCronItemRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string DescribePropertyCronItemRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePropertyCronItemRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePropertyCronItemRequest::getPageSize() const {
  return pageSize_;
}

void DescribePropertyCronItemRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribePropertyCronItemRequest::getForceFlush() const {
  return forceFlush_;
}

void DescribePropertyCronItemRequest::setForceFlush(bool forceFlush) {
  forceFlush_ = forceFlush;
  setParameter(std::string("ForceFlush"), forceFlush ? "true" : "false");
}

int DescribePropertyCronItemRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePropertyCronItemRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}


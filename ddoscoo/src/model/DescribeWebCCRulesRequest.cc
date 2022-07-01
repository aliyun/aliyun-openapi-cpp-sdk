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

#include <alibabacloud/ddoscoo/model/DescribeWebCCRulesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeWebCCRulesRequest;

DescribeWebCCRulesRequest::DescribeWebCCRulesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeWebCCRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebCCRulesRequest::~DescribeWebCCRulesRequest() {}

bool DescribeWebCCRulesRequest::getIsOffset() const {
  return isOffset_;
}

void DescribeWebCCRulesRequest::setIsOffset(bool isOffset) {
  isOffset_ = isOffset;
  setParameter(std::string("IsOffset"), isOffset ? "true" : "false");
}

int DescribeWebCCRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeWebCCRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeWebCCRulesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeWebCCRulesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeWebCCRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebCCRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeWebCCRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWebCCRulesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

int DescribeWebCCRulesRequest::getOffset() const {
  return offset_;
}

void DescribeWebCCRulesRequest::setOffset(int offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

std::string DescribeWebCCRulesRequest::getDomain() const {
  return domain_;
}

void DescribeWebCCRulesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}


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

#include <alibabacloud/ddoscoo/model/DescribeSchedulerRulesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeSchedulerRulesRequest;

DescribeSchedulerRulesRequest::DescribeSchedulerRulesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeSchedulerRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSchedulerRulesRequest::~DescribeSchedulerRulesRequest() {}

bool DescribeSchedulerRulesRequest::getIsOffset() const {
  return isOffset_;
}

void DescribeSchedulerRulesRequest::setIsOffset(bool isOffset) {
  isOffset_ = isOffset;
  setParameter(std::string("IsOffset"), isOffset ? "true" : "false");
}

std::string DescribeSchedulerRulesRequest::getRuleName() const {
  return ruleName_;
}

void DescribeSchedulerRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

int DescribeSchedulerRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSchedulerRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSchedulerRulesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSchedulerRulesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSchedulerRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSchedulerRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeSchedulerRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSchedulerRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeSchedulerRulesRequest::getOffset() const {
  return offset_;
}

void DescribeSchedulerRulesRequest::setOffset(int offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}


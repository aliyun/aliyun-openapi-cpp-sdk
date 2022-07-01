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

#include <alibabacloud/ddoscoo/model/DescribeWebRulesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeWebRulesRequest;

DescribeWebRulesRequest::DescribeWebRulesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeWebRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebRulesRequest::~DescribeWebRulesRequest() {}

std::string DescribeWebRulesRequest::getCname() const {
  return cname_;
}

void DescribeWebRulesRequest::setCname(const std::string &cname) {
  cname_ = cname;
  setParameter(std::string("Cname"), cname);
}

int DescribeWebRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeWebRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeWebRulesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeWebRulesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeWebRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeWebRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWebRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<std::string> DescribeWebRulesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeWebRulesRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

std::string DescribeWebRulesRequest::getQueryDomainPattern() const {
  return queryDomainPattern_;
}

void DescribeWebRulesRequest::setQueryDomainPattern(const std::string &queryDomainPattern) {
  queryDomainPattern_ = queryDomainPattern;
  setParameter(std::string("QueryDomainPattern"), queryDomainPattern);
}

std::string DescribeWebRulesRequest::getDomain() const {
  return domain_;
}

void DescribeWebRulesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}


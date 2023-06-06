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

#include <alibabacloud/sas/model/DescribeVulListPageRequest.h>

using AlibabaCloud::Sas::Model::DescribeVulListPageRequest;

DescribeVulListPageRequest::DescribeVulListPageRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeVulListPage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVulListPageRequest::~DescribeVulListPageRequest() {}

std::string DescribeVulListPageRequest::getCveId() const {
  return cveId_;
}

void DescribeVulListPageRequest::setCveId(const std::string &cveId) {
  cveId_ = cveId;
  setParameter(std::string("CveId"), cveId);
}

std::string DescribeVulListPageRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeVulListPageRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeVulListPageRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVulListPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeVulListPageRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeVulListPageRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeVulListPageRequest::getVulNameLike() const {
  return vulNameLike_;
}

void DescribeVulListPageRequest::setVulNameLike(const std::string &vulNameLike) {
  vulNameLike_ = vulNameLike;
  setParameter(std::string("VulNameLike"), vulNameLike);
}


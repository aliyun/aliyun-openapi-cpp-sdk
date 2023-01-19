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

#include <alibabacloud/sas/model/DescribeImageRepoDetailListRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageRepoDetailListRequest;

DescribeImageRepoDetailListRequest::DescribeImageRepoDetailListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageRepoDetailList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageRepoDetailListRequest::~DescribeImageRepoDetailListRequest() {}

std::string DescribeImageRepoDetailListRequest::getCriteria() const {
  return criteria_;
}

void DescribeImageRepoDetailListRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string DescribeImageRepoDetailListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageRepoDetailListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeImageRepoDetailListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageRepoDetailListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeImageRepoDetailListRequest::getLogicalExp() const {
  return logicalExp_;
}

void DescribeImageRepoDetailListRequest::setLogicalExp(const std::string &logicalExp) {
  logicalExp_ = logicalExp;
  setParameter(std::string("LogicalExp"), logicalExp);
}

int DescribeImageRepoDetailListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageRepoDetailListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}


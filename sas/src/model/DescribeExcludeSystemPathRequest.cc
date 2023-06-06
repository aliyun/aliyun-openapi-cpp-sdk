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

#include <alibabacloud/sas/model/DescribeExcludeSystemPathRequest.h>

using AlibabaCloud::Sas::Model::DescribeExcludeSystemPathRequest;

DescribeExcludeSystemPathRequest::DescribeExcludeSystemPathRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeExcludeSystemPath") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExcludeSystemPathRequest::~DescribeExcludeSystemPathRequest() {}

long DescribeExcludeSystemPathRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeExcludeSystemPathRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeExcludeSystemPathRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeExcludeSystemPathRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeExcludeSystemPathRequest::getPageSize() const {
  return pageSize_;
}

void DescribeExcludeSystemPathRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeExcludeSystemPathRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeExcludeSystemPathRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}


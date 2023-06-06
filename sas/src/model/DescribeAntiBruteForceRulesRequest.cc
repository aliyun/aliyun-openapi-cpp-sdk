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

#include <alibabacloud/sas/model/DescribeAntiBruteForceRulesRequest.h>

using AlibabaCloud::Sas::Model::DescribeAntiBruteForceRulesRequest;

DescribeAntiBruteForceRulesRequest::DescribeAntiBruteForceRulesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeAntiBruteForceRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAntiBruteForceRulesRequest::~DescribeAntiBruteForceRulesRequest() {}

long DescribeAntiBruteForceRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAntiBruteForceRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAntiBruteForceRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAntiBruteForceRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeAntiBruteForceRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAntiBruteForceRulesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

long DescribeAntiBruteForceRulesRequest::getId() const {
  return id_;
}

void DescribeAntiBruteForceRulesRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

int DescribeAntiBruteForceRulesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeAntiBruteForceRulesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeAntiBruteForceRulesRequest::getName() const {
  return name_;
}

void DescribeAntiBruteForceRulesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


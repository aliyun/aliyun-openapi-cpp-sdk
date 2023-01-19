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

#include <alibabacloud/sas/model/DescribeUniRecoverableListRequest.h>

using AlibabaCloud::Sas::Model::DescribeUniRecoverableListRequest;

DescribeUniRecoverableListRequest::DescribeUniRecoverableListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeUniRecoverableList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUniRecoverableListRequest::~DescribeUniRecoverableListRequest() {}

long DescribeUniRecoverableListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUniRecoverableListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeUniRecoverableListRequest::getDatabase() const {
  return database_;
}

void DescribeUniRecoverableListRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeUniRecoverableListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeUniRecoverableListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeUniRecoverableListRequest::getPolicyId() const {
  return policyId_;
}

void DescribeUniRecoverableListRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), std::to_string(policyId));
}

int DescribeUniRecoverableListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeUniRecoverableListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeUniRecoverableListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeUniRecoverableListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}


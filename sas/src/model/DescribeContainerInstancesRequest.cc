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

#include <alibabacloud/sas/model/DescribeContainerInstancesRequest.h>

using AlibabaCloud::Sas::Model::DescribeContainerInstancesRequest;

DescribeContainerInstancesRequest::DescribeContainerInstancesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeContainerInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeContainerInstancesRequest::~DescribeContainerInstancesRequest() {}

std::string DescribeContainerInstancesRequest::getCriteria() const {
  return criteria_;
}

void DescribeContainerInstancesRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string DescribeContainerInstancesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeContainerInstancesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeContainerInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeContainerInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeContainerInstancesRequest::getLogicalExp() const {
  return logicalExp_;
}

void DescribeContainerInstancesRequest::setLogicalExp(const std::string &logicalExp) {
  logicalExp_ = logicalExp;
  setParameter(std::string("LogicalExp"), logicalExp);
}

int DescribeContainerInstancesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeContainerInstancesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}


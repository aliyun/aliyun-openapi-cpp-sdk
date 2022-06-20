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

#include <alibabacloud/sas/model/DescribeGroupedContainerInstancesRequest.h>

using AlibabaCloud::Sas::Model::DescribeGroupedContainerInstancesRequest;

DescribeGroupedContainerInstancesRequest::DescribeGroupedContainerInstancesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeGroupedContainerInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupedContainerInstancesRequest::~DescribeGroupedContainerInstancesRequest() {}

std::string DescribeGroupedContainerInstancesRequest::getCriteria() const {
  return criteria_;
}

void DescribeGroupedContainerInstancesRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string DescribeGroupedContainerInstancesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeGroupedContainerInstancesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeGroupedContainerInstancesRequest::getGroupField() const {
  return groupField_;
}

void DescribeGroupedContainerInstancesRequest::setGroupField(const std::string &groupField) {
  groupField_ = groupField;
  setParameter(std::string("GroupField"), groupField);
}

int DescribeGroupedContainerInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGroupedContainerInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGroupedContainerInstancesRequest::getLogicalExp() const {
  return logicalExp_;
}

void DescribeGroupedContainerInstancesRequest::setLogicalExp(const std::string &logicalExp) {
  logicalExp_ = logicalExp;
  setParameter(std::string("LogicalExp"), logicalExp);
}

std::string DescribeGroupedContainerInstancesRequest::getFieldValue() const {
  return fieldValue_;
}

void DescribeGroupedContainerInstancesRequest::setFieldValue(const std::string &fieldValue) {
  fieldValue_ = fieldValue;
  setParameter(std::string("FieldValue"), fieldValue);
}

int DescribeGroupedContainerInstancesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeGroupedContainerInstancesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}


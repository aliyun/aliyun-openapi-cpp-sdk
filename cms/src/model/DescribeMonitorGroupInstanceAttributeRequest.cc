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

#include <alibabacloud/cms/model/DescribeMonitorGroupInstanceAttributeRequest.h>

using AlibabaCloud::Cms::Model::DescribeMonitorGroupInstanceAttributeRequest;

DescribeMonitorGroupInstanceAttributeRequest::DescribeMonitorGroupInstanceAttributeRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMonitorGroupInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMonitorGroupInstanceAttributeRequest::~DescribeMonitorGroupInstanceAttributeRequest() {}

long DescribeMonitorGroupInstanceAttributeRequest::getGroupId() const {
  return groupId_;
}

void DescribeMonitorGroupInstanceAttributeRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int DescribeMonitorGroupInstanceAttributeRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMonitorGroupInstanceAttributeRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool DescribeMonitorGroupInstanceAttributeRequest::getTotal() const {
  return total_;
}

void DescribeMonitorGroupInstanceAttributeRequest::setTotal(bool total) {
  total_ = total;
  setParameter(std::string("Total"), total ? "true" : "false");
}

std::string DescribeMonitorGroupInstanceAttributeRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeMonitorGroupInstanceAttributeRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

int DescribeMonitorGroupInstanceAttributeRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMonitorGroupInstanceAttributeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMonitorGroupInstanceAttributeRequest::getCategory() const {
  return category_;
}

void DescribeMonitorGroupInstanceAttributeRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string DescribeMonitorGroupInstanceAttributeRequest::getKeyword() const {
  return keyword_;
}

void DescribeMonitorGroupInstanceAttributeRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}


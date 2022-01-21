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

#include <alibabacloud/cms/model/DescribeMonitorGroupInstancesRequest.h>

using AlibabaCloud::Cms::Model::DescribeMonitorGroupInstancesRequest;

DescribeMonitorGroupInstancesRequest::DescribeMonitorGroupInstancesRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMonitorGroupInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMonitorGroupInstancesRequest::~DescribeMonitorGroupInstancesRequest() {}

long DescribeMonitorGroupInstancesRequest::getGroupId() const {
  return groupId_;
}

void DescribeMonitorGroupInstancesRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int DescribeMonitorGroupInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMonitorGroupInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeMonitorGroupInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeMonitorGroupInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

int DescribeMonitorGroupInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMonitorGroupInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMonitorGroupInstancesRequest::getCategory() const {
  return category_;
}

void DescribeMonitorGroupInstancesRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string DescribeMonitorGroupInstancesRequest::getKeyword() const {
  return keyword_;
}

void DescribeMonitorGroupInstancesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}


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

#include <alibabacloud/cms/model/DescribeLogMonitorListRequest.h>

using AlibabaCloud::Cms::Model::DescribeLogMonitorListRequest;

DescribeLogMonitorListRequest::DescribeLogMonitorListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeLogMonitorList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLogMonitorListRequest::~DescribeLogMonitorListRequest() {}

long DescribeLogMonitorListRequest::getGroupId() const {
  return groupId_;
}

void DescribeLogMonitorListRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int DescribeLogMonitorListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLogMonitorListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeLogMonitorListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLogMonitorListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLogMonitorListRequest::getSearchValue() const {
  return searchValue_;
}

void DescribeLogMonitorListRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setParameter(std::string("SearchValue"), searchValue);
}


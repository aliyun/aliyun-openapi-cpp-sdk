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

#include <alibabacloud/cms/model/DescribeEventRuleListRequest.h>

using AlibabaCloud::Cms::Model::DescribeEventRuleListRequest;

DescribeEventRuleListRequest::DescribeEventRuleListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeEventRuleList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEventRuleListRequest::~DescribeEventRuleListRequest() {}

std::string DescribeEventRuleListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEventRuleListRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeEventRuleListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEventRuleListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeEventRuleListRequest::getNamePrefix() const {
  return namePrefix_;
}

void DescribeEventRuleListRequest::setNamePrefix(const std::string &namePrefix) {
  namePrefix_ = namePrefix;
  setParameter(std::string("NamePrefix"), namePrefix);
}

std::string DescribeEventRuleListRequest::getGroupId() const {
  return groupId_;
}

void DescribeEventRuleListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}


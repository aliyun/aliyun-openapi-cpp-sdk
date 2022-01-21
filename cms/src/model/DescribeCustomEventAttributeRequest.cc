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

#include <alibabacloud/cms/model/DescribeCustomEventAttributeRequest.h>

using AlibabaCloud::Cms::Model::DescribeCustomEventAttributeRequest;

DescribeCustomEventAttributeRequest::DescribeCustomEventAttributeRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeCustomEventAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomEventAttributeRequest::~DescribeCustomEventAttributeRequest() {}

std::string DescribeCustomEventAttributeRequest::getEventId() const {
  return eventId_;
}

void DescribeCustomEventAttributeRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

std::string DescribeCustomEventAttributeRequest::getStartTime() const {
  return startTime_;
}

void DescribeCustomEventAttributeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeCustomEventAttributeRequest::getSearchKeywords() const {
  return searchKeywords_;
}

void DescribeCustomEventAttributeRequest::setSearchKeywords(const std::string &searchKeywords) {
  searchKeywords_ = searchKeywords;
  setParameter(std::string("SearchKeywords"), searchKeywords);
}

int DescribeCustomEventAttributeRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCustomEventAttributeRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeCustomEventAttributeRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCustomEventAttributeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCustomEventAttributeRequest::getGroupId() const {
  return groupId_;
}

void DescribeCustomEventAttributeRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeCustomEventAttributeRequest::getEndTime() const {
  return endTime_;
}

void DescribeCustomEventAttributeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeCustomEventAttributeRequest::getName() const {
  return name_;
}

void DescribeCustomEventAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


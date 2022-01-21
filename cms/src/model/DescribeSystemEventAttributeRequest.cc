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

#include <alibabacloud/cms/model/DescribeSystemEventAttributeRequest.h>

using AlibabaCloud::Cms::Model::DescribeSystemEventAttributeRequest;

DescribeSystemEventAttributeRequest::DescribeSystemEventAttributeRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeSystemEventAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSystemEventAttributeRequest::~DescribeSystemEventAttributeRequest() {}

std::string DescribeSystemEventAttributeRequest::getStartTime() const {
  return startTime_;
}

void DescribeSystemEventAttributeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSystemEventAttributeRequest::getSearchKeywords() const {
  return searchKeywords_;
}

void DescribeSystemEventAttributeRequest::setSearchKeywords(const std::string &searchKeywords) {
  searchKeywords_ = searchKeywords;
  setParameter(std::string("SearchKeywords"), searchKeywords);
}

int DescribeSystemEventAttributeRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSystemEventAttributeRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeSystemEventAttributeRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSystemEventAttributeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSystemEventAttributeRequest::getProduct() const {
  return product_;
}

void DescribeSystemEventAttributeRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeSystemEventAttributeRequest::getLevel() const {
  return level_;
}

void DescribeSystemEventAttributeRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeSystemEventAttributeRequest::getGroupId() const {
  return groupId_;
}

void DescribeSystemEventAttributeRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeSystemEventAttributeRequest::getEndTime() const {
  return endTime_;
}

void DescribeSystemEventAttributeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSystemEventAttributeRequest::getName() const {
  return name_;
}

void DescribeSystemEventAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeSystemEventAttributeRequest::getEventType() const {
  return eventType_;
}

void DescribeSystemEventAttributeRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

std::string DescribeSystemEventAttributeRequest::getStatus() const {
  return status_;
}

void DescribeSystemEventAttributeRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


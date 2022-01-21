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

#include <alibabacloud/cms/model/DescribeSystemEventCountRequest.h>

using AlibabaCloud::Cms::Model::DescribeSystemEventCountRequest;

DescribeSystemEventCountRequest::DescribeSystemEventCountRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeSystemEventCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSystemEventCountRequest::~DescribeSystemEventCountRequest() {}

std::string DescribeSystemEventCountRequest::getStartTime() const {
  return startTime_;
}

void DescribeSystemEventCountRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSystemEventCountRequest::getSearchKeywords() const {
  return searchKeywords_;
}

void DescribeSystemEventCountRequest::setSearchKeywords(const std::string &searchKeywords) {
  searchKeywords_ = searchKeywords;
  setParameter(std::string("SearchKeywords"), searchKeywords);
}

std::string DescribeSystemEventCountRequest::getProduct() const {
  return product_;
}

void DescribeSystemEventCountRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeSystemEventCountRequest::getLevel() const {
  return level_;
}

void DescribeSystemEventCountRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeSystemEventCountRequest::getGroupId() const {
  return groupId_;
}

void DescribeSystemEventCountRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeSystemEventCountRequest::getEndTime() const {
  return endTime_;
}

void DescribeSystemEventCountRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSystemEventCountRequest::getName() const {
  return name_;
}

void DescribeSystemEventCountRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeSystemEventCountRequest::getEventType() const {
  return eventType_;
}

void DescribeSystemEventCountRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

std::string DescribeSystemEventCountRequest::getStatus() const {
  return status_;
}

void DescribeSystemEventCountRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


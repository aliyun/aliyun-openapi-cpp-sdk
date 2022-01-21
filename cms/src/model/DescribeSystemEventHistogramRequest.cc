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

#include <alibabacloud/cms/model/DescribeSystemEventHistogramRequest.h>

using AlibabaCloud::Cms::Model::DescribeSystemEventHistogramRequest;

DescribeSystemEventHistogramRequest::DescribeSystemEventHistogramRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeSystemEventHistogram") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSystemEventHistogramRequest::~DescribeSystemEventHistogramRequest() {}

std::string DescribeSystemEventHistogramRequest::getStartTime() const {
  return startTime_;
}

void DescribeSystemEventHistogramRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSystemEventHistogramRequest::getSearchKeywords() const {
  return searchKeywords_;
}

void DescribeSystemEventHistogramRequest::setSearchKeywords(const std::string &searchKeywords) {
  searchKeywords_ = searchKeywords;
  setParameter(std::string("SearchKeywords"), searchKeywords);
}

std::string DescribeSystemEventHistogramRequest::getProduct() const {
  return product_;
}

void DescribeSystemEventHistogramRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeSystemEventHistogramRequest::getLevel() const {
  return level_;
}

void DescribeSystemEventHistogramRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeSystemEventHistogramRequest::getGroupId() const {
  return groupId_;
}

void DescribeSystemEventHistogramRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeSystemEventHistogramRequest::getEndTime() const {
  return endTime_;
}

void DescribeSystemEventHistogramRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSystemEventHistogramRequest::getName() const {
  return name_;
}

void DescribeSystemEventHistogramRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeSystemEventHistogramRequest::getEventType() const {
  return eventType_;
}

void DescribeSystemEventHistogramRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

std::string DescribeSystemEventHistogramRequest::getStatus() const {
  return status_;
}

void DescribeSystemEventHistogramRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


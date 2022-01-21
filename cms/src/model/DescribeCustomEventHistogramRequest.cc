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

#include <alibabacloud/cms/model/DescribeCustomEventHistogramRequest.h>

using AlibabaCloud::Cms::Model::DescribeCustomEventHistogramRequest;

DescribeCustomEventHistogramRequest::DescribeCustomEventHistogramRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeCustomEventHistogram") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomEventHistogramRequest::~DescribeCustomEventHistogramRequest() {}

std::string DescribeCustomEventHistogramRequest::getEventId() const {
  return eventId_;
}

void DescribeCustomEventHistogramRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

std::string DescribeCustomEventHistogramRequest::getLevel() const {
  return level_;
}

void DescribeCustomEventHistogramRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeCustomEventHistogramRequest::getGroupId() const {
  return groupId_;
}

void DescribeCustomEventHistogramRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeCustomEventHistogramRequest::getEndTime() const {
  return endTime_;
}

void DescribeCustomEventHistogramRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeCustomEventHistogramRequest::getStartTime() const {
  return startTime_;
}

void DescribeCustomEventHistogramRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeCustomEventHistogramRequest::getSearchKeywords() const {
  return searchKeywords_;
}

void DescribeCustomEventHistogramRequest::setSearchKeywords(const std::string &searchKeywords) {
  searchKeywords_ = searchKeywords;
  setParameter(std::string("SearchKeywords"), searchKeywords);
}

std::string DescribeCustomEventHistogramRequest::getName() const {
  return name_;
}

void DescribeCustomEventHistogramRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


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

#include <alibabacloud/dcdn/model/DescribeDdosAllEventListRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDdosAllEventListRequest;

DescribeDdosAllEventListRequest::DescribeDdosAllEventListRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDdosAllEventList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDdosAllEventListRequest::~DescribeDdosAllEventListRequest() {}

int DescribeDdosAllEventListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDdosAllEventListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDdosAllEventListRequest::getEndTime() const {
  return endTime_;
}

void DescribeDdosAllEventListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDdosAllEventListRequest::getEventType() const {
  return eventType_;
}

void DescribeDdosAllEventListRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

std::string DescribeDdosAllEventListRequest::getStartTime() const {
  return startTime_;
}

void DescribeDdosAllEventListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDdosAllEventListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDdosAllEventListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


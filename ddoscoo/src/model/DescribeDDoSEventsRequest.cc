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

#include <alibabacloud/ddoscoo/model/DescribeDDoSEventsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDDoSEventsRequest;

DescribeDDoSEventsRequest::DescribeDDoSEventsRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDDoSEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDDoSEventsRequest::~DescribeDDoSEventsRequest() {}

long DescribeDDoSEventsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDDoSEventsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeDDoSEventsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDDoSEventsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDDoSEventsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDDoSEventsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDDoSEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDDoSEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDDoSEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDDoSEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeDDoSEventsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDDoSEventsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::vector<std::string> DescribeDDoSEventsRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeDDoSEventsRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}


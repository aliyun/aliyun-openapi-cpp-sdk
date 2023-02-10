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

#include <alibabacloud/eas/model/DescribeServiceEventRequest.h>

using AlibabaCloud::Eas::Model::DescribeServiceEventRequest;

DescribeServiceEventRequest::DescribeServiceEventRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services/[ClusterId]/[ServiceName]/events"};
  setMethod(HttpRequest::Method::Get);
}

DescribeServiceEventRequest::~DescribeServiceEventRequest() {}

std::string DescribeServiceEventRequest::getPageSize() const {
  return pageSize_;
}

void DescribeServiceEventRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeServiceEventRequest::getEndTime() const {
  return endTime_;
}

void DescribeServiceEventRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeServiceEventRequest::getServiceName() const {
  return serviceName_;
}

void DescribeServiceEventRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string DescribeServiceEventRequest::getClusterId() const {
  return clusterId_;
}

void DescribeServiceEventRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeServiceEventRequest::getStartTime() const {
  return startTime_;
}

void DescribeServiceEventRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeServiceEventRequest::getPageNum() const {
  return pageNum_;
}

void DescribeServiceEventRequest::setPageNum(const std::string &pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), pageNum);
}


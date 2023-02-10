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

#include <alibabacloud/eas/model/DescribeServiceLogRequest.h>

using AlibabaCloud::Eas::Model::DescribeServiceLogRequest;

DescribeServiceLogRequest::DescribeServiceLogRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services/[ClusterId]/[ServiceName]/logs"};
  setMethod(HttpRequest::Method::Get);
}

DescribeServiceLogRequest::~DescribeServiceLogRequest() {}

std::string DescribeServiceLogRequest::getIp() const {
  return ip_;
}

void DescribeServiceLogRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

long DescribeServiceLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeServiceLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeServiceLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeServiceLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeServiceLogRequest::getServiceName() const {
  return serviceName_;
}

void DescribeServiceLogRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string DescribeServiceLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeServiceLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeServiceLogRequest::getClusterId() const {
  return clusterId_;
}

void DescribeServiceLogRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long DescribeServiceLogRequest::getPageNum() const {
  return pageNum_;
}

void DescribeServiceLogRequest::setPageNum(long pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeServiceLogRequest::getKeyword() const {
  return keyword_;
}

void DescribeServiceLogRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}


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

#include <alibabacloud/cms/model/DescribeGroupMonitoringAgentProcessRequest.h>

using AlibabaCloud::Cms::Model::DescribeGroupMonitoringAgentProcessRequest;

DescribeGroupMonitoringAgentProcessRequest::DescribeGroupMonitoringAgentProcessRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeGroupMonitoringAgentProcess") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupMonitoringAgentProcessRequest::~DescribeGroupMonitoringAgentProcessRequest() {}

std::string DescribeGroupMonitoringAgentProcessRequest::getGroupId() const {
  return groupId_;
}

void DescribeGroupMonitoringAgentProcessRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeGroupMonitoringAgentProcessRequest::getProcessName() const {
  return processName_;
}

void DescribeGroupMonitoringAgentProcessRequest::setProcessName(const std::string &processName) {
  processName_ = processName;
  setParameter(std::string("ProcessName"), processName);
}

int DescribeGroupMonitoringAgentProcessRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGroupMonitoringAgentProcessRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeGroupMonitoringAgentProcessRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGroupMonitoringAgentProcessRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}


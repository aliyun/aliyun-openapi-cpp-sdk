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

#include <alibabacloud/cms/model/DescribeMonitoringAgentHostsRequest.h>

using AlibabaCloud::Cms::Model::DescribeMonitoringAgentHostsRequest;

DescribeMonitoringAgentHostsRequest::DescribeMonitoringAgentHostsRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMonitoringAgentHosts") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMonitoringAgentHostsRequest::~DescribeMonitoringAgentHostsRequest() {}

std::string DescribeMonitoringAgentHostsRequest::getSerialNumbers() const {
  return serialNumbers_;
}

void DescribeMonitoringAgentHostsRequest::setSerialNumbers(const std::string &serialNumbers) {
  serialNumbers_ = serialNumbers;
  setParameter(std::string("SerialNumbers"), serialNumbers);
}

int DescribeMonitoringAgentHostsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMonitoringAgentHostsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeMonitoringAgentHostsRequest::getHostName() const {
  return hostName_;
}

void DescribeMonitoringAgentHostsRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string DescribeMonitoringAgentHostsRequest::getInstanceRegionId() const {
  return instanceRegionId_;
}

void DescribeMonitoringAgentHostsRequest::setInstanceRegionId(const std::string &instanceRegionId) {
  instanceRegionId_ = instanceRegionId;
  setParameter(std::string("InstanceRegionId"), instanceRegionId);
}

int DescribeMonitoringAgentHostsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMonitoringAgentHostsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribeMonitoringAgentHostsRequest::getAliyunHost() const {
  return aliyunHost_;
}

void DescribeMonitoringAgentHostsRequest::setAliyunHost(bool aliyunHost) {
  aliyunHost_ = aliyunHost;
  setParameter(std::string("AliyunHost"), aliyunHost ? "true" : "false");
}

std::string DescribeMonitoringAgentHostsRequest::getKeyWord() const {
  return keyWord_;
}

void DescribeMonitoringAgentHostsRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

std::string DescribeMonitoringAgentHostsRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeMonitoringAgentHostsRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeMonitoringAgentHostsRequest::getStatus() const {
  return status_;
}

void DescribeMonitoringAgentHostsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


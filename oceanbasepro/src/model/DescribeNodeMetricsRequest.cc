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

#include <alibabacloud/oceanbasepro/model/DescribeNodeMetricsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeNodeMetricsRequest;

DescribeNodeMetricsRequest::DescribeNodeMetricsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeNodeMetrics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNodeMetricsRequest::~DescribeNodeMetricsRequest() {}

std::string DescribeNodeMetricsRequest::getStartTime() const {
  return startTime_;
}

void DescribeNodeMetricsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

int DescribeNodeMetricsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNodeMetricsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeNodeMetricsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNodeMetricsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeNodeMetricsRequest::getTenantId() const {
  return tenantId_;
}

void DescribeNodeMetricsRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeNodeMetricsRequest::getNodeIdList() const {
  return nodeIdList_;
}

void DescribeNodeMetricsRequest::setNodeIdList(const std::string &nodeIdList) {
  nodeIdList_ = nodeIdList;
  setBodyParameter(std::string("NodeIdList"), nodeIdList);
}

std::string DescribeNodeMetricsRequest::getEndTime() const {
  return endTime_;
}

void DescribeNodeMetricsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeNodeMetricsRequest::getNodeName() const {
  return nodeName_;
}

void DescribeNodeMetricsRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setBodyParameter(std::string("NodeName"), nodeName);
}

std::string DescribeNodeMetricsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeNodeMetricsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeNodeMetricsRequest::getMetrics() const {
  return metrics_;
}

void DescribeNodeMetricsRequest::setMetrics(const std::string &metrics) {
  metrics_ = metrics;
  setBodyParameter(std::string("Metrics"), metrics);
}


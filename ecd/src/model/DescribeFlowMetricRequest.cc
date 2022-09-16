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

#include <alibabacloud/ecd/model/DescribeFlowMetricRequest.h>

using AlibabaCloud::Ecd::Model::DescribeFlowMetricRequest;

DescribeFlowMetricRequest::DescribeFlowMetricRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeFlowMetric") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFlowMetricRequest::~DescribeFlowMetricRequest() {}

std::string DescribeFlowMetricRequest::getMetricType() const {
  return metricType_;
}

void DescribeFlowMetricRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

int DescribeFlowMetricRequest::getPeriod() const {
  return period_;
}

void DescribeFlowMetricRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string DescribeFlowMetricRequest::getEndTime() const {
  return endTime_;
}

void DescribeFlowMetricRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeFlowMetricRequest::getStartTime() const {
  return startTime_;
}

void DescribeFlowMetricRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeFlowMetricRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeFlowMetricRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeFlowMetricRequest::getRegionId() const {
  return regionId_;
}

void DescribeFlowMetricRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeFlowMetricRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeFlowMetricRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}


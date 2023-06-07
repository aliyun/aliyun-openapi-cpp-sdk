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

#include <alibabacloud/swas-open/model/DescribeMonitorDataRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeMonitorDataRequest;

DescribeMonitorDataRequest::DescribeMonitorDataRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeMonitorData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMonitorDataRequest::~DescribeMonitorDataRequest() {}

std::string DescribeMonitorDataRequest::getClientToken() const {
  return clientToken_;
}

void DescribeMonitorDataRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeMonitorDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeMonitorDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMonitorDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeMonitorDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeMonitorDataRequest::getNextToken() const {
  return nextToken_;
}

void DescribeMonitorDataRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeMonitorDataRequest::getMetricName() const {
  return metricName_;
}

void DescribeMonitorDataRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeMonitorDataRequest::getPeriod() const {
  return period_;
}

void DescribeMonitorDataRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeMonitorDataRequest::getLength() const {
  return length_;
}

void DescribeMonitorDataRequest::setLength(const std::string &length) {
  length_ = length;
  setParameter(std::string("Length"), length);
}

std::string DescribeMonitorDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeMonitorDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMonitorDataRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeMonitorDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


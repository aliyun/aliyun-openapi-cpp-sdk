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

#include <alibabacloud/rds/model/DescribeRCMetricListRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCMetricListRequest;

DescribeRCMetricListRequest::DescribeRCMetricListRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCMetricList") {
  setMethod(HttpRequest::Method::Get);
}

DescribeRCMetricListRequest::~DescribeRCMetricListRequest() {}

std::string DescribeRCMetricListRequest::getExpress() const {
  return express_;
}

void DescribeRCMetricListRequest::setExpress(const std::string &express) {
  express_ = express;
  setParameter(std::string("Express"), express);
}

std::string DescribeRCMetricListRequest::getStartTime() const {
  return startTime_;
}

void DescribeRCMetricListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeRCMetricListRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCMetricListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCMetricListRequest::getNextToken() const {
  return nextToken_;
}

void DescribeRCMetricListRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeRCMetricListRequest::getMetricName() const {
  return metricName_;
}

void DescribeRCMetricListRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeRCMetricListRequest::getPeriod() const {
  return period_;
}

void DescribeRCMetricListRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeRCMetricListRequest::getLength() const {
  return length_;
}

void DescribeRCMetricListRequest::setLength(const std::string &length) {
  length_ = length;
  setParameter(std::string("Length"), length);
}

std::string DescribeRCMetricListRequest::getEndTime() const {
  return endTime_;
}

void DescribeRCMetricListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeRCMetricListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRCMetricListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRCMetricListRequest::getDimensions() const {
  return dimensions_;
}

void DescribeRCMetricListRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}


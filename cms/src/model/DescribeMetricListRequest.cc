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

#include <alibabacloud/cms/model/DescribeMetricListRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricListRequest;

DescribeMetricListRequest::DescribeMetricListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMetricList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricListRequest::~DescribeMetricListRequest() {}

std::string DescribeMetricListRequest::getExpress() const {
  return express_;
}

void DescribeMetricListRequest::setExpress(const std::string &express) {
  express_ = express;
  setParameter(std::string("Express"), express);
}

std::string DescribeMetricListRequest::getStartTime() const {
  return startTime_;
}

void DescribeMetricListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMetricListRequest::getNextToken() const {
  return nextToken_;
}

void DescribeMetricListRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeMetricListRequest::getMetricName() const {
  return metricName_;
}

void DescribeMetricListRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeMetricListRequest::getPeriod() const {
  return period_;
}

void DescribeMetricListRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeMetricListRequest::getLength() const {
  return length_;
}

void DescribeMetricListRequest::setLength(const std::string &length) {
  length_ = length;
  setParameter(std::string("Length"), length);
}

std::string DescribeMetricListRequest::getEndTime() const {
  return endTime_;
}

void DescribeMetricListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMetricListRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeMetricListRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DescribeMetricListRequest::getDimensions() const {
  return dimensions_;
}

void DescribeMetricListRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}


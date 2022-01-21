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

#include <alibabacloud/cms/model/DescribeMetricLastRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricLastRequest;

DescribeMetricLastRequest::DescribeMetricLastRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMetricLast") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricLastRequest::~DescribeMetricLastRequest() {}

std::string DescribeMetricLastRequest::getExpress() const {
  return express_;
}

void DescribeMetricLastRequest::setExpress(const std::string &express) {
  express_ = express;
  setParameter(std::string("Express"), express);
}

std::string DescribeMetricLastRequest::getStartTime() const {
  return startTime_;
}

void DescribeMetricLastRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMetricLastRequest::getNextToken() const {
  return nextToken_;
}

void DescribeMetricLastRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeMetricLastRequest::getMetricName() const {
  return metricName_;
}

void DescribeMetricLastRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeMetricLastRequest::getPeriod() const {
  return period_;
}

void DescribeMetricLastRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeMetricLastRequest::getLength() const {
  return length_;
}

void DescribeMetricLastRequest::setLength(const std::string &length) {
  length_ = length;
  setParameter(std::string("Length"), length);
}

std::string DescribeMetricLastRequest::getEndTime() const {
  return endTime_;
}

void DescribeMetricLastRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMetricLastRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeMetricLastRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DescribeMetricLastRequest::getDimensions() const {
  return dimensions_;
}

void DescribeMetricLastRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}


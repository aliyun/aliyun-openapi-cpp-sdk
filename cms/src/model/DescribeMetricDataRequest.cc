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

#include <alibabacloud/cms/model/DescribeMetricDataRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricDataRequest;

DescribeMetricDataRequest::DescribeMetricDataRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMetricData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricDataRequest::~DescribeMetricDataRequest() {}

std::string DescribeMetricDataRequest::getPeriod() const {
  return period_;
}

void DescribeMetricDataRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeMetricDataRequest::getLength() const {
  return length_;
}

void DescribeMetricDataRequest::setLength(const std::string &length) {
  length_ = length;
  setParameter(std::string("Length"), length);
}

std::string DescribeMetricDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeMetricDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMetricDataRequest::getExpress() const {
  return express_;
}

void DescribeMetricDataRequest::setExpress(const std::string &express) {
  express_ = express;
  setParameter(std::string("Express"), express);
}

std::string DescribeMetricDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeMetricDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMetricDataRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeMetricDataRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DescribeMetricDataRequest::getMetricName() const {
  return metricName_;
}

void DescribeMetricDataRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeMetricDataRequest::getDimensions() const {
  return dimensions_;
}

void DescribeMetricDataRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}


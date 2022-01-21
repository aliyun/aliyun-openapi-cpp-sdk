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

#include <alibabacloud/cms/model/DescribeMetricTopRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricTopRequest;

DescribeMetricTopRequest::DescribeMetricTopRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMetricTop") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricTopRequest::~DescribeMetricTopRequest() {}

std::string DescribeMetricTopRequest::getExpress() const {
  return express_;
}

void DescribeMetricTopRequest::setExpress(const std::string &express) {
  express_ = express;
  setParameter(std::string("Express"), express);
}

std::string DescribeMetricTopRequest::getStartTime() const {
  return startTime_;
}

void DescribeMetricTopRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMetricTopRequest::getMetricName() const {
  return metricName_;
}

void DescribeMetricTopRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeMetricTopRequest::getPeriod() const {
  return period_;
}

void DescribeMetricTopRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeMetricTopRequest::getLength() const {
  return length_;
}

void DescribeMetricTopRequest::setLength(const std::string &length) {
  length_ = length;
  setParameter(std::string("Length"), length);
}

std::string DescribeMetricTopRequest::getEndTime() const {
  return endTime_;
}

void DescribeMetricTopRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMetricTopRequest::getOrderby() const {
  return orderby_;
}

void DescribeMetricTopRequest::setOrderby(const std::string &orderby) {
  orderby_ = orderby;
  setParameter(std::string("Orderby"), orderby);
}

std::string DescribeMetricTopRequest::getOrderDesc() const {
  return orderDesc_;
}

void DescribeMetricTopRequest::setOrderDesc(const std::string &orderDesc) {
  orderDesc_ = orderDesc;
  setParameter(std::string("OrderDesc"), orderDesc);
}

std::string DescribeMetricTopRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeMetricTopRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DescribeMetricTopRequest::getDimensions() const {
  return dimensions_;
}

void DescribeMetricTopRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}


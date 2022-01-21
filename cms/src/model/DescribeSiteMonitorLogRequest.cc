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

#include <alibabacloud/cms/model/DescribeSiteMonitorLogRequest.h>

using AlibabaCloud::Cms::Model::DescribeSiteMonitorLogRequest;

DescribeSiteMonitorLogRequest::DescribeSiteMonitorLogRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeSiteMonitorLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSiteMonitorLogRequest::~DescribeSiteMonitorLogRequest() {}

std::string DescribeSiteMonitorLogRequest::getCity() const {
  return city_;
}

void DescribeSiteMonitorLogRequest::setCity(const std::string &city) {
  city_ = city;
  setParameter(std::string("City"), city);
}

std::string DescribeSiteMonitorLogRequest::getIsp() const {
  return isp_;
}

void DescribeSiteMonitorLogRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string DescribeSiteMonitorLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeSiteMonitorLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSiteMonitorLogRequest::getTaskIds() const {
  return taskIds_;
}

void DescribeSiteMonitorLogRequest::setTaskIds(const std::string &taskIds) {
  taskIds_ = taskIds;
  setParameter(std::string("TaskIds"), taskIds);
}

std::string DescribeSiteMonitorLogRequest::getNextToken() const {
  return nextToken_;
}

void DescribeSiteMonitorLogRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeSiteMonitorLogRequest::getMetricName() const {
  return metricName_;
}

void DescribeSiteMonitorLogRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

int DescribeSiteMonitorLogRequest::getLength() const {
  return length_;
}

void DescribeSiteMonitorLogRequest::setLength(int length) {
  length_ = length;
  setParameter(std::string("Length"), std::to_string(length));
}

std::string DescribeSiteMonitorLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeSiteMonitorLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSiteMonitorLogRequest::getFilter() const {
  return filter_;
}

void DescribeSiteMonitorLogRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string DescribeSiteMonitorLogRequest::getDimensions() const {
  return dimensions_;
}

void DescribeSiteMonitorLogRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}


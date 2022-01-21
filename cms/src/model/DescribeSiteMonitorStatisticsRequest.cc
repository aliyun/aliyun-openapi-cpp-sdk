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

#include <alibabacloud/cms/model/DescribeSiteMonitorStatisticsRequest.h>

using AlibabaCloud::Cms::Model::DescribeSiteMonitorStatisticsRequest;

DescribeSiteMonitorStatisticsRequest::DescribeSiteMonitorStatisticsRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeSiteMonitorStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSiteMonitorStatisticsRequest::~DescribeSiteMonitorStatisticsRequest() {}

std::string DescribeSiteMonitorStatisticsRequest::getTimeRange() const {
  return timeRange_;
}

void DescribeSiteMonitorStatisticsRequest::setTimeRange(const std::string &timeRange) {
  timeRange_ = timeRange;
  setParameter(std::string("TimeRange"), timeRange);
}

std::string DescribeSiteMonitorStatisticsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSiteMonitorStatisticsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSiteMonitorStatisticsRequest::getMetricName() const {
  return metricName_;
}

void DescribeSiteMonitorStatisticsRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeSiteMonitorStatisticsRequest::getTaskId() const {
  return taskId_;
}

void DescribeSiteMonitorStatisticsRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}


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

#include <alibabacloud/oceanbasepro/model/DescribeMetricsDataRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeMetricsDataRequest;

DescribeMetricsDataRequest::DescribeMetricsDataRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeMetricsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricsDataRequest::~DescribeMetricsDataRequest() {}

std::string DescribeMetricsDataRequest::getGroupByLabels() const {
  return groupByLabels_;
}

void DescribeMetricsDataRequest::setGroupByLabels(const std::string &groupByLabels) {
  groupByLabels_ = groupByLabels;
  setParameter(std::string("GroupByLabels"), groupByLabels);
}

std::string DescribeMetricsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeMetricsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMetricsDataRequest::getLimit() const {
  return limit_;
}

void DescribeMetricsDataRequest::setLimit(const std::string &limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), limit);
}

std::string DescribeMetricsDataRequest::getSortOrder() const {
  return sortOrder_;
}

void DescribeMetricsDataRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("SortOrder"), sortOrder);
}

std::string DescribeMetricsDataRequest::getSortMetricKey() const {
  return sortMetricKey_;
}

void DescribeMetricsDataRequest::setSortMetricKey(const std::string &sortMetricKey) {
  sortMetricKey_ = sortMetricKey;
  setParameter(std::string("SortMetricKey"), sortMetricKey);
}

std::string DescribeMetricsDataRequest::getReplicaType() const {
  return replicaType_;
}

void DescribeMetricsDataRequest::setReplicaType(const std::string &replicaType) {
  replicaType_ = replicaType;
  setBodyParameter(std::string("ReplicaType"), replicaType);
}

std::string DescribeMetricsDataRequest::getMetricScope() const {
  return metricScope_;
}

void DescribeMetricsDataRequest::setMetricScope(const std::string &metricScope) {
  metricScope_ = metricScope;
  setBodyParameter(std::string("MetricScope"), metricScope);
}

std::string DescribeMetricsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeMetricsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMetricsDataRequest::getLabels() const {
  return labels_;
}

void DescribeMetricsDataRequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setParameter(std::string("Labels"), labels);
}

std::string DescribeMetricsDataRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeMetricsDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeMetricsDataRequest::getMetrics() const {
  return metrics_;
}

void DescribeMetricsDataRequest::setMetrics(const std::string &metrics) {
  metrics_ = metrics;
  setParameter(std::string("Metrics"), metrics);
}


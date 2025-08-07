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

#include <alibabacloud/oceanbasepro/model/DescribeMetricsDataV2Request.h>

using AlibabaCloud::OceanBasePro::Model::DescribeMetricsDataV2Request;

DescribeMetricsDataV2Request::DescribeMetricsDataV2Request()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeMetricsDataV2") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricsDataV2Request::~DescribeMetricsDataV2Request() {}

std::string DescribeMetricsDataV2Request::getGroupByLabels() const {
  return groupByLabels_;
}

void DescribeMetricsDataV2Request::setGroupByLabels(const std::string &groupByLabels) {
  groupByLabels_ = groupByLabels;
  setBodyParameter(std::string("GroupByLabels"), groupByLabels);
}

std::string DescribeMetricsDataV2Request::getStartTime() const {
  return startTime_;
}

void DescribeMetricsDataV2Request::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeMetricsDataV2Request::getLimit() const {
  return limit_;
}

void DescribeMetricsDataV2Request::setLimit(const std::string &limit) {
  limit_ = limit;
  setBodyParameter(std::string("Limit"), limit);
}

std::string DescribeMetricsDataV2Request::getSortOrder() const {
  return sortOrder_;
}

void DescribeMetricsDataV2Request::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setBodyParameter(std::string("SortOrder"), sortOrder);
}

std::string DescribeMetricsDataV2Request::getSortMetricKey() const {
  return sortMetricKey_;
}

void DescribeMetricsDataV2Request::setSortMetricKey(const std::string &sortMetricKey) {
  sortMetricKey_ = sortMetricKey;
  setBodyParameter(std::string("SortMetricKey"), sortMetricKey);
}

std::string DescribeMetricsDataV2Request::getReplicaType() const {
  return replicaType_;
}

void DescribeMetricsDataV2Request::setReplicaType(const std::string &replicaType) {
  replicaType_ = replicaType;
  setBodyParameter(std::string("ReplicaType"), replicaType);
}

std::string DescribeMetricsDataV2Request::getEndTime() const {
  return endTime_;
}

void DescribeMetricsDataV2Request::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeMetricsDataV2Request::getLabels() const {
  return labels_;
}

void DescribeMetricsDataV2Request::setLabels(const std::string &labels) {
  labels_ = labels;
  setBodyParameter(std::string("Labels"), labels);
}

std::string DescribeMetricsDataV2Request::getInstanceId() const {
  return instanceId_;
}

void DescribeMetricsDataV2Request::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeMetricsDataV2Request::getMetrics() const {
  return metrics_;
}

void DescribeMetricsDataV2Request::setMetrics(const std::string &metrics) {
  metrics_ = metrics;
  setBodyParameter(std::string("Metrics"), metrics);
}


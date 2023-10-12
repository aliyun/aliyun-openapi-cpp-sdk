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

#include <alibabacloud/oceanbasepro/model/DescribeProjectStepMetricRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeProjectStepMetricRequest;

DescribeProjectStepMetricRequest::DescribeProjectStepMetricRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeProjectStepMetric") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProjectStepMetricRequest::~DescribeProjectStepMetricRequest() {}

std::string DescribeProjectStepMetricRequest::getMetricType() const {
  return metricType_;
}

void DescribeProjectStepMetricRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setBodyParameter(std::string("MetricType"), metricType);
}

std::string DescribeProjectStepMetricRequest::getStepName() const {
  return stepName_;
}

void DescribeProjectStepMetricRequest::setStepName(const std::string &stepName) {
  stepName_ = stepName;
  setBodyParameter(std::string("StepName"), stepName);
}

std::string DescribeProjectStepMetricRequest::getAggregator() const {
  return aggregator_;
}

void DescribeProjectStepMetricRequest::setAggregator(const std::string &aggregator) {
  aggregator_ = aggregator;
  setBodyParameter(std::string("Aggregator"), aggregator);
}

int DescribeProjectStepMetricRequest::getMaxPointNum() const {
  return maxPointNum_;
}

void DescribeProjectStepMetricRequest::setMaxPointNum(int maxPointNum) {
  maxPointNum_ = maxPointNum;
  setBodyParameter(std::string("MaxPointNum"), std::to_string(maxPointNum));
}

long DescribeProjectStepMetricRequest::getEndTimestamp() const {
  return endTimestamp_;
}

void DescribeProjectStepMetricRequest::setEndTimestamp(long endTimestamp) {
  endTimestamp_ = endTimestamp;
  setBodyParameter(std::string("EndTimestamp"), std::to_string(endTimestamp));
}

long DescribeProjectStepMetricRequest::getBeginTimestamp() const {
  return beginTimestamp_;
}

void DescribeProjectStepMetricRequest::setBeginTimestamp(long beginTimestamp) {
  beginTimestamp_ = beginTimestamp;
  setBodyParameter(std::string("BeginTimestamp"), std::to_string(beginTimestamp));
}

std::string DescribeProjectStepMetricRequest::getProjectId() const {
  return projectId_;
}

void DescribeProjectStepMetricRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}


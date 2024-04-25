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

#include <alibabacloud/ehpcinstant/model/DescribeJobMetricDataRequest.h>

using AlibabaCloud::EhpcInstant::Model::DescribeJobMetricDataRequest;

DescribeJobMetricDataRequest::DescribeJobMetricDataRequest()
    : RpcServiceRequest("ehpcinstant", "2023-07-01", "DescribeJobMetricData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeJobMetricDataRequest::~DescribeJobMetricDataRequest() {}

std::string DescribeJobMetricDataRequest::getTaskName() const {
  return taskName_;
}

void DescribeJobMetricDataRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string DescribeJobMetricDataRequest::getJobId() const {
  return jobId_;
}

void DescribeJobMetricDataRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string DescribeJobMetricDataRequest::getMetricName() const {
  return metricName_;
}

void DescribeJobMetricDataRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::vector<DescribeJobMetricDataRequest::int> DescribeJobMetricDataRequest::getArrayIndex() const {
  return arrayIndex_;
}

void DescribeJobMetricDataRequest::setArrayIndex(const std::vector<DescribeJobMetricDataRequest::int> &arrayIndex) {
  arrayIndex_ = arrayIndex;
  for(int dep1 = 0; dep1 != arrayIndex.size(); dep1++) {
    setParameter(std::string("ArrayIndex") + "." + std::to_string(dep1 + 1), std::to_string(arrayIndex[dep1]));
  }
}


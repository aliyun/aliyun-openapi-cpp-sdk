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

#include <alibabacloud/ens/model/DescribeInstanceMonitorDataRequest.h>

using AlibabaCloud::Ens::Model::DescribeInstanceMonitorDataRequest;

DescribeInstanceMonitorDataRequest::DescribeInstanceMonitorDataRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeInstanceMonitorData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceMonitorDataRequest::~DescribeInstanceMonitorDataRequest() {}

std::string DescribeInstanceMonitorDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceMonitorDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceMonitorDataRequest::getPeriod() const {
  return period_;
}

void DescribeInstanceMonitorDataRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeInstanceMonitorDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceMonitorDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceMonitorDataRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceMonitorDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


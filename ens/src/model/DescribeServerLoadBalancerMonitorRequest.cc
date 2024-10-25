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

#include <alibabacloud/ens/model/DescribeServerLoadBalancerMonitorRequest.h>

using AlibabaCloud::Ens::Model::DescribeServerLoadBalancerMonitorRequest;

DescribeServerLoadBalancerMonitorRequest::DescribeServerLoadBalancerMonitorRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeServerLoadBalancerMonitor") {
  setMethod(HttpRequest::Method::Get);
}

DescribeServerLoadBalancerMonitorRequest::~DescribeServerLoadBalancerMonitorRequest() {}

std::string DescribeServerLoadBalancerMonitorRequest::getStartTime() const {
  return startTime_;
}

void DescribeServerLoadBalancerMonitorRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeServerLoadBalancerMonitorRequest::getEndTime() const {
  return endTime_;
}

void DescribeServerLoadBalancerMonitorRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeServerLoadBalancerMonitorRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeServerLoadBalancerMonitorRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}


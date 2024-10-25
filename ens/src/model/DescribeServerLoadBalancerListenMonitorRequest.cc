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

#include <alibabacloud/ens/model/DescribeServerLoadBalancerListenMonitorRequest.h>

using AlibabaCloud::Ens::Model::DescribeServerLoadBalancerListenMonitorRequest;

DescribeServerLoadBalancerListenMonitorRequest::DescribeServerLoadBalancerListenMonitorRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeServerLoadBalancerListenMonitor") {
  setMethod(HttpRequest::Method::Get);
}

DescribeServerLoadBalancerListenMonitorRequest::~DescribeServerLoadBalancerListenMonitorRequest() {}

std::string DescribeServerLoadBalancerListenMonitorRequest::getStartTime() const {
  return startTime_;
}

void DescribeServerLoadBalancerListenMonitorRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeServerLoadBalancerListenMonitorRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeServerLoadBalancerListenMonitorRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string DescribeServerLoadBalancerListenMonitorRequest::getProto() const {
  return proto_;
}

void DescribeServerLoadBalancerListenMonitorRequest::setProto(const std::string &proto) {
  proto_ = proto;
  setParameter(std::string("Proto"), proto);
}

std::string DescribeServerLoadBalancerListenMonitorRequest::getVPort() const {
  return vPort_;
}

void DescribeServerLoadBalancerListenMonitorRequest::setVPort(const std::string &vPort) {
  vPort_ = vPort;
  setParameter(std::string("VPort"), vPort);
}

std::string DescribeServerLoadBalancerListenMonitorRequest::getEndTime() const {
  return endTime_;
}

void DescribeServerLoadBalancerListenMonitorRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}


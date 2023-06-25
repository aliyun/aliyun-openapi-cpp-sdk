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

#include <alibabacloud/ddosbgp/model/DescribeTrafficRequest.h>

using AlibabaCloud::Ddosbgp::Model::DescribeTrafficRequest;

DescribeTrafficRequest::DescribeTrafficRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DescribeTraffic") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTrafficRequest::~DescribeTrafficRequest() {}

int DescribeTrafficRequest::getStartTime() const {
  return startTime_;
}

void DescribeTrafficRequest::setStartTime(int startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeTrafficRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeTrafficRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeTrafficRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeTrafficRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeTrafficRequest::getRegionId() const {
  return regionId_;
}

void DescribeTrafficRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeTrafficRequest::getIp() const {
  return ip_;
}

void DescribeTrafficRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

int DescribeTrafficRequest::getEndTime() const {
  return endTime_;
}

void DescribeTrafficRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeTrafficRequest::getIpnet() const {
  return ipnet_;
}

void DescribeTrafficRequest::setIpnet(const std::string &ipnet) {
  ipnet_ = ipnet;
  setParameter(std::string("Ipnet"), ipnet);
}

std::string DescribeTrafficRequest::getFlowType() const {
  return flowType_;
}

void DescribeTrafficRequest::setFlowType(const std::string &flowType) {
  flowType_ = flowType;
  setParameter(std::string("FlowType"), flowType);
}

std::string DescribeTrafficRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTrafficRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeTrafficRequest::getInterval() const {
  return interval_;
}

void DescribeTrafficRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}


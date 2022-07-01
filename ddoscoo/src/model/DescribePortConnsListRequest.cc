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

#include <alibabacloud/ddoscoo/model/DescribePortConnsListRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribePortConnsListRequest;

DescribePortConnsListRequest::DescribePortConnsListRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribePortConnsList") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortConnsListRequest::~DescribePortConnsListRequest() {}

long DescribePortConnsListRequest::getStartTime() const {
  return startTime_;
}

void DescribePortConnsListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribePortConnsListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePortConnsListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribePortConnsListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePortConnsListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribePortConnsListRequest::getEndTime() const {
  return endTime_;
}

void DescribePortConnsListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribePortConnsListRequest::getPort() const {
  return port_;
}

void DescribePortConnsListRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::vector<std::string> DescribePortConnsListRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribePortConnsListRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

int DescribePortConnsListRequest::getInterval() const {
  return interval_;
}

void DescribePortConnsListRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}


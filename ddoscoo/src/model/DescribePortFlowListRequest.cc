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

#include <alibabacloud/ddoscoo/model/DescribePortFlowListRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribePortFlowListRequest;

DescribePortFlowListRequest::DescribePortFlowListRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribePortFlowList") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortFlowListRequest::~DescribePortFlowListRequest() {}

long DescribePortFlowListRequest::getStartTime() const {
  return startTime_;
}

void DescribePortFlowListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribePortFlowListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePortFlowListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribePortFlowListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePortFlowListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribePortFlowListRequest::getEndTime() const {
  return endTime_;
}

void DescribePortFlowListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::vector<std::string> DescribePortFlowListRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribePortFlowListRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

int DescribePortFlowListRequest::getInterval() const {
  return interval_;
}

void DescribePortFlowListRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}


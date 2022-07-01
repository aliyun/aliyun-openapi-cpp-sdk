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

#include <alibabacloud/ddoscoo/model/DescribePortViewSourceIspsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribePortViewSourceIspsRequest;

DescribePortViewSourceIspsRequest::DescribePortViewSourceIspsRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribePortViewSourceIsps") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortViewSourceIspsRequest::~DescribePortViewSourceIspsRequest() {}

long DescribePortViewSourceIspsRequest::getEndTime() const {
  return endTime_;
}

void DescribePortViewSourceIspsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribePortViewSourceIspsRequest::getStartTime() const {
  return startTime_;
}

void DescribePortViewSourceIspsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribePortViewSourceIspsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePortViewSourceIspsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribePortViewSourceIspsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePortViewSourceIspsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> DescribePortViewSourceIspsRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribePortViewSourceIspsRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}


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

#include <alibabacloud/ddoscoo/model/DescribePortConnsCountRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribePortConnsCountRequest;

DescribePortConnsCountRequest::DescribePortConnsCountRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribePortConnsCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortConnsCountRequest::~DescribePortConnsCountRequest() {}

long DescribePortConnsCountRequest::getStartTime() const {
  return startTime_;
}

void DescribePortConnsCountRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribePortConnsCountRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePortConnsCountRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribePortConnsCountRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePortConnsCountRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribePortConnsCountRequest::getEndTime() const {
  return endTime_;
}

void DescribePortConnsCountRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribePortConnsCountRequest::getPort() const {
  return port_;
}

void DescribePortConnsCountRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::vector<std::string> DescribePortConnsCountRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribePortConnsCountRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}


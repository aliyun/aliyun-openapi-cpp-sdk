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

#include <alibabacloud/cloudapi/model/DescribeInstanceLatencyRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstanceLatencyRequest;

DescribeInstanceLatencyRequest::DescribeInstanceLatencyRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstanceLatency") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceLatencyRequest::~DescribeInstanceLatencyRequest() {}

std::string DescribeInstanceLatencyRequest::getStageName() const {
  return stageName_;
}

void DescribeInstanceLatencyRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribeInstanceLatencyRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceLatencyRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceLatencyRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceLatencyRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceLatencyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceLatencyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceLatencyRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceLatencyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceLatencyRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceLatencyRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


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

#include <alibabacloud/cloudapi/model/DescribeInstanceQpsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstanceQpsRequest;

DescribeInstanceQpsRequest::DescribeInstanceQpsRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstanceQps") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceQpsRequest::~DescribeInstanceQpsRequest() {}

std::string DescribeInstanceQpsRequest::getStageName() const {
  return stageName_;
}

void DescribeInstanceQpsRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribeInstanceQpsRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceQpsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceQpsRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceQpsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceQpsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceQpsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceQpsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceQpsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceQpsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceQpsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


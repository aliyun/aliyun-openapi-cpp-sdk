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

#include <alibabacloud/cloudapi/model/DescribeInstanceHttpCodeRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstanceHttpCodeRequest;

DescribeInstanceHttpCodeRequest::DescribeInstanceHttpCodeRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstanceHttpCode") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceHttpCodeRequest::~DescribeInstanceHttpCodeRequest() {}

std::string DescribeInstanceHttpCodeRequest::getStageName() const {
  return stageName_;
}

void DescribeInstanceHttpCodeRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribeInstanceHttpCodeRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceHttpCodeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceHttpCodeRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceHttpCodeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceHttpCodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceHttpCodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceHttpCodeRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceHttpCodeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceHttpCodeRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceHttpCodeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


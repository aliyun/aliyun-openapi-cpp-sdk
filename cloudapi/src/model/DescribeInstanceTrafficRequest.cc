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

#include <alibabacloud/cloudapi/model/DescribeInstanceTrafficRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstanceTrafficRequest;

DescribeInstanceTrafficRequest::DescribeInstanceTrafficRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstanceTraffic") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceTrafficRequest::~DescribeInstanceTrafficRequest() {}

std::string DescribeInstanceTrafficRequest::getStageName() const {
  return stageName_;
}

void DescribeInstanceTrafficRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribeInstanceTrafficRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceTrafficRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceTrafficRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceTrafficRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceTrafficRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceTrafficRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceTrafficRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceTrafficRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceTrafficRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceTrafficRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


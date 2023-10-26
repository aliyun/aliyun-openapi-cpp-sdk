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

#include <alibabacloud/cloudapi/model/DescribeInstanceNewConnectionsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstanceNewConnectionsRequest;

DescribeInstanceNewConnectionsRequest::DescribeInstanceNewConnectionsRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstanceNewConnections") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceNewConnectionsRequest::~DescribeInstanceNewConnectionsRequest() {}

std::string DescribeInstanceNewConnectionsRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceNewConnectionsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceNewConnectionsRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceNewConnectionsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceNewConnectionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceNewConnectionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceNewConnectionsRequest::getSbcName() const {
  return sbcName_;
}

void DescribeInstanceNewConnectionsRequest::setSbcName(const std::string &sbcName) {
  sbcName_ = sbcName;
  setParameter(std::string("SbcName"), sbcName);
}

std::string DescribeInstanceNewConnectionsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceNewConnectionsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceNewConnectionsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceNewConnectionsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


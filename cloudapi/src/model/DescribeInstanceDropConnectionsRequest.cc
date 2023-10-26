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

#include <alibabacloud/cloudapi/model/DescribeInstanceDropConnectionsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstanceDropConnectionsRequest;

DescribeInstanceDropConnectionsRequest::DescribeInstanceDropConnectionsRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstanceDropConnections") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceDropConnectionsRequest::~DescribeInstanceDropConnectionsRequest() {}

std::string DescribeInstanceDropConnectionsRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceDropConnectionsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceDropConnectionsRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceDropConnectionsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceDropConnectionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceDropConnectionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceDropConnectionsRequest::getSbcName() const {
  return sbcName_;
}

void DescribeInstanceDropConnectionsRequest::setSbcName(const std::string &sbcName) {
  sbcName_ = sbcName;
  setParameter(std::string("SbcName"), sbcName);
}

std::string DescribeInstanceDropConnectionsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceDropConnectionsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceDropConnectionsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceDropConnectionsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


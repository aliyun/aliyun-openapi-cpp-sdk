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

#include <alibabacloud/cloudapi/model/DescribeInstanceSlbConnectRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstanceSlbConnectRequest;

DescribeInstanceSlbConnectRequest::DescribeInstanceSlbConnectRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstanceSlbConnect") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceSlbConnectRequest::~DescribeInstanceSlbConnectRequest() {}

std::string DescribeInstanceSlbConnectRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstanceSlbConnectRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstanceSlbConnectRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstanceSlbConnectRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstanceSlbConnectRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceSlbConnectRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceSlbConnectRequest::getSbcName() const {
  return sbcName_;
}

void DescribeInstanceSlbConnectRequest::setSbcName(const std::string &sbcName) {
  sbcName_ = sbcName;
  setParameter(std::string("SbcName"), sbcName);
}

std::string DescribeInstanceSlbConnectRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceSlbConnectRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceSlbConnectRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceSlbConnectRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


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

#include <alibabacloud/cloudapi/model/DescribeInstancePacketsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstancePacketsRequest;

DescribeInstancePacketsRequest::DescribeInstancePacketsRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstancePackets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstancePacketsRequest::~DescribeInstancePacketsRequest() {}

std::string DescribeInstancePacketsRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstancePacketsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeInstancePacketsRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstancePacketsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeInstancePacketsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstancePacketsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstancePacketsRequest::getSbcName() const {
  return sbcName_;
}

void DescribeInstancePacketsRequest::setSbcName(const std::string &sbcName) {
  sbcName_ = sbcName;
  setParameter(std::string("SbcName"), sbcName);
}

std::string DescribeInstancePacketsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstancePacketsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstancePacketsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstancePacketsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


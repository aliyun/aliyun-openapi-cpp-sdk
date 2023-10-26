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

#include <alibabacloud/cloudapi/model/DescribeGroupQpsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeGroupQpsRequest;

DescribeGroupQpsRequest::DescribeGroupQpsRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeGroupQps") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupQpsRequest::~DescribeGroupQpsRequest() {}

std::string DescribeGroupQpsRequest::getStageName() const {
  return stageName_;
}

void DescribeGroupQpsRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribeGroupQpsRequest::getGroupId() const {
  return groupId_;
}

void DescribeGroupQpsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeGroupQpsRequest::getEndTime() const {
  return endTime_;
}

void DescribeGroupQpsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeGroupQpsRequest::getStartTime() const {
  return startTime_;
}

void DescribeGroupQpsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeGroupQpsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGroupQpsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeGroupQpsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeGroupQpsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


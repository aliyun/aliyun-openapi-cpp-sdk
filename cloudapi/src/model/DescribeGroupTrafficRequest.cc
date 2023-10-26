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

#include <alibabacloud/cloudapi/model/DescribeGroupTrafficRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeGroupTrafficRequest;

DescribeGroupTrafficRequest::DescribeGroupTrafficRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeGroupTraffic") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupTrafficRequest::~DescribeGroupTrafficRequest() {}

std::string DescribeGroupTrafficRequest::getStageName() const {
  return stageName_;
}

void DescribeGroupTrafficRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribeGroupTrafficRequest::getGroupId() const {
  return groupId_;
}

void DescribeGroupTrafficRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeGroupTrafficRequest::getEndTime() const {
  return endTime_;
}

void DescribeGroupTrafficRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeGroupTrafficRequest::getStartTime() const {
  return startTime_;
}

void DescribeGroupTrafficRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeGroupTrafficRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGroupTrafficRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeGroupTrafficRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeGroupTrafficRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


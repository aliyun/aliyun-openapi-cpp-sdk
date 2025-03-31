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

#include <alibabacloud/cloud-siem/model/DescribeLogFieldsRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeLogFieldsRequest;

DescribeLogFieldsRequest::DescribeLogFieldsRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeLogFields") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLogFieldsRequest::~DescribeLogFieldsRequest() {}

long DescribeLogFieldsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeLogFieldsRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeLogFieldsRequest::getLogType() const {
  return logType_;
}

void DescribeLogFieldsRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setBodyParameter(std::string("LogType"), logType);
}

std::string DescribeLogFieldsRequest::getRegionId() const {
  return regionId_;
}

void DescribeLogFieldsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeLogFieldsRequest::getRoleType() const {
  return roleType_;
}

void DescribeLogFieldsRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeLogFieldsRequest::getLogSource() const {
  return logSource_;
}

void DescribeLogFieldsRequest::setLogSource(const std::string &logSource) {
  logSource_ = logSource;
  setBodyParameter(std::string("LogSource"), logSource);
}


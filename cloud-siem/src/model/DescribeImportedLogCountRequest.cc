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

#include <alibabacloud/cloud-siem/model/DescribeImportedLogCountRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeImportedLogCountRequest;

DescribeImportedLogCountRequest::DescribeImportedLogCountRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeImportedLogCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImportedLogCountRequest::~DescribeImportedLogCountRequest() {}

std::string DescribeImportedLogCountRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeImportedLogCountRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeImportedLogCountRequest::getRegionId() const {
  return regionId_;
}

void DescribeImportedLogCountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DescribeImportedLogCountRequest::getRoleType() const {
  return roleType_;
}

void DescribeImportedLogCountRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), roleType);
}


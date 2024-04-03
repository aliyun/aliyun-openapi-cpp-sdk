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

#include <alibabacloud/alikafka/model/DescribeAclsRequest.h>

using AlibabaCloud::Alikafka::Model::DescribeAclsRequest;

DescribeAclsRequest::DescribeAclsRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "DescribeAcls") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAclsRequest::~DescribeAclsRequest() {}

std::string DescribeAclsRequest::getAclResourcePatternType() const {
  return aclResourcePatternType_;
}

void DescribeAclsRequest::setAclResourcePatternType(const std::string &aclResourcePatternType) {
  aclResourcePatternType_ = aclResourcePatternType;
  setParameter(std::string("AclResourcePatternType"), aclResourcePatternType);
}

std::string DescribeAclsRequest::getAclResourceType() const {
  return aclResourceType_;
}

void DescribeAclsRequest::setAclResourceType(const std::string &aclResourceType) {
  aclResourceType_ = aclResourceType;
  setParameter(std::string("AclResourceType"), aclResourceType);
}

std::string DescribeAclsRequest::getAclOperationType() const {
  return aclOperationType_;
}

void DescribeAclsRequest::setAclOperationType(const std::string &aclOperationType) {
  aclOperationType_ = aclOperationType;
  setParameter(std::string("AclOperationType"), aclOperationType);
}

std::string DescribeAclsRequest::getAclResourceName() const {
  return aclResourceName_;
}

void DescribeAclsRequest::setAclResourceName(const std::string &aclResourceName) {
  aclResourceName_ = aclResourceName;
  setParameter(std::string("AclResourceName"), aclResourceName);
}

std::string DescribeAclsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeAclsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeAclsRequest::getRegionId() const {
  return regionId_;
}

void DescribeAclsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAclsRequest::getHost() const {
  return host_;
}

void DescribeAclsRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string DescribeAclsRequest::getAclPermissionType() const {
  return aclPermissionType_;
}

void DescribeAclsRequest::setAclPermissionType(const std::string &aclPermissionType) {
  aclPermissionType_ = aclPermissionType;
  setParameter(std::string("AclPermissionType"), aclPermissionType);
}

std::string DescribeAclsRequest::getUsername() const {
  return username_;
}

void DescribeAclsRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}


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

#include <alibabacloud/alikafka/model/CreateAclRequest.h>

using AlibabaCloud::Alikafka::Model::CreateAclRequest;

CreateAclRequest::CreateAclRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "CreateAcl") {
  setMethod(HttpRequest::Method::Post);
}

CreateAclRequest::~CreateAclRequest() {}

std::string CreateAclRequest::getAclResourcePatternType() const {
  return aclResourcePatternType_;
}

void CreateAclRequest::setAclResourcePatternType(const std::string &aclResourcePatternType) {
  aclResourcePatternType_ = aclResourcePatternType;
  setParameter(std::string("AclResourcePatternType"), aclResourcePatternType);
}

std::string CreateAclRequest::getAclResourceType() const {
  return aclResourceType_;
}

void CreateAclRequest::setAclResourceType(const std::string &aclResourceType) {
  aclResourceType_ = aclResourceType;
  setParameter(std::string("AclResourceType"), aclResourceType);
}

std::string CreateAclRequest::getAclOperationTypes() const {
  return aclOperationTypes_;
}

void CreateAclRequest::setAclOperationTypes(const std::string &aclOperationTypes) {
  aclOperationTypes_ = aclOperationTypes;
  setParameter(std::string("AclOperationTypes"), aclOperationTypes);
}

std::string CreateAclRequest::getAclOperationType() const {
  return aclOperationType_;
}

void CreateAclRequest::setAclOperationType(const std::string &aclOperationType) {
  aclOperationType_ = aclOperationType;
  setParameter(std::string("AclOperationType"), aclOperationType);
}

std::string CreateAclRequest::getAclResourceName() const {
  return aclResourceName_;
}

void CreateAclRequest::setAclResourceName(const std::string &aclResourceName) {
  aclResourceName_ = aclResourceName;
  setParameter(std::string("AclResourceName"), aclResourceName);
}

std::string CreateAclRequest::getInstanceId() const {
  return instanceId_;
}

void CreateAclRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateAclRequest::getRegionId() const {
  return regionId_;
}

void CreateAclRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateAclRequest::getHost() const {
  return host_;
}

void CreateAclRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string CreateAclRequest::getAclPermissionType() const {
  return aclPermissionType_;
}

void CreateAclRequest::setAclPermissionType(const std::string &aclPermissionType) {
  aclPermissionType_ = aclPermissionType;
  setParameter(std::string("AclPermissionType"), aclPermissionType);
}

std::string CreateAclRequest::getUsername() const {
  return username_;
}

void CreateAclRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}


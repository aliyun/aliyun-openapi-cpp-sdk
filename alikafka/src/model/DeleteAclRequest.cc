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

#include <alibabacloud/alikafka/model/DeleteAclRequest.h>

using AlibabaCloud::Alikafka::Model::DeleteAclRequest;

DeleteAclRequest::DeleteAclRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "DeleteAcl") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAclRequest::~DeleteAclRequest() {}

std::string DeleteAclRequest::getAclResourcePatternType() const {
  return aclResourcePatternType_;
}

void DeleteAclRequest::setAclResourcePatternType(const std::string &aclResourcePatternType) {
  aclResourcePatternType_ = aclResourcePatternType;
  setParameter(std::string("AclResourcePatternType"), aclResourcePatternType);
}

std::string DeleteAclRequest::getAclResourceType() const {
  return aclResourceType_;
}

void DeleteAclRequest::setAclResourceType(const std::string &aclResourceType) {
  aclResourceType_ = aclResourceType;
  setParameter(std::string("AclResourceType"), aclResourceType);
}

std::string DeleteAclRequest::getAclOperationTypes() const {
  return aclOperationTypes_;
}

void DeleteAclRequest::setAclOperationTypes(const std::string &aclOperationTypes) {
  aclOperationTypes_ = aclOperationTypes;
  setParameter(std::string("AclOperationTypes"), aclOperationTypes);
}

std::string DeleteAclRequest::getAclOperationType() const {
  return aclOperationType_;
}

void DeleteAclRequest::setAclOperationType(const std::string &aclOperationType) {
  aclOperationType_ = aclOperationType;
  setParameter(std::string("AclOperationType"), aclOperationType);
}

std::string DeleteAclRequest::getAclResourceName() const {
  return aclResourceName_;
}

void DeleteAclRequest::setAclResourceName(const std::string &aclResourceName) {
  aclResourceName_ = aclResourceName;
  setParameter(std::string("AclResourceName"), aclResourceName);
}

std::string DeleteAclRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteAclRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteAclRequest::getRegionId() const {
  return regionId_;
}

void DeleteAclRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteAclRequest::getHost() const {
  return host_;
}

void DeleteAclRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string DeleteAclRequest::getAclPermissionType() const {
  return aclPermissionType_;
}

void DeleteAclRequest::setAclPermissionType(const std::string &aclPermissionType) {
  aclPermissionType_ = aclPermissionType;
  setParameter(std::string("AclPermissionType"), aclPermissionType);
}

std::string DeleteAclRequest::getUsername() const {
  return username_;
}

void DeleteAclRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}


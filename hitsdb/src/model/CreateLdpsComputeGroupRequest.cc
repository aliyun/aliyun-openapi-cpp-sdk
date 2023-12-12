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

#include <alibabacloud/hitsdb/model/CreateLdpsComputeGroupRequest.h>

using AlibabaCloud::Hitsdb::Model::CreateLdpsComputeGroupRequest;

CreateLdpsComputeGroupRequest::CreateLdpsComputeGroupRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "CreateLdpsComputeGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateLdpsComputeGroupRequest::~CreateLdpsComputeGroupRequest() {}

long CreateLdpsComputeGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLdpsComputeGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateLdpsComputeGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateLdpsComputeGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateLdpsComputeGroupRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateLdpsComputeGroupRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateLdpsComputeGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateLdpsComputeGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLdpsComputeGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLdpsComputeGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateLdpsComputeGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLdpsComputeGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateLdpsComputeGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLdpsComputeGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLdpsComputeGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateLdpsComputeGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateLdpsComputeGroupRequest::getInstanceId() const {
  return instanceId_;
}

void CreateLdpsComputeGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateLdpsComputeGroupRequest::getProperties() const {
  return properties_;
}

void CreateLdpsComputeGroupRequest::setProperties(const std::string &properties) {
  properties_ = properties;
  setParameter(std::string("Properties"), properties);
}


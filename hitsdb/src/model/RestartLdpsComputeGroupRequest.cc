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

#include <alibabacloud/hitsdb/model/RestartLdpsComputeGroupRequest.h>

using AlibabaCloud::Hitsdb::Model::RestartLdpsComputeGroupRequest;

RestartLdpsComputeGroupRequest::RestartLdpsComputeGroupRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "RestartLdpsComputeGroup") {
  setMethod(HttpRequest::Method::Post);
}

RestartLdpsComputeGroupRequest::~RestartLdpsComputeGroupRequest() {}

long RestartLdpsComputeGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestartLdpsComputeGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestartLdpsComputeGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestartLdpsComputeGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestartLdpsComputeGroupRequest::getSecurityToken() const {
  return securityToken_;
}

void RestartLdpsComputeGroupRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RestartLdpsComputeGroupRequest::getRegionId() const {
  return regionId_;
}

void RestartLdpsComputeGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RestartLdpsComputeGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestartLdpsComputeGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestartLdpsComputeGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestartLdpsComputeGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RestartLdpsComputeGroupRequest::getOwnerId() const {
  return ownerId_;
}

void RestartLdpsComputeGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RestartLdpsComputeGroupRequest::getGroupName() const {
  return groupName_;
}

void RestartLdpsComputeGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string RestartLdpsComputeGroupRequest::getInstanceId() const {
  return instanceId_;
}

void RestartLdpsComputeGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


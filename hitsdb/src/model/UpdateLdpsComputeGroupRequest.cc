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

#include <alibabacloud/hitsdb/model/UpdateLdpsComputeGroupRequest.h>

using AlibabaCloud::Hitsdb::Model::UpdateLdpsComputeGroupRequest;

UpdateLdpsComputeGroupRequest::UpdateLdpsComputeGroupRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "UpdateLdpsComputeGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLdpsComputeGroupRequest::~UpdateLdpsComputeGroupRequest() {}

long UpdateLdpsComputeGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateLdpsComputeGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateLdpsComputeGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateLdpsComputeGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateLdpsComputeGroupRequest::getSecurityToken() const {
  return securityToken_;
}

void UpdateLdpsComputeGroupRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string UpdateLdpsComputeGroupRequest::getRegionId() const {
  return regionId_;
}

void UpdateLdpsComputeGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLdpsComputeGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateLdpsComputeGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateLdpsComputeGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateLdpsComputeGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateLdpsComputeGroupRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLdpsComputeGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateLdpsComputeGroupRequest::getGroupName() const {
  return groupName_;
}

void UpdateLdpsComputeGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdateLdpsComputeGroupRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateLdpsComputeGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateLdpsComputeGroupRequest::getProperties() const {
  return properties_;
}

void UpdateLdpsComputeGroupRequest::setProperties(const std::string &properties) {
  properties_ = properties;
  setParameter(std::string("Properties"), properties);
}


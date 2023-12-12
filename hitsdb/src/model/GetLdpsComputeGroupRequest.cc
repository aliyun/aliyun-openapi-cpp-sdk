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

#include <alibabacloud/hitsdb/model/GetLdpsComputeGroupRequest.h>

using AlibabaCloud::Hitsdb::Model::GetLdpsComputeGroupRequest;

GetLdpsComputeGroupRequest::GetLdpsComputeGroupRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "GetLdpsComputeGroup") {
  setMethod(HttpRequest::Method::Post);
}

GetLdpsComputeGroupRequest::~GetLdpsComputeGroupRequest() {}

long GetLdpsComputeGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetLdpsComputeGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetLdpsComputeGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetLdpsComputeGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetLdpsComputeGroupRequest::getSecurityToken() const {
  return securityToken_;
}

void GetLdpsComputeGroupRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GetLdpsComputeGroupRequest::getRegionId() const {
  return regionId_;
}

void GetLdpsComputeGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetLdpsComputeGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetLdpsComputeGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetLdpsComputeGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetLdpsComputeGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetLdpsComputeGroupRequest::getOwnerId() const {
  return ownerId_;
}

void GetLdpsComputeGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetLdpsComputeGroupRequest::getGroupName() const {
  return groupName_;
}

void GetLdpsComputeGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string GetLdpsComputeGroupRequest::getInstanceId() const {
  return instanceId_;
}

void GetLdpsComputeGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


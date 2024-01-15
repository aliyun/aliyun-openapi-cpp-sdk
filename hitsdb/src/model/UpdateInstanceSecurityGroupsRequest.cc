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

#include <alibabacloud/hitsdb/model/UpdateInstanceSecurityGroupsRequest.h>

using AlibabaCloud::Hitsdb::Model::UpdateInstanceSecurityGroupsRequest;

UpdateInstanceSecurityGroupsRequest::UpdateInstanceSecurityGroupsRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "UpdateInstanceSecurityGroups") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceSecurityGroupsRequest::~UpdateInstanceSecurityGroupsRequest() {}

long UpdateInstanceSecurityGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateInstanceSecurityGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateInstanceSecurityGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateInstanceSecurityGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateInstanceSecurityGroupsRequest::getSecurityToken() const {
  return securityToken_;
}

void UpdateInstanceSecurityGroupsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string UpdateInstanceSecurityGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateInstanceSecurityGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateInstanceSecurityGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateInstanceSecurityGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateInstanceSecurityGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateInstanceSecurityGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateInstanceSecurityGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateInstanceSecurityGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateInstanceSecurityGroupsRequest::getSecurityGroups() const {
  return securityGroups_;
}

void UpdateInstanceSecurityGroupsRequest::setSecurityGroups(const std::string &securityGroups) {
  securityGroups_ = securityGroups;
  setParameter(std::string("SecurityGroups"), securityGroups);
}


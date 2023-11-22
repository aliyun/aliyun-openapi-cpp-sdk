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

#include <alibabacloud/hitsdb/model/UpdateInstanceIpWhiteListRequest.h>

using AlibabaCloud::Hitsdb::Model::UpdateInstanceIpWhiteListRequest;

UpdateInstanceIpWhiteListRequest::UpdateInstanceIpWhiteListRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "UpdateInstanceIpWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceIpWhiteListRequest::~UpdateInstanceIpWhiteListRequest() {}

long UpdateInstanceIpWhiteListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateInstanceIpWhiteListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool UpdateInstanceIpWhiteListRequest::get_Delete() const {
  return _delete_;
}

void UpdateInstanceIpWhiteListRequest::set_Delete(bool _delete) {
  _delete_ = _delete;
  setParameter(std::string("Delete"), _delete ? "true" : "false");
}

std::string UpdateInstanceIpWhiteListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateInstanceIpWhiteListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateInstanceIpWhiteListRequest::getSecurityToken() const {
  return securityToken_;
}

void UpdateInstanceIpWhiteListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string UpdateInstanceIpWhiteListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateInstanceIpWhiteListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateInstanceIpWhiteListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateInstanceIpWhiteListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateInstanceIpWhiteListRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateInstanceIpWhiteListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateInstanceIpWhiteListRequest::getGroupName() const {
  return groupName_;
}

void UpdateInstanceIpWhiteListRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdateInstanceIpWhiteListRequest::getSecurityIpList() const {
  return securityIpList_;
}

void UpdateInstanceIpWhiteListRequest::setSecurityIpList(const std::string &securityIpList) {
  securityIpList_ = securityIpList;
  setParameter(std::string("SecurityIpList"), securityIpList);
}

std::string UpdateInstanceIpWhiteListRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateInstanceIpWhiteListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


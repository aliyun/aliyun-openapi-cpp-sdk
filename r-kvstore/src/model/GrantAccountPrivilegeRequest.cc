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

#include <alibabacloud/r-kvstore/model/GrantAccountPrivilegeRequest.h>

using AlibabaCloud::R_kvstore::Model::GrantAccountPrivilegeRequest;

GrantAccountPrivilegeRequest::GrantAccountPrivilegeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "GrantAccountPrivilege") {
  setMethod(HttpRequest::Method::Post);
}

GrantAccountPrivilegeRequest::~GrantAccountPrivilegeRequest() {}

long GrantAccountPrivilegeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GrantAccountPrivilegeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GrantAccountPrivilegeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GrantAccountPrivilegeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GrantAccountPrivilegeRequest::getAccountPrivilege() const {
  return accountPrivilege_;
}

void GrantAccountPrivilegeRequest::setAccountPrivilege(const std::string &accountPrivilege) {
  accountPrivilege_ = accountPrivilege;
  setParameter(std::string("AccountPrivilege"), accountPrivilege);
}

std::string GrantAccountPrivilegeRequest::getAccountName() const {
  return accountName_;
}

void GrantAccountPrivilegeRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string GrantAccountPrivilegeRequest::getSecurityToken() const {
  return securityToken_;
}

void GrantAccountPrivilegeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GrantAccountPrivilegeRequest::getSourceBiz() const {
  return sourceBiz_;
}

void GrantAccountPrivilegeRequest::setSourceBiz(const std::string &sourceBiz) {
  sourceBiz_ = sourceBiz;
  setParameter(std::string("SourceBiz"), sourceBiz);
}

std::string GrantAccountPrivilegeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GrantAccountPrivilegeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GrantAccountPrivilegeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GrantAccountPrivilegeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GrantAccountPrivilegeRequest::getOwnerId() const {
  return ownerId_;
}

void GrantAccountPrivilegeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GrantAccountPrivilegeRequest::getInstanceId() const {
  return instanceId_;
}

void GrantAccountPrivilegeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


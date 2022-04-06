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

#include <alibabacloud/hitsdb/model/GetInstanceIpWhiteListRequest.h>

using AlibabaCloud::Hitsdb::Model::GetInstanceIpWhiteListRequest;

GetInstanceIpWhiteListRequest::GetInstanceIpWhiteListRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "GetInstanceIpWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

GetInstanceIpWhiteListRequest::~GetInstanceIpWhiteListRequest() {}

long GetInstanceIpWhiteListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetInstanceIpWhiteListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetInstanceIpWhiteListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetInstanceIpWhiteListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetInstanceIpWhiteListRequest::getSecurityToken() const {
  return securityToken_;
}

void GetInstanceIpWhiteListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GetInstanceIpWhiteListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetInstanceIpWhiteListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetInstanceIpWhiteListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetInstanceIpWhiteListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetInstanceIpWhiteListRequest::getOwnerId() const {
  return ownerId_;
}

void GetInstanceIpWhiteListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetInstanceIpWhiteListRequest::getGroupName() const {
  return groupName_;
}

void GetInstanceIpWhiteListRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string GetInstanceIpWhiteListRequest::getInstanceId() const {
  return instanceId_;
}

void GetInstanceIpWhiteListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


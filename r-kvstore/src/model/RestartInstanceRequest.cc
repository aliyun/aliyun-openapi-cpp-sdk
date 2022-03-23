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

#include <alibabacloud/r-kvstore/model/RestartInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::RestartInstanceRequest;

RestartInstanceRequest::RestartInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "RestartInstance") {
  setMethod(HttpRequest::Method::Post);
}

RestartInstanceRequest::~RestartInstanceRequest() {}

long RestartInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestartInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool RestartInstanceRequest::getUpgradeMinorVersion() const {
  return upgradeMinorVersion_;
}

void RestartInstanceRequest::setUpgradeMinorVersion(bool upgradeMinorVersion) {
  upgradeMinorVersion_ = upgradeMinorVersion;
  setParameter(std::string("UpgradeMinorVersion"), upgradeMinorVersion ? "true" : "false");
}

std::string RestartInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestartInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestartInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void RestartInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RestartInstanceRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void RestartInstanceRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string RestartInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestartInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestartInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestartInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RestartInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RestartInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RestartInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RestartInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


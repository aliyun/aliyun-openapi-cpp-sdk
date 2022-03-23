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

#include <alibabacloud/r-kvstore/model/ModifyInstanceMajorVersionRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceMajorVersionRequest;

ModifyInstanceMajorVersionRequest::ModifyInstanceMajorVersionRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceMajorVersion") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceMajorVersionRequest::~ModifyInstanceMajorVersionRequest() {}

long ModifyInstanceMajorVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceMajorVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceMajorVersionRequest::getEffectTime() const {
  return effectTime_;
}

void ModifyInstanceMajorVersionRequest::setEffectTime(const std::string &effectTime) {
  effectTime_ = effectTime;
  setParameter(std::string("EffectTime"), effectTime);
}

std::string ModifyInstanceMajorVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceMajorVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceMajorVersionRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceMajorVersionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceMajorVersionRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void ModifyInstanceMajorVersionRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string ModifyInstanceMajorVersionRequest::getMajorVersion() const {
  return majorVersion_;
}

void ModifyInstanceMajorVersionRequest::setMajorVersion(const std::string &majorVersion) {
  majorVersion_ = majorVersion;
  setParameter(std::string("MajorVersion"), majorVersion);
}

std::string ModifyInstanceMajorVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceMajorVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceMajorVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceMajorVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceMajorVersionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceMajorVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceMajorVersionRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceMajorVersionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


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

#include <alibabacloud/r-kvstore/model/ModifyInstanceMaintainTimeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceMaintainTimeRequest;

ModifyInstanceMaintainTimeRequest::ModifyInstanceMaintainTimeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceMaintainTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceMaintainTimeRequest::~ModifyInstanceMaintainTimeRequest() {}

long ModifyInstanceMaintainTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceMaintainTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceMaintainTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceMaintainTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceMaintainTimeRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceMaintainTimeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceMaintainTimeRequest::getMaintainStartTime() const {
  return maintainStartTime_;
}

void ModifyInstanceMaintainTimeRequest::setMaintainStartTime(const std::string &maintainStartTime) {
  maintainStartTime_ = maintainStartTime;
  setParameter(std::string("MaintainStartTime"), maintainStartTime);
}

std::string ModifyInstanceMaintainTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceMaintainTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceMaintainTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceMaintainTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceMaintainTimeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceMaintainTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceMaintainTimeRequest::getMaintainEndTime() const {
  return maintainEndTime_;
}

void ModifyInstanceMaintainTimeRequest::setMaintainEndTime(const std::string &maintainEndTime) {
  maintainEndTime_ = maintainEndTime;
  setParameter(std::string("MaintainEndTime"), maintainEndTime);
}

std::string ModifyInstanceMaintainTimeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceMaintainTimeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


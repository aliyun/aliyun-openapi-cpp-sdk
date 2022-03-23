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

#include <alibabacloud/r-kvstore/model/ModifyInstanceNetExpireTimeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceNetExpireTimeRequest;

ModifyInstanceNetExpireTimeRequest::ModifyInstanceNetExpireTimeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceNetExpireTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceNetExpireTimeRequest::~ModifyInstanceNetExpireTimeRequest() {}

long ModifyInstanceNetExpireTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceNetExpireTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceNetExpireTimeRequest::getConnectionString() const {
  return connectionString_;
}

void ModifyInstanceNetExpireTimeRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string ModifyInstanceNetExpireTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceNetExpireTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceNetExpireTimeRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceNetExpireTimeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int ModifyInstanceNetExpireTimeRequest::getClassicExpiredDays() const {
  return classicExpiredDays_;
}

void ModifyInstanceNetExpireTimeRequest::setClassicExpiredDays(int classicExpiredDays) {
  classicExpiredDays_ = classicExpiredDays;
  setParameter(std::string("ClassicExpiredDays"), std::to_string(classicExpiredDays));
}

std::string ModifyInstanceNetExpireTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceNetExpireTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceNetExpireTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceNetExpireTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceNetExpireTimeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceNetExpireTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceNetExpireTimeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceNetExpireTimeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


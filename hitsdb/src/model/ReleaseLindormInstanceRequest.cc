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

#include <alibabacloud/hitsdb/model/ReleaseLindormInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::ReleaseLindormInstanceRequest;

ReleaseLindormInstanceRequest::ReleaseLindormInstanceRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "ReleaseLindormInstance") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseLindormInstanceRequest::~ReleaseLindormInstanceRequest() {}

long ReleaseLindormInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReleaseLindormInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ReleaseLindormInstanceRequest::getImmediately() const {
  return immediately_;
}

void ReleaseLindormInstanceRequest::setImmediately(bool immediately) {
  immediately_ = immediately;
  setParameter(std::string("Immediately"), immediately ? "true" : "false");
}

std::string ReleaseLindormInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReleaseLindormInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReleaseLindormInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void ReleaseLindormInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ReleaseLindormInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReleaseLindormInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReleaseLindormInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReleaseLindormInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReleaseLindormInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void ReleaseLindormInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReleaseLindormInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ReleaseLindormInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


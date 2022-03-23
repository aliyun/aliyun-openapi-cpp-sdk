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

#include <alibabacloud/r-kvstore/model/AllocateDirectConnectionRequest.h>

using AlibabaCloud::R_kvstore::Model::AllocateDirectConnectionRequest;

AllocateDirectConnectionRequest::AllocateDirectConnectionRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "AllocateDirectConnection") {
  setMethod(HttpRequest::Method::Post);
}

AllocateDirectConnectionRequest::~AllocateDirectConnectionRequest() {}

long AllocateDirectConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateDirectConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateDirectConnectionRequest::getConnectionString() const {
  return connectionString_;
}

void AllocateDirectConnectionRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string AllocateDirectConnectionRequest::getClientToken() const {
  return clientToken_;
}

void AllocateDirectConnectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocateDirectConnectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AllocateDirectConnectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool AllocateDirectConnectionRequest::getOnlyAllocateIp() const {
  return onlyAllocateIp_;
}

void AllocateDirectConnectionRequest::setOnlyAllocateIp(bool onlyAllocateIp) {
  onlyAllocateIp_ = onlyAllocateIp;
  setParameter(std::string("OnlyAllocateIp"), onlyAllocateIp ? "true" : "false");
}

std::string AllocateDirectConnectionRequest::getSecurityToken() const {
  return securityToken_;
}

void AllocateDirectConnectionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string AllocateDirectConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateDirectConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateDirectConnectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateDirectConnectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateDirectConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateDirectConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AllocateDirectConnectionRequest::getInstanceId() const {
  return instanceId_;
}

void AllocateDirectConnectionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AllocateDirectConnectionRequest::getPort() const {
  return port_;
}

void AllocateDirectConnectionRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}


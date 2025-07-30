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

#include <alibabacloud/r-kvstore/model/DeleteShardingNodeRequest.h>

using AlibabaCloud::R_kvstore::Model::DeleteShardingNodeRequest;

DeleteShardingNodeRequest::DeleteShardingNodeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DeleteShardingNode") {
  setMethod(HttpRequest::Method::Post);
}

DeleteShardingNodeRequest::~DeleteShardingNodeRequest() {}

long DeleteShardingNodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteShardingNodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteShardingNodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteShardingNodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteShardingNodeRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteShardingNodeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DeleteShardingNodeRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void DeleteShardingNodeRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string DeleteShardingNodeRequest::getNodeId() const {
  return nodeId_;
}

void DeleteShardingNodeRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

int DeleteShardingNodeRequest::getShardCount() const {
  return shardCount_;
}

void DeleteShardingNodeRequest::setShardCount(int shardCount) {
  shardCount_ = shardCount;
  setParameter(std::string("ShardCount"), std::to_string(shardCount));
}

std::string DeleteShardingNodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteShardingNodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteShardingNodeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteShardingNodeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteShardingNodeRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteShardingNodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DeleteShardingNodeRequest::getForceTrans() const {
  return forceTrans_;
}

void DeleteShardingNodeRequest::setForceTrans(bool forceTrans) {
  forceTrans_ = forceTrans;
  setParameter(std::string("ForceTrans"), forceTrans ? "true" : "false");
}

std::string DeleteShardingNodeRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteShardingNodeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


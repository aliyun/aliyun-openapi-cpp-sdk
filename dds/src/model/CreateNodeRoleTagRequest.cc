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

#include <alibabacloud/dds/model/CreateNodeRoleTagRequest.h>

using AlibabaCloud::Dds::Model::CreateNodeRoleTagRequest;

CreateNodeRoleTagRequest::CreateNodeRoleTagRequest()
    : RpcServiceRequest("dds", "2015-12-01", "CreateNodeRoleTag") {
  setMethod(HttpRequest::Method::Post);
}

CreateNodeRoleTagRequest::~CreateNodeRoleTagRequest() {}

long CreateNodeRoleTagRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNodeRoleTagRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNodeRoleTagRequest::getShardList() const {
  return shardList_;
}

void CreateNodeRoleTagRequest::setShardList(const std::string &shardList) {
  shardList_ = shardList;
  setParameter(std::string("ShardList"), shardList);
}

std::string CreateNodeRoleTagRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateNodeRoleTagRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateNodeRoleTagRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateNodeRoleTagRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateNodeRoleTagRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNodeRoleTagRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNodeRoleTagRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNodeRoleTagRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateNodeRoleTagRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNodeRoleTagRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


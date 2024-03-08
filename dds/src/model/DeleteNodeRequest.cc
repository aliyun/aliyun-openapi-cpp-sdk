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

#include <alibabacloud/dds/model/DeleteNodeRequest.h>

using AlibabaCloud::Dds::Model::DeleteNodeRequest;

DeleteNodeRequest::DeleteNodeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DeleteNode") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNodeRequest::~DeleteNodeRequest() {}

long DeleteNodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteNodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteNodeRequest::getClientToken() const {
  return clientToken_;
}

void DeleteNodeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteNodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteNodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteNodeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteNodeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteNodeRequest::getNodeId() const {
  return nodeId_;
}

void DeleteNodeRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DeleteNodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteNodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteNodeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteNodeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteNodeRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteNodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


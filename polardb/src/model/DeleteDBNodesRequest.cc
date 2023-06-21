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

#include <alibabacloud/polardb/model/DeleteDBNodesRequest.h>

using AlibabaCloud::Polardb::Model::DeleteDBNodesRequest;

DeleteDBNodesRequest::DeleteDBNodesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteDBNodes") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBNodesRequest::~DeleteDBNodesRequest() {}

long DeleteDBNodesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBNodesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> DeleteDBNodesRequest::getDBNodeId() const {
  return dBNodeId_;
}

void DeleteDBNodesRequest::setDBNodeId(const std::vector<std::string> &dBNodeId) {
  dBNodeId_ = dBNodeId;
}

std::string DeleteDBNodesRequest::getClientToken() const {
  return clientToken_;
}

void DeleteDBNodesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteDBNodesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBNodesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBNodesRequest::getDBNodeType() const {
  return dBNodeType_;
}

void DeleteDBNodesRequest::setDBNodeType(const std::string &dBNodeType) {
  dBNodeType_ = dBNodeType;
  setParameter(std::string("DBNodeType"), dBNodeType);
}

std::string DeleteDBNodesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDBNodesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDBNodesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteDBNodesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteDBNodesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDBNodesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDBNodesRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBNodesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


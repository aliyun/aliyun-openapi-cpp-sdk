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

#include <alibabacloud/dds/model/ReleaseNodePrivateNetworkAddressRequest.h>

using AlibabaCloud::Dds::Model::ReleaseNodePrivateNetworkAddressRequest;

ReleaseNodePrivateNetworkAddressRequest::ReleaseNodePrivateNetworkAddressRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ReleaseNodePrivateNetworkAddress") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseNodePrivateNetworkAddressRequest::~ReleaseNodePrivateNetworkAddressRequest() {}

long ReleaseNodePrivateNetworkAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReleaseNodePrivateNetworkAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReleaseNodePrivateNetworkAddressRequest::getNetworkType() const {
  return networkType_;
}

void ReleaseNodePrivateNetworkAddressRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string ReleaseNodePrivateNetworkAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReleaseNodePrivateNetworkAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReleaseNodePrivateNetworkAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ReleaseNodePrivateNetworkAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ReleaseNodePrivateNetworkAddressRequest::getConnectionType() const {
  return connectionType_;
}

void ReleaseNodePrivateNetworkAddressRequest::setConnectionType(const std::string &connectionType) {
  connectionType_ = connectionType;
  setParameter(std::string("ConnectionType"), connectionType);
}

std::string ReleaseNodePrivateNetworkAddressRequest::getNodeId() const {
  return nodeId_;
}

void ReleaseNodePrivateNetworkAddressRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string ReleaseNodePrivateNetworkAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReleaseNodePrivateNetworkAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReleaseNodePrivateNetworkAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReleaseNodePrivateNetworkAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReleaseNodePrivateNetworkAddressRequest::getOwnerId() const {
  return ownerId_;
}

void ReleaseNodePrivateNetworkAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


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

#include <alibabacloud/dds/model/ReleasePublicNetworkAddressRequest.h>

using AlibabaCloud::Dds::Model::ReleasePublicNetworkAddressRequest;

ReleasePublicNetworkAddressRequest::ReleasePublicNetworkAddressRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ReleasePublicNetworkAddress") {
  setMethod(HttpRequest::Method::Post);
}

ReleasePublicNetworkAddressRequest::~ReleasePublicNetworkAddressRequest() {}

long ReleasePublicNetworkAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReleasePublicNetworkAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReleasePublicNetworkAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReleasePublicNetworkAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReleasePublicNetworkAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ReleasePublicNetworkAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ReleasePublicNetworkAddressRequest::getConnectionType() const {
  return connectionType_;
}

void ReleasePublicNetworkAddressRequest::setConnectionType(const std::string &connectionType) {
  connectionType_ = connectionType;
  setParameter(std::string("ConnectionType"), connectionType);
}

std::string ReleasePublicNetworkAddressRequest::getNodeId() const {
  return nodeId_;
}

void ReleasePublicNetworkAddressRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string ReleasePublicNetworkAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReleasePublicNetworkAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReleasePublicNetworkAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReleasePublicNetworkAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReleasePublicNetworkAddressRequest::getOwnerId() const {
  return ownerId_;
}

void ReleasePublicNetworkAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


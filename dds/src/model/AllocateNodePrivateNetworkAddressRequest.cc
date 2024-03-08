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

#include <alibabacloud/dds/model/AllocateNodePrivateNetworkAddressRequest.h>

using AlibabaCloud::Dds::Model::AllocateNodePrivateNetworkAddressRequest;

AllocateNodePrivateNetworkAddressRequest::AllocateNodePrivateNetworkAddressRequest()
    : RpcServiceRequest("dds", "2015-12-01", "AllocateNodePrivateNetworkAddress") {
  setMethod(HttpRequest::Method::Post);
}

AllocateNodePrivateNetworkAddressRequest::~AllocateNodePrivateNetworkAddressRequest() {}

long AllocateNodePrivateNetworkAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateNodePrivateNetworkAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateNodePrivateNetworkAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AllocateNodePrivateNetworkAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AllocateNodePrivateNetworkAddressRequest::getAccountName() const {
  return accountName_;
}

void AllocateNodePrivateNetworkAddressRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string AllocateNodePrivateNetworkAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void AllocateNodePrivateNetworkAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string AllocateNodePrivateNetworkAddressRequest::getNodeId() const {
  return nodeId_;
}

void AllocateNodePrivateNetworkAddressRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string AllocateNodePrivateNetworkAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateNodePrivateNetworkAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateNodePrivateNetworkAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateNodePrivateNetworkAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateNodePrivateNetworkAddressRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateNodePrivateNetworkAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AllocateNodePrivateNetworkAddressRequest::getAccountPassword() const {
  return accountPassword_;
}

void AllocateNodePrivateNetworkAddressRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string AllocateNodePrivateNetworkAddressRequest::getZoneId() const {
  return zoneId_;
}

void AllocateNodePrivateNetworkAddressRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}


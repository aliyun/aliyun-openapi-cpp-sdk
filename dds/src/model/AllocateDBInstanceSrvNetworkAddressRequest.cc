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

#include <alibabacloud/dds/model/AllocateDBInstanceSrvNetworkAddressRequest.h>

using AlibabaCloud::Dds::Model::AllocateDBInstanceSrvNetworkAddressRequest;

AllocateDBInstanceSrvNetworkAddressRequest::AllocateDBInstanceSrvNetworkAddressRequest()
    : RpcServiceRequest("dds", "2015-12-01", "AllocateDBInstanceSrvNetworkAddress") {
  setMethod(HttpRequest::Method::Post);
}

AllocateDBInstanceSrvNetworkAddressRequest::~AllocateDBInstanceSrvNetworkAddressRequest() {}

long AllocateDBInstanceSrvNetworkAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateDBInstanceSrvNetworkAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateDBInstanceSrvNetworkAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AllocateDBInstanceSrvNetworkAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AllocateDBInstanceSrvNetworkAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void AllocateDBInstanceSrvNetworkAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string AllocateDBInstanceSrvNetworkAddressRequest::getNodeId() const {
  return nodeId_;
}

void AllocateDBInstanceSrvNetworkAddressRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string AllocateDBInstanceSrvNetworkAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateDBInstanceSrvNetworkAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateDBInstanceSrvNetworkAddressRequest::getSrvConnectionType() const {
  return srvConnectionType_;
}

void AllocateDBInstanceSrvNetworkAddressRequest::setSrvConnectionType(const std::string &srvConnectionType) {
  srvConnectionType_ = srvConnectionType;
  setParameter(std::string("SrvConnectionType"), srvConnectionType);
}

std::string AllocateDBInstanceSrvNetworkAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateDBInstanceSrvNetworkAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateDBInstanceSrvNetworkAddressRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateDBInstanceSrvNetworkAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


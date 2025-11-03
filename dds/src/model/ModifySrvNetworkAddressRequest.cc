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

#include <alibabacloud/dds/model/ModifySrvNetworkAddressRequest.h>

using AlibabaCloud::Dds::Model::ModifySrvNetworkAddressRequest;

ModifySrvNetworkAddressRequest::ModifySrvNetworkAddressRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifySrvNetworkAddress") {
  setMethod(HttpRequest::Method::Post);
}

ModifySrvNetworkAddressRequest::~ModifySrvNetworkAddressRequest() {}

long ModifySrvNetworkAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySrvNetworkAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySrvNetworkAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifySrvNetworkAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifySrvNetworkAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifySrvNetworkAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifySrvNetworkAddressRequest::getConnectionType() const {
  return connectionType_;
}

void ModifySrvNetworkAddressRequest::setConnectionType(const std::string &connectionType) {
  connectionType_ = connectionType;
  setParameter(std::string("ConnectionType"), connectionType);
}

std::string ModifySrvNetworkAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySrvNetworkAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySrvNetworkAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySrvNetworkAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifySrvNetworkAddressRequest::getNewConnectionString() const {
  return newConnectionString_;
}

void ModifySrvNetworkAddressRequest::setNewConnectionString(const std::string &newConnectionString) {
  newConnectionString_ = newConnectionString;
  setParameter(std::string("NewConnectionString"), newConnectionString);
}

long ModifySrvNetworkAddressRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySrvNetworkAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


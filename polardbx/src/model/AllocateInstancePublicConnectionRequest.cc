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

#include <alibabacloud/polardbx/model/AllocateInstancePublicConnectionRequest.h>

using AlibabaCloud::Polardbx::Model::AllocateInstancePublicConnectionRequest;

AllocateInstancePublicConnectionRequest::AllocateInstancePublicConnectionRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "AllocateInstancePublicConnection") {
  setMethod(HttpRequest::Method::Post);
}

AllocateInstancePublicConnectionRequest::~AllocateInstancePublicConnectionRequest() {}

std::string AllocateInstancePublicConnectionRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void AllocateInstancePublicConnectionRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long AllocateInstancePublicConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateInstancePublicConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateInstancePublicConnectionRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void AllocateInstancePublicConnectionRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

std::string AllocateInstancePublicConnectionRequest::getRegionId() const {
  return regionId_;
}

void AllocateInstancePublicConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AllocateInstancePublicConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateInstancePublicConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateInstancePublicConnectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateInstancePublicConnectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateInstancePublicConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateInstancePublicConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AllocateInstancePublicConnectionRequest::getPort() const {
  return port_;
}

void AllocateInstancePublicConnectionRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}


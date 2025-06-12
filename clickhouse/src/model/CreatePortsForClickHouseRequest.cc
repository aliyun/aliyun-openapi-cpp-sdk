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

#include <alibabacloud/clickhouse/model/CreatePortsForClickHouseRequest.h>

using AlibabaCloud::Clickhouse::Model::CreatePortsForClickHouseRequest;

CreatePortsForClickHouseRequest::CreatePortsForClickHouseRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CreatePortsForClickHouse") {
  setMethod(HttpRequest::Method::Post);
}

CreatePortsForClickHouseRequest::~CreatePortsForClickHouseRequest() {}

long CreatePortsForClickHouseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreatePortsForClickHouseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreatePortsForClickHouseRequest::getPortType() const {
  return portType_;
}

void CreatePortsForClickHouseRequest::setPortType(const std::string &portType) {
  portType_ = portType;
  setParameter(std::string("PortType"), portType);
}

std::string CreatePortsForClickHouseRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreatePortsForClickHouseRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreatePortsForClickHouseRequest::getRegionId() const {
  return regionId_;
}

void CreatePortsForClickHouseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePortsForClickHouseRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreatePortsForClickHouseRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreatePortsForClickHouseRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreatePortsForClickHouseRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreatePortsForClickHouseRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreatePortsForClickHouseRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreatePortsForClickHouseRequest::getOwnerId() const {
  return ownerId_;
}

void CreatePortsForClickHouseRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


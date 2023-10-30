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

#include <alibabacloud/polardb/model/ModifyDBEndpointAddressRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBEndpointAddressRequest;

ModifyDBEndpointAddressRequest::ModifyDBEndpointAddressRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBEndpointAddress") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBEndpointAddressRequest::~ModifyDBEndpointAddressRequest() {}

long ModifyDBEndpointAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBEndpointAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBEndpointAddressRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void ModifyDBEndpointAddressRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

std::string ModifyDBEndpointAddressRequest::getDBEndpointId() const {
  return dBEndpointId_;
}

void ModifyDBEndpointAddressRequest::setDBEndpointId(const std::string &dBEndpointId) {
  dBEndpointId_ = dBEndpointId;
  setParameter(std::string("DBEndpointId"), dBEndpointId);
}

std::string ModifyDBEndpointAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBEndpointAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBEndpointAddressRequest::getPrivateZoneName() const {
  return privateZoneName_;
}

void ModifyDBEndpointAddressRequest::setPrivateZoneName(const std::string &privateZoneName) {
  privateZoneName_ = privateZoneName;
  setParameter(std::string("PrivateZoneName"), privateZoneName);
}

std::string ModifyDBEndpointAddressRequest::getPrivateZoneAddressPrefix() const {
  return privateZoneAddressPrefix_;
}

void ModifyDBEndpointAddressRequest::setPrivateZoneAddressPrefix(const std::string &privateZoneAddressPrefix) {
  privateZoneAddressPrefix_ = privateZoneAddressPrefix;
  setParameter(std::string("PrivateZoneAddressPrefix"), privateZoneAddressPrefix);
}

std::string ModifyDBEndpointAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBEndpointAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBEndpointAddressRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBEndpointAddressRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBEndpointAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBEndpointAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBEndpointAddressRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBEndpointAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBEndpointAddressRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyDBEndpointAddressRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyDBEndpointAddressRequest::getPort() const {
  return port_;
}

void ModifyDBEndpointAddressRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string ModifyDBEndpointAddressRequest::getNetType() const {
  return netType_;
}

void ModifyDBEndpointAddressRequest::setNetType(const std::string &netType) {
  netType_ = netType;
  setParameter(std::string("NetType"), netType);
}

std::string ModifyDBEndpointAddressRequest::getVPCId() const {
  return vPCId_;
}

void ModifyDBEndpointAddressRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}


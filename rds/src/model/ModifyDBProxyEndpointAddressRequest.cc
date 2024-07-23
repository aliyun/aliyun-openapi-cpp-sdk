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

#include <alibabacloud/rds/model/ModifyDBProxyEndpointAddressRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBProxyEndpointAddressRequest;

ModifyDBProxyEndpointAddressRequest::ModifyDBProxyEndpointAddressRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBProxyEndpointAddress") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBProxyEndpointAddressRequest::~ModifyDBProxyEndpointAddressRequest() {}

long ModifyDBProxyEndpointAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBProxyEndpointAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBProxyEndpointAddressRequest::getDBProxyConnectStringNetType() const {
  return dBProxyConnectStringNetType_;
}

void ModifyDBProxyEndpointAddressRequest::setDBProxyConnectStringNetType(const std::string &dBProxyConnectStringNetType) {
  dBProxyConnectStringNetType_ = dBProxyConnectStringNetType;
  setParameter(std::string("DBProxyConnectStringNetType"), dBProxyConnectStringNetType);
}

std::string ModifyDBProxyEndpointAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBProxyEndpointAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBProxyEndpointAddressRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBProxyEndpointAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBProxyEndpointAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBProxyEndpointAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBProxyEndpointAddressRequest::getDBProxyNewConnectStringPort() const {
  return dBProxyNewConnectStringPort_;
}

void ModifyDBProxyEndpointAddressRequest::setDBProxyNewConnectStringPort(const std::string &dBProxyNewConnectStringPort) {
  dBProxyNewConnectStringPort_ = dBProxyNewConnectStringPort;
  setParameter(std::string("DBProxyNewConnectStringPort"), dBProxyNewConnectStringPort);
}

std::string ModifyDBProxyEndpointAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBProxyEndpointAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBProxyEndpointAddressRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void ModifyDBProxyEndpointAddressRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

long ModifyDBProxyEndpointAddressRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBProxyEndpointAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBProxyEndpointAddressRequest::getDBProxyEndpointId() const {
  return dBProxyEndpointId_;
}

void ModifyDBProxyEndpointAddressRequest::setDBProxyEndpointId(const std::string &dBProxyEndpointId) {
  dBProxyEndpointId_ = dBProxyEndpointId;
  setParameter(std::string("DBProxyEndpointId"), dBProxyEndpointId);
}

std::string ModifyDBProxyEndpointAddressRequest::getDBProxyNewConnectString() const {
  return dBProxyNewConnectString_;
}

void ModifyDBProxyEndpointAddressRequest::setDBProxyNewConnectString(const std::string &dBProxyNewConnectString) {
  dBProxyNewConnectString_ = dBProxyNewConnectString;
  setParameter(std::string("DBProxyNewConnectString"), dBProxyNewConnectString);
}


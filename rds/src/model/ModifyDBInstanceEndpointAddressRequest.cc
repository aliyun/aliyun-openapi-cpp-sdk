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

#include <alibabacloud/rds/model/ModifyDBInstanceEndpointAddressRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceEndpointAddressRequest;

ModifyDBInstanceEndpointAddressRequest::ModifyDBInstanceEndpointAddressRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceEndpointAddress") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceEndpointAddressRequest::~ModifyDBInstanceEndpointAddressRequest() {}

std::string ModifyDBInstanceEndpointAddressRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void ModifyDBInstanceEndpointAddressRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

long ModifyDBInstanceEndpointAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceEndpointAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceEndpointAddressRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBInstanceEndpointAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBInstanceEndpointAddressRequest::getConnectionString() const {
  return connectionString_;
}

void ModifyDBInstanceEndpointAddressRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string ModifyDBInstanceEndpointAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceEndpointAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceEndpointAddressRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceEndpointAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceEndpointAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceEndpointAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceEndpointAddressRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyDBInstanceEndpointAddressRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyDBInstanceEndpointAddressRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void ModifyDBInstanceEndpointAddressRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string ModifyDBInstanceEndpointAddressRequest::getDBInstanceEndpointId() const {
  return dBInstanceEndpointId_;
}

void ModifyDBInstanceEndpointAddressRequest::setDBInstanceEndpointId(const std::string &dBInstanceEndpointId) {
  dBInstanceEndpointId_ = dBInstanceEndpointId;
  setParameter(std::string("DBInstanceEndpointId"), dBInstanceEndpointId);
}

std::string ModifyDBInstanceEndpointAddressRequest::getPort() const {
  return port_;
}

void ModifyDBInstanceEndpointAddressRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string ModifyDBInstanceEndpointAddressRequest::getVpcId() const {
  return vpcId_;
}

void ModifyDBInstanceEndpointAddressRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


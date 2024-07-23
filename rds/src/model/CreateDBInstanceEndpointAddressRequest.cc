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

#include <alibabacloud/rds/model/CreateDBInstanceEndpointAddressRequest.h>

using AlibabaCloud::Rds::Model::CreateDBInstanceEndpointAddressRequest;

CreateDBInstanceEndpointAddressRequest::CreateDBInstanceEndpointAddressRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateDBInstanceEndpointAddress") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceEndpointAddressRequest::~CreateDBInstanceEndpointAddressRequest() {}

std::string CreateDBInstanceEndpointAddressRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void CreateDBInstanceEndpointAddressRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

long CreateDBInstanceEndpointAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBInstanceEndpointAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBInstanceEndpointAddressRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBInstanceEndpointAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBInstanceEndpointAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBInstanceEndpointAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBInstanceEndpointAddressRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBInstanceEndpointAddressRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBInstanceEndpointAddressRequest::getRegionId() const {
  return regionId_;
}

void CreateDBInstanceEndpointAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBInstanceEndpointAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateDBInstanceEndpointAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateDBInstanceEndpointAddressRequest::getIpType() const {
  return ipType_;
}

void CreateDBInstanceEndpointAddressRequest::setIpType(const std::string &ipType) {
  ipType_ = ipType;
  setParameter(std::string("IpType"), ipType);
}

std::string CreateDBInstanceEndpointAddressRequest::getDBInstanceEndpointId() const {
  return dBInstanceEndpointId_;
}

void CreateDBInstanceEndpointAddressRequest::setDBInstanceEndpointId(const std::string &dBInstanceEndpointId) {
  dBInstanceEndpointId_ = dBInstanceEndpointId;
  setParameter(std::string("DBInstanceEndpointId"), dBInstanceEndpointId);
}

std::string CreateDBInstanceEndpointAddressRequest::getPort() const {
  return port_;
}

void CreateDBInstanceEndpointAddressRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}


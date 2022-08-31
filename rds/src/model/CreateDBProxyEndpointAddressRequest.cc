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

#include <alibabacloud/rds/model/CreateDBProxyEndpointAddressRequest.h>

using AlibabaCloud::Rds::Model::CreateDBProxyEndpointAddressRequest;

CreateDBProxyEndpointAddressRequest::CreateDBProxyEndpointAddressRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateDBProxyEndpointAddress") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBProxyEndpointAddressRequest::~CreateDBProxyEndpointAddressRequest() {}

std::string CreateDBProxyEndpointAddressRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void CreateDBProxyEndpointAddressRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

std::string CreateDBProxyEndpointAddressRequest::getDBProxyConnectStringNetType() const {
  return dBProxyConnectStringNetType_;
}

void CreateDBProxyEndpointAddressRequest::setDBProxyConnectStringNetType(const std::string &dBProxyConnectStringNetType) {
  dBProxyConnectStringNetType_ = dBProxyConnectStringNetType;
  setParameter(std::string("DBProxyConnectStringNetType"), dBProxyConnectStringNetType);
}

std::string CreateDBProxyEndpointAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBProxyEndpointAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBProxyEndpointAddressRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBProxyEndpointAddressRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBProxyEndpointAddressRequest::getRegionId() const {
  return regionId_;
}

void CreateDBProxyEndpointAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBProxyEndpointAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateDBProxyEndpointAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateDBProxyEndpointAddressRequest::getDBProxyNewConnectStringPort() const {
  return dBProxyNewConnectStringPort_;
}

void CreateDBProxyEndpointAddressRequest::setDBProxyNewConnectStringPort(const std::string &dBProxyNewConnectStringPort) {
  dBProxyNewConnectStringPort_ = dBProxyNewConnectStringPort;
  setParameter(std::string("DBProxyNewConnectStringPort"), dBProxyNewConnectStringPort);
}

std::string CreateDBProxyEndpointAddressRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void CreateDBProxyEndpointAddressRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

std::string CreateDBProxyEndpointAddressRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBProxyEndpointAddressRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBProxyEndpointAddressRequest::getDBProxyEndpointId() const {
  return dBProxyEndpointId_;
}

void CreateDBProxyEndpointAddressRequest::setDBProxyEndpointId(const std::string &dBProxyEndpointId) {
  dBProxyEndpointId_ = dBProxyEndpointId;
  setParameter(std::string("DBProxyEndpointId"), dBProxyEndpointId);
}

std::string CreateDBProxyEndpointAddressRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBProxyEndpointAddressRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}


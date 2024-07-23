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

#include <alibabacloud/rds/model/CreateDBInstanceEndpointRequest.h>

using AlibabaCloud::Rds::Model::CreateDBInstanceEndpointRequest;

CreateDBInstanceEndpointRequest::CreateDBInstanceEndpointRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateDBInstanceEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceEndpointRequest::~CreateDBInstanceEndpointRequest() {}

std::string CreateDBInstanceEndpointRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void CreateDBInstanceEndpointRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

long CreateDBInstanceEndpointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBInstanceEndpointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBInstanceEndpointRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBInstanceEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBInstanceEndpointRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBInstanceEndpointRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBInstanceEndpointRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBInstanceEndpointRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBInstanceEndpointRequest::getRegionId() const {
  return regionId_;
}

void CreateDBInstanceEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBInstanceEndpointRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateDBInstanceEndpointRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateDBInstanceEndpointRequest::getDBInstanceEndpointDescription() const {
  return dBInstanceEndpointDescription_;
}

void CreateDBInstanceEndpointRequest::setDBInstanceEndpointDescription(const std::string &dBInstanceEndpointDescription) {
  dBInstanceEndpointDescription_ = dBInstanceEndpointDescription;
  setParameter(std::string("DBInstanceEndpointDescription"), dBInstanceEndpointDescription);
}

std::string CreateDBInstanceEndpointRequest::getDBInstanceEndpointType() const {
  return dBInstanceEndpointType_;
}

void CreateDBInstanceEndpointRequest::setDBInstanceEndpointType(const std::string &dBInstanceEndpointType) {
  dBInstanceEndpointType_ = dBInstanceEndpointType;
  setParameter(std::string("DBInstanceEndpointType"), dBInstanceEndpointType);
}

std::string CreateDBInstanceEndpointRequest::getNodeItems() const {
  return nodeItems_;
}

void CreateDBInstanceEndpointRequest::setNodeItems(const std::string &nodeItems) {
  nodeItems_ = nodeItems;
  setParameter(std::string("NodeItems"), nodeItems);
}

std::string CreateDBInstanceEndpointRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBInstanceEndpointRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBInstanceEndpointRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateDBInstanceEndpointRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CreateDBInstanceEndpointRequest::getPort() const {
  return port_;
}

void CreateDBInstanceEndpointRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string CreateDBInstanceEndpointRequest::getVpcId() const {
  return vpcId_;
}

void CreateDBInstanceEndpointRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


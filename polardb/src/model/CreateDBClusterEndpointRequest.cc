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

#include <alibabacloud/polardb/model/CreateDBClusterEndpointRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBClusterEndpointRequest;

CreateDBClusterEndpointRequest::CreateDBClusterEndpointRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateDBClusterEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBClusterEndpointRequest::~CreateDBClusterEndpointRequest() {}

std::string CreateDBClusterEndpointRequest::getAutoAddNewNodes() const {
  return autoAddNewNodes_;
}

void CreateDBClusterEndpointRequest::setAutoAddNewNodes(const std::string &autoAddNewNodes) {
  autoAddNewNodes_ = autoAddNewNodes;
  setParameter(std::string("AutoAddNewNodes"), autoAddNewNodes);
}

long CreateDBClusterEndpointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBClusterEndpointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBClusterEndpointRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBClusterEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBClusterEndpointRequest::getPolarSccWaitTimeout() const {
  return polarSccWaitTimeout_;
}

void CreateDBClusterEndpointRequest::setPolarSccWaitTimeout(const std::string &polarSccWaitTimeout) {
  polarSccWaitTimeout_ = polarSccWaitTimeout;
  setParameter(std::string("PolarSccWaitTimeout"), polarSccWaitTimeout);
}

std::string CreateDBClusterEndpointRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBClusterEndpointRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBClusterEndpointRequest::getReadWriteMode() const {
  return readWriteMode_;
}

void CreateDBClusterEndpointRequest::setReadWriteMode(const std::string &readWriteMode) {
  readWriteMode_ = readWriteMode;
  setParameter(std::string("ReadWriteMode"), readWriteMode);
}

std::string CreateDBClusterEndpointRequest::getEndpointType() const {
  return endpointType_;
}

void CreateDBClusterEndpointRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::string CreateDBClusterEndpointRequest::getPolarSccTimeoutAction() const {
  return polarSccTimeoutAction_;
}

void CreateDBClusterEndpointRequest::setPolarSccTimeoutAction(const std::string &polarSccTimeoutAction) {
  polarSccTimeoutAction_ = polarSccTimeoutAction;
  setParameter(std::string("PolarSccTimeoutAction"), polarSccTimeoutAction);
}

std::string CreateDBClusterEndpointRequest::getEndpointSubCluster() const {
  return endpointSubCluster_;
}

void CreateDBClusterEndpointRequest::setEndpointSubCluster(const std::string &endpointSubCluster) {
  endpointSubCluster_ = endpointSubCluster;
  setParameter(std::string("EndpointSubCluster"), endpointSubCluster);
}

std::string CreateDBClusterEndpointRequest::getStandbyVSwitchId() const {
  return standbyVSwitchId_;
}

void CreateDBClusterEndpointRequest::setStandbyVSwitchId(const std::string &standbyVSwitchId) {
  standbyVSwitchId_ = standbyVSwitchId;
  setParameter(std::string("StandbyVSwitchId"), standbyVSwitchId);
}

std::string CreateDBClusterEndpointRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBClusterEndpointRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBClusterEndpointRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateDBClusterEndpointRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateDBClusterEndpointRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBClusterEndpointRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDBClusterEndpointRequest::getEndpointConfig() const {
  return endpointConfig_;
}

void CreateDBClusterEndpointRequest::setEndpointConfig(const std::string &endpointConfig) {
  endpointConfig_ = endpointConfig;
  setParameter(std::string("EndpointConfig"), endpointConfig);
}

std::string CreateDBClusterEndpointRequest::getDBEndpointDescription() const {
  return dBEndpointDescription_;
}

void CreateDBClusterEndpointRequest::setDBEndpointDescription(const std::string &dBEndpointDescription) {
  dBEndpointDescription_ = dBEndpointDescription;
  setParameter(std::string("DBEndpointDescription"), dBEndpointDescription);
}

long CreateDBClusterEndpointRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBClusterEndpointRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBClusterEndpointRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBClusterEndpointRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBClusterEndpointRequest::getNodes() const {
  return nodes_;
}

void CreateDBClusterEndpointRequest::setNodes(const std::string &nodes) {
  nodes_ = nodes;
  setParameter(std::string("Nodes"), nodes);
}

std::string CreateDBClusterEndpointRequest::getSccMode() const {
  return sccMode_;
}

void CreateDBClusterEndpointRequest::setSccMode(const std::string &sccMode) {
  sccMode_ = sccMode;
  setParameter(std::string("SccMode"), sccMode);
}

std::string CreateDBClusterEndpointRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBClusterEndpointRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}


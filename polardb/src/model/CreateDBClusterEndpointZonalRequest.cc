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

#include <alibabacloud/polardb/model/CreateDBClusterEndpointZonalRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBClusterEndpointZonalRequest;

CreateDBClusterEndpointZonalRequest::CreateDBClusterEndpointZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateDBClusterEndpointZonal") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBClusterEndpointZonalRequest::~CreateDBClusterEndpointZonalRequest() {}

std::string CreateDBClusterEndpointZonalRequest::getAutoAddNewNodes() const {
  return autoAddNewNodes_;
}

void CreateDBClusterEndpointZonalRequest::setAutoAddNewNodes(const std::string &autoAddNewNodes) {
  autoAddNewNodes_ = autoAddNewNodes;
  setParameter(std::string("AutoAddNewNodes"), autoAddNewNodes);
}

long CreateDBClusterEndpointZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBClusterEndpointZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBClusterEndpointZonalRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBClusterEndpointZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBClusterEndpointZonalRequest::getPolarSccWaitTimeout() const {
  return polarSccWaitTimeout_;
}

void CreateDBClusterEndpointZonalRequest::setPolarSccWaitTimeout(const std::string &polarSccWaitTimeout) {
  polarSccWaitTimeout_ = polarSccWaitTimeout;
  setParameter(std::string("PolarSccWaitTimeout"), polarSccWaitTimeout);
}

std::string CreateDBClusterEndpointZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBClusterEndpointZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBClusterEndpointZonalRequest::getReadWriteMode() const {
  return readWriteMode_;
}

void CreateDBClusterEndpointZonalRequest::setReadWriteMode(const std::string &readWriteMode) {
  readWriteMode_ = readWriteMode;
  setParameter(std::string("ReadWriteMode"), readWriteMode);
}

std::string CreateDBClusterEndpointZonalRequest::getEndpointType() const {
  return endpointType_;
}

void CreateDBClusterEndpointZonalRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::string CreateDBClusterEndpointZonalRequest::getPolarSccTimeoutAction() const {
  return polarSccTimeoutAction_;
}

void CreateDBClusterEndpointZonalRequest::setPolarSccTimeoutAction(const std::string &polarSccTimeoutAction) {
  polarSccTimeoutAction_ = polarSccTimeoutAction;
  setParameter(std::string("PolarSccTimeoutAction"), polarSccTimeoutAction);
}

std::string CreateDBClusterEndpointZonalRequest::getEndpointSubCluster() const {
  return endpointSubCluster_;
}

void CreateDBClusterEndpointZonalRequest::setEndpointSubCluster(const std::string &endpointSubCluster) {
  endpointSubCluster_ = endpointSubCluster;
  setParameter(std::string("EndpointSubCluster"), endpointSubCluster);
}

std::string CreateDBClusterEndpointZonalRequest::getStandbyVSwitchId() const {
  return standbyVSwitchId_;
}

void CreateDBClusterEndpointZonalRequest::setStandbyVSwitchId(const std::string &standbyVSwitchId) {
  standbyVSwitchId_ = standbyVSwitchId;
  setParameter(std::string("StandbyVSwitchId"), standbyVSwitchId);
}

std::string CreateDBClusterEndpointZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBClusterEndpointZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBClusterEndpointZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateDBClusterEndpointZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateDBClusterEndpointZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBClusterEndpointZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDBClusterEndpointZonalRequest::getEndpointConfig() const {
  return endpointConfig_;
}

void CreateDBClusterEndpointZonalRequest::setEndpointConfig(const std::string &endpointConfig) {
  endpointConfig_ = endpointConfig;
  setParameter(std::string("EndpointConfig"), endpointConfig);
}

std::string CreateDBClusterEndpointZonalRequest::getDBEndpointDescription() const {
  return dBEndpointDescription_;
}

void CreateDBClusterEndpointZonalRequest::setDBEndpointDescription(const std::string &dBEndpointDescription) {
  dBEndpointDescription_ = dBEndpointDescription;
  setParameter(std::string("DBEndpointDescription"), dBEndpointDescription);
}

long CreateDBClusterEndpointZonalRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBClusterEndpointZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBClusterEndpointZonalRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBClusterEndpointZonalRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBClusterEndpointZonalRequest::getNodes() const {
  return nodes_;
}

void CreateDBClusterEndpointZonalRequest::setNodes(const std::string &nodes) {
  nodes_ = nodes;
  setParameter(std::string("Nodes"), nodes);
}

std::string CreateDBClusterEndpointZonalRequest::getSccMode() const {
  return sccMode_;
}

void CreateDBClusterEndpointZonalRequest::setSccMode(const std::string &sccMode) {
  sccMode_ = sccMode;
  setParameter(std::string("SccMode"), sccMode);
}

std::string CreateDBClusterEndpointZonalRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBClusterEndpointZonalRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}


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

#include <alibabacloud/polardb/model/ModifyDBClusterEndpointZonalRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterEndpointZonalRequest;

ModifyDBClusterEndpointZonalRequest::ModifyDBClusterEndpointZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterEndpointZonal") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterEndpointZonalRequest::~ModifyDBClusterEndpointZonalRequest() {}

std::string ModifyDBClusterEndpointZonalRequest::getAutoAddNewNodes() const {
  return autoAddNewNodes_;
}

void ModifyDBClusterEndpointZonalRequest::setAutoAddNewNodes(const std::string &autoAddNewNodes) {
  autoAddNewNodes_ = autoAddNewNodes;
  setParameter(std::string("AutoAddNewNodes"), autoAddNewNodes);
}

long ModifyDBClusterEndpointZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterEndpointZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterEndpointZonalRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBClusterEndpointZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBClusterEndpointZonalRequest::getDBEndpointId() const {
  return dBEndpointId_;
}

void ModifyDBClusterEndpointZonalRequest::setDBEndpointId(const std::string &dBEndpointId) {
  dBEndpointId_ = dBEndpointId;
  setParameter(std::string("DBEndpointId"), dBEndpointId);
}

std::string ModifyDBClusterEndpointZonalRequest::getPolarSccWaitTimeout() const {
  return polarSccWaitTimeout_;
}

void ModifyDBClusterEndpointZonalRequest::setPolarSccWaitTimeout(const std::string &polarSccWaitTimeout) {
  polarSccWaitTimeout_ = polarSccWaitTimeout;
  setParameter(std::string("PolarSccWaitTimeout"), polarSccWaitTimeout);
}

std::string ModifyDBClusterEndpointZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterEndpointZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterEndpointZonalRequest::getReadWriteMode() const {
  return readWriteMode_;
}

void ModifyDBClusterEndpointZonalRequest::setReadWriteMode(const std::string &readWriteMode) {
  readWriteMode_ = readWriteMode;
  setParameter(std::string("ReadWriteMode"), readWriteMode);
}

std::string ModifyDBClusterEndpointZonalRequest::getPolarSccTimeoutAction() const {
  return polarSccTimeoutAction_;
}

void ModifyDBClusterEndpointZonalRequest::setPolarSccTimeoutAction(const std::string &polarSccTimeoutAction) {
  polarSccTimeoutAction_ = polarSccTimeoutAction;
  setParameter(std::string("PolarSccTimeoutAction"), polarSccTimeoutAction);
}

std::string ModifyDBClusterEndpointZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterEndpointZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterEndpointZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterEndpointZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterEndpointZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterEndpointZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterEndpointZonalRequest::getEndpointConfig() const {
  return endpointConfig_;
}

void ModifyDBClusterEndpointZonalRequest::setEndpointConfig(const std::string &endpointConfig) {
  endpointConfig_ = endpointConfig;
  setParameter(std::string("EndpointConfig"), endpointConfig);
}

std::string ModifyDBClusterEndpointZonalRequest::getDBEndpointDescription() const {
  return dBEndpointDescription_;
}

void ModifyDBClusterEndpointZonalRequest::setDBEndpointDescription(const std::string &dBEndpointDescription) {
  dBEndpointDescription_ = dBEndpointDescription;
  setParameter(std::string("DBEndpointDescription"), dBEndpointDescription);
}

long ModifyDBClusterEndpointZonalRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterEndpointZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterEndpointZonalRequest::getNodes() const {
  return nodes_;
}

void ModifyDBClusterEndpointZonalRequest::setNodes(const std::string &nodes) {
  nodes_ = nodes;
  setParameter(std::string("Nodes"), nodes);
}

std::string ModifyDBClusterEndpointZonalRequest::getSccMode() const {
  return sccMode_;
}

void ModifyDBClusterEndpointZonalRequest::setSccMode(const std::string &sccMode) {
  sccMode_ = sccMode;
  setParameter(std::string("SccMode"), sccMode);
}


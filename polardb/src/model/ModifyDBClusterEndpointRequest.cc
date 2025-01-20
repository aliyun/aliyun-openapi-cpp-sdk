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

#include <alibabacloud/polardb/model/ModifyDBClusterEndpointRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterEndpointRequest;

ModifyDBClusterEndpointRequest::ModifyDBClusterEndpointRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterEndpointRequest::~ModifyDBClusterEndpointRequest() {}

std::string ModifyDBClusterEndpointRequest::getAutoAddNewNodes() const {
  return autoAddNewNodes_;
}

void ModifyDBClusterEndpointRequest::setAutoAddNewNodes(const std::string &autoAddNewNodes) {
  autoAddNewNodes_ = autoAddNewNodes;
  setParameter(std::string("AutoAddNewNodes"), autoAddNewNodes);
}

long ModifyDBClusterEndpointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterEndpointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterEndpointRequest::getDBEndpointId() const {
  return dBEndpointId_;
}

void ModifyDBClusterEndpointRequest::setDBEndpointId(const std::string &dBEndpointId) {
  dBEndpointId_ = dBEndpointId;
  setParameter(std::string("DBEndpointId"), dBEndpointId);
}

std::string ModifyDBClusterEndpointRequest::getPolarSccWaitTimeout() const {
  return polarSccWaitTimeout_;
}

void ModifyDBClusterEndpointRequest::setPolarSccWaitTimeout(const std::string &polarSccWaitTimeout) {
  polarSccWaitTimeout_ = polarSccWaitTimeout;
  setParameter(std::string("PolarSccWaitTimeout"), polarSccWaitTimeout);
}

std::string ModifyDBClusterEndpointRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterEndpointRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterEndpointRequest::getReadWriteMode() const {
  return readWriteMode_;
}

void ModifyDBClusterEndpointRequest::setReadWriteMode(const std::string &readWriteMode) {
  readWriteMode_ = readWriteMode;
  setParameter(std::string("ReadWriteMode"), readWriteMode);
}

std::string ModifyDBClusterEndpointRequest::getPolarSccTimeoutAction() const {
  return polarSccTimeoutAction_;
}

void ModifyDBClusterEndpointRequest::setPolarSccTimeoutAction(const std::string &polarSccTimeoutAction) {
  polarSccTimeoutAction_ = polarSccTimeoutAction;
  setParameter(std::string("PolarSccTimeoutAction"), polarSccTimeoutAction);
}

std::string ModifyDBClusterEndpointRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterEndpointRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterEndpointRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterEndpointRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterEndpointRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterEndpointRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterEndpointRequest::getEndpointConfig() const {
  return endpointConfig_;
}

void ModifyDBClusterEndpointRequest::setEndpointConfig(const std::string &endpointConfig) {
  endpointConfig_ = endpointConfig;
  setParameter(std::string("EndpointConfig"), endpointConfig);
}

std::string ModifyDBClusterEndpointRequest::getDBEndpointDescription() const {
  return dBEndpointDescription_;
}

void ModifyDBClusterEndpointRequest::setDBEndpointDescription(const std::string &dBEndpointDescription) {
  dBEndpointDescription_ = dBEndpointDescription;
  setParameter(std::string("DBEndpointDescription"), dBEndpointDescription);
}

long ModifyDBClusterEndpointRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterEndpointRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterEndpointRequest::getNodes() const {
  return nodes_;
}

void ModifyDBClusterEndpointRequest::setNodes(const std::string &nodes) {
  nodes_ = nodes;
  setParameter(std::string("Nodes"), nodes);
}

std::string ModifyDBClusterEndpointRequest::getSccMode() const {
  return sccMode_;
}

void ModifyDBClusterEndpointRequest::setSccMode(const std::string &sccMode) {
  sccMode_ = sccMode;
  setParameter(std::string("SccMode"), sccMode);
}


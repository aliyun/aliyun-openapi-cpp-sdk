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

#include <alibabacloud/ecs/model/ModifyNetworkInterfaceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyNetworkInterfaceAttributeRequest;

ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyNetworkInterfaceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNetworkInterfaceAttributeRequest::~ModifyNetworkInterfaceAttributeRequest() {}

int ModifyNetworkInterfaceAttributeRequest::getQueueNumber() const {
  return queueNumber_;
}

void ModifyNetworkInterfaceAttributeRequest::setQueueNumber(int queueNumber) {
  queueNumber_ = queueNumber;
  setParameter(std::string("QueueNumber"), std::to_string(queueNumber));
}

long ModifyNetworkInterfaceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyNetworkInterfaceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> ModifyNetworkInterfaceAttributeRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifyNetworkInterfaceAttributeRequest::setSecurityGroupId(const std::vector<std::string> &securityGroupId) {
  securityGroupId_ = securityGroupId;
}

std::string ModifyNetworkInterfaceAttributeRequest::getDescription() const {
  return description_;
}

void ModifyNetworkInterfaceAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceTrafficConfig() const {
  return networkInterfaceTrafficConfig_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceTrafficConfig(const ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig &networkInterfaceTrafficConfig) {
  networkInterfaceTrafficConfig_ = networkInterfaceTrafficConfig;
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".NetworkInterfaceTrafficMode", networkInterfaceTrafficConfig.networkInterfaceTrafficMode);
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".QueueNumber", std::to_string(networkInterfaceTrafficConfig.queueNumber));
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".QueuePairNumber", std::to_string(networkInterfaceTrafficConfig.queuePairNumber));
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".RxQueueSize", std::to_string(networkInterfaceTrafficConfig.rxQueueSize));
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".TxQueueSize", std::to_string(networkInterfaceTrafficConfig.txQueueSize));
}

ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork ModifyNetworkInterfaceAttributeRequest::getEnhancedNetwork() const {
  return enhancedNetwork_;
}

void ModifyNetworkInterfaceAttributeRequest::setEnhancedNetwork(const ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork &enhancedNetwork) {
  enhancedNetwork_ = enhancedNetwork;
  setParameter(std::string("EnhancedNetwork") + ".EnableSriov", enhancedNetwork.enableSriov ? "true" : "false");
  setParameter(std::string("EnhancedNetwork") + ".EnableRss", enhancedNetwork.enableRss ? "true" : "false");
}

bool ModifyNetworkInterfaceAttributeRequest::getSourceDestCheck() const {
  return sourceDestCheck_;
}

void ModifyNetworkInterfaceAttributeRequest::setSourceDestCheck(bool sourceDestCheck) {
  sourceDestCheck_ = sourceDestCheck;
  setParameter(std::string("SourceDestCheck"), sourceDestCheck ? "true" : "false");
}

std::string ModifyNetworkInterfaceAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyNetworkInterfaceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceName() const {
  return networkInterfaceName_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceName(const std::string &networkInterfaceName) {
  networkInterfaceName_ = networkInterfaceName;
  setParameter(std::string("NetworkInterfaceName"), networkInterfaceName);
}

int ModifyNetworkInterfaceAttributeRequest::getTxQueueSize() const {
  return txQueueSize_;
}

void ModifyNetworkInterfaceAttributeRequest::setTxQueueSize(int txQueueSize) {
  txQueueSize_ = txQueueSize;
  setParameter(std::string("TxQueueSize"), std::to_string(txQueueSize));
}

bool ModifyNetworkInterfaceAttributeRequest::getDeleteOnRelease() const {
  return deleteOnRelease_;
}

void ModifyNetworkInterfaceAttributeRequest::setDeleteOnRelease(bool deleteOnRelease) {
  deleteOnRelease_ = deleteOnRelease;
  setParameter(std::string("DeleteOnRelease"), deleteOnRelease ? "true" : "false");
}

std::string ModifyNetworkInterfaceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyNetworkInterfaceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyNetworkInterfaceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyNetworkInterfaceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyNetworkInterfaceAttributeRequest::getRxQueueSize() const {
  return rxQueueSize_;
}

void ModifyNetworkInterfaceAttributeRequest::setRxQueueSize(int rxQueueSize) {
  rxQueueSize_ = rxQueueSize;
  setParameter(std::string("RxQueueSize"), std::to_string(rxQueueSize));
}

long ModifyNetworkInterfaceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyNetworkInterfaceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration ModifyNetworkInterfaceAttributeRequest::getConnectionTrackingConfiguration() const {
  return connectionTrackingConfiguration_;
}

void ModifyNetworkInterfaceAttributeRequest::setConnectionTrackingConfiguration(const ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration &connectionTrackingConfiguration) {
  connectionTrackingConfiguration_ = connectionTrackingConfiguration;
  setParameter(std::string("ConnectionTrackingConfiguration") + ".TcpEstablishedTimeout", std::to_string(connectionTrackingConfiguration.tcpEstablishedTimeout));
  setParameter(std::string("ConnectionTrackingConfiguration") + ".TcpClosedAndTimeWaitTimeout", std::to_string(connectionTrackingConfiguration.tcpClosedAndTimeWaitTimeout));
  setParameter(std::string("ConnectionTrackingConfiguration") + ".UdpTimeout", std::to_string(connectionTrackingConfiguration.udpTimeout));
}

std::string ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}


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

#include <alibabacloud/ecs/model/CreateNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::CreateNetworkInterfaceRequest;

CreateNetworkInterfaceRequest::CreateNetworkInterfaceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkInterfaceRequest::~CreateNetworkInterfaceRequest() {}

int CreateNetworkInterfaceRequest::getQueueNumber() const {
  return queueNumber_;
}

void CreateNetworkInterfaceRequest::setQueueNumber(int queueNumber) {
  queueNumber_ = queueNumber;
  setParameter(std::string("QueueNumber"), std::to_string(queueNumber));
}

long CreateNetworkInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> CreateNetworkInterfaceRequest::getIpv4Prefix() const {
  return ipv4Prefix_;
}

void CreateNetworkInterfaceRequest::setIpv4Prefix(const std::vector<std::string> &ipv4Prefix) {
  ipv4Prefix_ = ipv4Prefix;
}

CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig CreateNetworkInterfaceRequest::getNetworkInterfaceTrafficConfig() const {
  return networkInterfaceTrafficConfig_;
}

void CreateNetworkInterfaceRequest::setNetworkInterfaceTrafficConfig(const CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig &networkInterfaceTrafficConfig) {
  networkInterfaceTrafficConfig_ = networkInterfaceTrafficConfig;
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".QueueNumber", std::to_string(networkInterfaceTrafficConfig.queueNumber));
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".NetworkInterfaceTrafficMode", networkInterfaceTrafficConfig.networkInterfaceTrafficMode);
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".QueuePairNumber", std::to_string(networkInterfaceTrafficConfig.queuePairNumber));
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".TxQueueSize", std::to_string(networkInterfaceTrafficConfig.txQueueSize));
  setParameter(std::string("NetworkInterfaceTrafficConfig") + ".RxQueueSize", std::to_string(networkInterfaceTrafficConfig.rxQueueSize));
}

int CreateNetworkInterfaceRequest::getSecondaryPrivateIpAddressCount() const {
  return secondaryPrivateIpAddressCount_;
}

void CreateNetworkInterfaceRequest::setSecondaryPrivateIpAddressCount(int secondaryPrivateIpAddressCount) {
  secondaryPrivateIpAddressCount_ = secondaryPrivateIpAddressCount;
  setParameter(std::string("SecondaryPrivateIpAddressCount"), std::to_string(secondaryPrivateIpAddressCount));
}

std::string CreateNetworkInterfaceRequest::getBusinessType() const {
  return businessType_;
}

void CreateNetworkInterfaceRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

std::string CreateNetworkInterfaceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateNetworkInterfaceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

CreateNetworkInterfaceRequest::EnhancedNetwork CreateNetworkInterfaceRequest::getEnhancedNetwork() const {
  return enhancedNetwork_;
}

void CreateNetworkInterfaceRequest::setEnhancedNetwork(const CreateNetworkInterfaceRequest::EnhancedNetwork &enhancedNetwork) {
  enhancedNetwork_ = enhancedNetwork;
  setParameter(std::string("EnhancedNetwork") + ".EnableSriov", enhancedNetwork.enableSriov ? "true" : "false");
  setParameter(std::string("EnhancedNetwork") + ".EnableRss", enhancedNetwork.enableRss ? "true" : "false");
}

std::vector<CreateNetworkInterfaceRequest::Tag> CreateNetworkInterfaceRequest::getTag() const {
  return tag_;
}

void CreateNetworkInterfaceRequest::setTag(const std::vector<CreateNetworkInterfaceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateNetworkInterfaceRequest::getNetworkInterfaceName() const {
  return networkInterfaceName_;
}

void CreateNetworkInterfaceRequest::setNetworkInterfaceName(const std::string &networkInterfaceName) {
  networkInterfaceName_ = networkInterfaceName;
  setParameter(std::string("NetworkInterfaceName"), networkInterfaceName);
}

bool CreateNetworkInterfaceRequest::getVisible() const {
  return visible_;
}

void CreateNetworkInterfaceRequest::setVisible(bool visible) {
  visible_ = visible;
  setParameter(std::string("Visible"), visible ? "true" : "false");
}

int CreateNetworkInterfaceRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void CreateNetworkInterfaceRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

int CreateNetworkInterfaceRequest::getRxQueueSize() const {
  return rxQueueSize_;
}

void CreateNetworkInterfaceRequest::setRxQueueSize(int rxQueueSize) {
  rxQueueSize_ = rxQueueSize;
  setParameter(std::string("RxQueueSize"), std::to_string(rxQueueSize));
}

long CreateNetworkInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNetworkInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNetworkInterfaceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateNetworkInterfaceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::vector<std::string> CreateNetworkInterfaceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateNetworkInterfaceRequest::setPrivateIpAddress(const std::vector<std::string> &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
}

std::vector<std::string> CreateNetworkInterfaceRequest::getIpv6Address() const {
  return ipv6Address_;
}

void CreateNetworkInterfaceRequest::setIpv6Address(const std::vector<std::string> &ipv6Address) {
  ipv6Address_ = ipv6Address;
}

std::string CreateNetworkInterfaceRequest::getClientToken() const {
  return clientToken_;
}

void CreateNetworkInterfaceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> CreateNetworkInterfaceRequest::getIpv6Prefix() const {
  return ipv6Prefix_;
}

void CreateNetworkInterfaceRequest::setIpv6Prefix(const std::vector<std::string> &ipv6Prefix) {
  ipv6Prefix_ = ipv6Prefix;
}

std::string CreateNetworkInterfaceRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateNetworkInterfaceRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateNetworkInterfaceRequest::getDescription() const {
  return description_;
}

void CreateNetworkInterfaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateNetworkInterfaceRequest::getIpv6PrefixCount() const {
  return ipv6PrefixCount_;
}

void CreateNetworkInterfaceRequest::setIpv6PrefixCount(int ipv6PrefixCount) {
  ipv6PrefixCount_ = ipv6PrefixCount;
  setParameter(std::string("Ipv6PrefixCount"), std::to_string(ipv6PrefixCount));
}

bool CreateNetworkInterfaceRequest::getSourceDestCheck() const {
  return sourceDestCheck_;
}

void CreateNetworkInterfaceRequest::setSourceDestCheck(bool sourceDestCheck) {
  sourceDestCheck_ = sourceDestCheck;
  setParameter(std::string("SourceDestCheck"), sourceDestCheck ? "true" : "false");
}

std::string CreateNetworkInterfaceRequest::getRegionId() const {
  return regionId_;
}

void CreateNetworkInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNetworkInterfaceRequest::getInstanceType() const {
  return instanceType_;
}

void CreateNetworkInterfaceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

int CreateNetworkInterfaceRequest::getTxQueueSize() const {
  return txQueueSize_;
}

void CreateNetworkInterfaceRequest::setTxQueueSize(int txQueueSize) {
  txQueueSize_ = txQueueSize;
  setParameter(std::string("TxQueueSize"), std::to_string(txQueueSize));
}

bool CreateNetworkInterfaceRequest::getDeleteOnRelease() const {
  return deleteOnRelease_;
}

void CreateNetworkInterfaceRequest::setDeleteOnRelease(bool deleteOnRelease) {
  deleteOnRelease_ = deleteOnRelease;
  setParameter(std::string("DeleteOnRelease"), deleteOnRelease ? "true" : "false");
}

std::string CreateNetworkInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNetworkInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNetworkInterfaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNetworkInterfaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateNetworkInterfaceRequest::getQueuePairNumber() const {
  return queuePairNumber_;
}

void CreateNetworkInterfaceRequest::setQueuePairNumber(int queuePairNumber) {
  queuePairNumber_ = queuePairNumber;
  setParameter(std::string("QueuePairNumber"), std::to_string(queuePairNumber));
}

std::vector<std::string> CreateNetworkInterfaceRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void CreateNetworkInterfaceRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::string CreateNetworkInterfaceRequest::getNetworkInterfaceTrafficMode() const {
  return networkInterfaceTrafficMode_;
}

void CreateNetworkInterfaceRequest::setNetworkInterfaceTrafficMode(const std::string &networkInterfaceTrafficMode) {
  networkInterfaceTrafficMode_ = networkInterfaceTrafficMode;
  setParameter(std::string("NetworkInterfaceTrafficMode"), networkInterfaceTrafficMode);
}

int CreateNetworkInterfaceRequest::getIpv4PrefixCount() const {
  return ipv4PrefixCount_;
}

void CreateNetworkInterfaceRequest::setIpv4PrefixCount(int ipv4PrefixCount) {
  ipv4PrefixCount_ = ipv4PrefixCount;
  setParameter(std::string("Ipv4PrefixCount"), std::to_string(ipv4PrefixCount));
}

CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration CreateNetworkInterfaceRequest::getConnectionTrackingConfiguration() const {
  return connectionTrackingConfiguration_;
}

void CreateNetworkInterfaceRequest::setConnectionTrackingConfiguration(const CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration &connectionTrackingConfiguration) {
  connectionTrackingConfiguration_ = connectionTrackingConfiguration;
  setParameter(std::string("ConnectionTrackingConfiguration") + ".TcpEstablishedTimeout", std::to_string(connectionTrackingConfiguration.tcpEstablishedTimeout));
  setParameter(std::string("ConnectionTrackingConfiguration") + ".TcpClosedAndTimeWaitTimeout", std::to_string(connectionTrackingConfiguration.tcpClosedAndTimeWaitTimeout));
  setParameter(std::string("ConnectionTrackingConfiguration") + ".UdpTimeout", std::to_string(connectionTrackingConfiguration.udpTimeout));
}

std::string CreateNetworkInterfaceRequest::getPrimaryIpAddress() const {
  return primaryIpAddress_;
}

void CreateNetworkInterfaceRequest::setPrimaryIpAddress(const std::string &primaryIpAddress) {
  primaryIpAddress_ = primaryIpAddress;
  setParameter(std::string("PrimaryIpAddress"), primaryIpAddress);
}


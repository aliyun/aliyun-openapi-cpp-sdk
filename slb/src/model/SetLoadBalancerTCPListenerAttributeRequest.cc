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

#include <alibabacloud/slb/model/SetLoadBalancerTCPListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerTCPListenerAttributeRequest;

SetLoadBalancerTCPListenerAttributeRequest::SetLoadBalancerTCPListenerAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerTCPListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerTCPListenerAttributeRequest::~SetLoadBalancerTCPListenerAttributeRequest() {}

long SetLoadBalancerTCPListenerAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAclStatus() const {
  return aclStatus_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAclStatus(const std::string &aclStatus) {
  aclStatus_ = aclStatus;
  setParameter(std::string("AclStatus"), aclStatus);
}

bool SetLoadBalancerTCPListenerAttributeRequest::getFullNatEnabled() const {
  return fullNatEnabled_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setFullNatEnabled(bool fullNatEnabled) {
  fullNatEnabled_ = fullNatEnabled;
  setParameter(std::string("FullNatEnabled"), fullNatEnabled ? "true" : "false");
}

bool SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckTcpFastCloseEnabled() const {
  return healthCheckTcpFastCloseEnabled_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckTcpFastCloseEnabled(bool healthCheckTcpFastCloseEnabled) {
  healthCheckTcpFastCloseEnabled_ = healthCheckTcpFastCloseEnabled;
  setParameter(std::string("HealthCheckTcpFastCloseEnabled"), healthCheckTcpFastCloseEnabled ? "true" : "false");
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAclType() const {
  return aclType_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getMasterSlaveServerGroup() const {
  return masterSlaveServerGroup_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setMasterSlaveServerGroup(const std::string &masterSlaveServerGroup) {
  masterSlaveServerGroup_ = masterSlaveServerGroup;
  setParameter(std::string("MasterSlaveServerGroup"), masterSlaveServerGroup);
}

int SetLoadBalancerTCPListenerAttributeRequest::getEstablishedTimeout() const {
  return establishedTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setEstablishedTimeout(int establishedTimeout) {
  establishedTimeout_ = establishedTimeout;
  setParameter(std::string("EstablishedTimeout"), std::to_string(establishedTimeout));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getFailoverStrategy() const {
  return failoverStrategy_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setFailoverStrategy(const std::string &failoverStrategy) {
  failoverStrategy_ = failoverStrategy;
  setParameter(std::string("FailoverStrategy"), failoverStrategy);
}

int SetLoadBalancerTCPListenerAttributeRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getVpcIds() const {
  return vpcIds_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setVpcIds(const std::string &vpcIds) {
  vpcIds_ = vpcIds;
  setParameter(std::string("VpcIds"), vpcIds);
}

bool SetLoadBalancerTCPListenerAttributeRequest::getMasterSlaveModeEnabled() const {
  return masterSlaveModeEnabled_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setMasterSlaveModeEnabled(bool masterSlaveModeEnabled) {
  masterSlaveModeEnabled_ = masterSlaveModeEnabled;
  setParameter(std::string("MasterSlaveModeEnabled"), masterSlaveModeEnabled ? "true" : "false");
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAclId() const {
  return aclId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::vector<SetLoadBalancerTCPListenerAttributeRequest::PortRange> SetLoadBalancerTCPListenerAttributeRequest::getPortRange() const {
  return portRange_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setPortRange(const std::vector<SetLoadBalancerTCPListenerAttributeRequest::PortRange> &portRange) {
  portRange_ = portRange;
  for(int dep1 = 0; dep1 != portRange.size(); dep1++) {
  auto portRangeObj = portRange.at(dep1);
  std::string portRangeObjStr = std::string("PortRange") + "." + std::to_string(dep1 + 1);
    setParameter(portRangeObjStr + ".StartPort", std::to_string(portRangeObj.startPort));
    setParameter(portRangeObjStr + ".EndPort", std::to_string(portRangeObj.endPort));
  }
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getSynProxy() const {
  return synProxy_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setSynProxy(const std::string &synProxy) {
  synProxy_ = synProxy;
  setParameter(std::string("SynProxy"), synProxy);
}

long SetLoadBalancerTCPListenerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool SetLoadBalancerTCPListenerAttributeRequest::getProxyProtocolVpcIdEnabled() const {
  return proxyProtocolVpcIdEnabled_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setProxyProtocolVpcIdEnabled(bool proxyProtocolVpcIdEnabled) {
  proxyProtocolVpcIdEnabled_ = proxyProtocolVpcIdEnabled;
  setParameter(std::string("ProxyProtocolVpcIdEnabled"), proxyProtocolVpcIdEnabled ? "true" : "false");
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getTags() const {
  return tags_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getMasterSlaveServerGroupId() const {
  return masterSlaveServerGroupId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setMasterSlaveServerGroupId(const std::string &masterSlaveServerGroupId) {
  masterSlaveServerGroupId_ = masterSlaveServerGroupId;
  setParameter(std::string("MasterSlaveServerGroupId"), masterSlaveServerGroupId);
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

int SetLoadBalancerTCPListenerAttributeRequest::getFailoverThreshold() const {
  return failoverThreshold_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setFailoverThreshold(int failoverThreshold) {
  failoverThreshold_ = failoverThreshold;
  setParameter(std::string("FailoverThreshold"), std::to_string(failoverThreshold));
}

bool SetLoadBalancerTCPListenerAttributeRequest::getProxyProtocolV2Enabled() const {
  return proxyProtocolV2Enabled_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setProxyProtocolV2Enabled(bool proxyProtocolV2Enabled) {
  proxyProtocolV2Enabled_ = proxyProtocolV2Enabled;
  setParameter(std::string("ProxyProtocolV2Enabled"), proxyProtocolV2Enabled ? "true" : "false");
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getConnectionDrain() const {
  return connectionDrain_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setConnectionDrain(const std::string &connectionDrain) {
  connectionDrain_ = connectionDrain;
  setParameter(std::string("ConnectionDrain"), connectionDrain);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckSwitch() const {
  return healthCheckSwitch_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckSwitch(const std::string &healthCheckSwitch) {
  healthCheckSwitch_ = healthCheckSwitch;
  setParameter(std::string("HealthCheckSwitch"), healthCheckSwitch);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckConnectTimeout() const {
  return healthCheckConnectTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout) {
  healthCheckConnectTimeout_ = healthCheckConnectTimeout;
  setParameter(std::string("HealthCheckConnectTimeout"), std::to_string(healthCheckConnectTimeout));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getSlaveServerGroupId() const {
  return slaveServerGroupId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setSlaveServerGroupId(const std::string &slaveServerGroupId) {
  slaveServerGroupId_ = slaveServerGroupId;
  setParameter(std::string("SlaveServerGroupId"), slaveServerGroupId);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getDescription() const {
  return description_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int SetLoadBalancerTCPListenerAttributeRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getScheduler() const {
  return scheduler_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

int SetLoadBalancerTCPListenerAttributeRequest::getMaxConnection() const {
  return maxConnection_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setMaxConnection(int maxConnection) {
  maxConnection_ = maxConnection;
  setParameter(std::string("MaxConnection"), std::to_string(maxConnection));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getRegionId() const {
  return regionId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getMasterServerGroupId() const {
  return masterServerGroupId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setMasterServerGroupId(const std::string &masterServerGroupId) {
  masterServerGroupId_ = masterServerGroupId;
  setParameter(std::string("MasterServerGroupId"), masterServerGroupId);
}

int SetLoadBalancerTCPListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int SetLoadBalancerTCPListenerAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int SetLoadBalancerTCPListenerAttributeRequest::getConnectionDrainTimeout() const {
  return connectionDrainTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setConnectionDrainTimeout(int connectionDrainTimeout) {
  connectionDrainTimeout_ = connectionDrainTimeout;
  setParameter(std::string("ConnectionDrainTimeout"), std::to_string(connectionDrainTimeout));
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getVServerGroup() const {
  return vServerGroup_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setVServerGroup(const std::string &vServerGroup) {
  vServerGroup_ = vServerGroup;
  setParameter(std::string("VServerGroup"), vServerGroup);
}


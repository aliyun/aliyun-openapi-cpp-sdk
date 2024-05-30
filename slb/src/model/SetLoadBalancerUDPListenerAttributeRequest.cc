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

#include <alibabacloud/slb/model/SetLoadBalancerUDPListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerUDPListenerAttributeRequest;

SetLoadBalancerUDPListenerAttributeRequest::SetLoadBalancerUDPListenerAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerUDPListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerUDPListenerAttributeRequest::~SetLoadBalancerUDPListenerAttributeRequest() {}

long SetLoadBalancerUDPListenerAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getAclStatus() const {
  return aclStatus_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setAclStatus(const std::string &aclStatus) {
  aclStatus_ = aclStatus;
  setParameter(std::string("AclStatus"), aclStatus);
}

bool SetLoadBalancerUDPListenerAttributeRequest::getFullNatEnabled() const {
  return fullNatEnabled_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setFullNatEnabled(bool fullNatEnabled) {
  fullNatEnabled_ = fullNatEnabled;
  setParameter(std::string("FullNatEnabled"), fullNatEnabled ? "true" : "false");
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getAclType() const {
  return aclType_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getMasterSlaveServerGroup() const {
  return masterSlaveServerGroup_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setMasterSlaveServerGroup(const std::string &masterSlaveServerGroup) {
  masterSlaveServerGroup_ = masterSlaveServerGroup;
  setParameter(std::string("MasterSlaveServerGroup"), masterSlaveServerGroup);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getFailoverStrategy() const {
  return failoverStrategy_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setFailoverStrategy(const std::string &failoverStrategy) {
  failoverStrategy_ = failoverStrategy;
  setParameter(std::string("FailoverStrategy"), failoverStrategy);
}

int SetLoadBalancerUDPListenerAttributeRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getVpcIds() const {
  return vpcIds_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setVpcIds(const std::string &vpcIds) {
  vpcIds_ = vpcIds;
  setParameter(std::string("VpcIds"), vpcIds);
}

bool SetLoadBalancerUDPListenerAttributeRequest::getMasterSlaveModeEnabled() const {
  return masterSlaveModeEnabled_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setMasterSlaveModeEnabled(bool masterSlaveModeEnabled) {
  masterSlaveModeEnabled_ = masterSlaveModeEnabled;
  setParameter(std::string("MasterSlaveModeEnabled"), masterSlaveModeEnabled ? "true" : "false");
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getAclId() const {
  return aclId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::vector<SetLoadBalancerUDPListenerAttributeRequest::PortRange> SetLoadBalancerUDPListenerAttributeRequest::getPortRange() const {
  return portRange_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setPortRange(const std::vector<SetLoadBalancerUDPListenerAttributeRequest::PortRange> &portRange) {
  portRange_ = portRange;
  for(int dep1 = 0; dep1 != portRange.size(); dep1++) {
  auto portRangeObj = portRange.at(dep1);
  std::string portRangeObjStr = std::string("PortRange") + "." + std::to_string(dep1 + 1);
    setParameter(portRangeObjStr + ".StartPort", std::to_string(portRangeObj.startPort));
    setParameter(portRangeObjStr + ".EndPort", std::to_string(portRangeObj.endPort));
  }
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

long SetLoadBalancerUDPListenerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool SetLoadBalancerUDPListenerAttributeRequest::getProxyProtocolVpcIdEnabled() const {
  return proxyProtocolVpcIdEnabled_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setProxyProtocolVpcIdEnabled(bool proxyProtocolVpcIdEnabled) {
  proxyProtocolVpcIdEnabled_ = proxyProtocolVpcIdEnabled;
  setParameter(std::string("ProxyProtocolVpcIdEnabled"), proxyProtocolVpcIdEnabled ? "true" : "false");
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getTags() const {
  return tags_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getMasterSlaveServerGroupId() const {
  return masterSlaveServerGroupId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setMasterSlaveServerGroupId(const std::string &masterSlaveServerGroupId) {
  masterSlaveServerGroupId_ = masterSlaveServerGroupId;
  setParameter(std::string("MasterSlaveServerGroupId"), masterSlaveServerGroupId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckReq() const {
  return healthCheckReq_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckReq(const std::string &healthCheckReq) {
  healthCheckReq_ = healthCheckReq;
  setParameter(std::string("healthCheckReq"), healthCheckReq);
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckExp() const {
  return healthCheckExp_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckExp(const std::string &healthCheckExp) {
  healthCheckExp_ = healthCheckExp;
  setParameter(std::string("healthCheckExp"), healthCheckExp);
}

int SetLoadBalancerUDPListenerAttributeRequest::getFailoverThreshold() const {
  return failoverThreshold_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setFailoverThreshold(int failoverThreshold) {
  failoverThreshold_ = failoverThreshold;
  setParameter(std::string("FailoverThreshold"), std::to_string(failoverThreshold));
}

bool SetLoadBalancerUDPListenerAttributeRequest::getProxyProtocolV2Enabled() const {
  return proxyProtocolV2Enabled_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setProxyProtocolV2Enabled(bool proxyProtocolV2Enabled) {
  proxyProtocolV2Enabled_ = proxyProtocolV2Enabled;
  setParameter(std::string("ProxyProtocolV2Enabled"), proxyProtocolV2Enabled ? "true" : "false");
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getConnectionDrain() const {
  return connectionDrain_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setConnectionDrain(const std::string &connectionDrain) {
  connectionDrain_ = connectionDrain;
  setParameter(std::string("ConnectionDrain"), connectionDrain);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckSwitch() const {
  return healthCheckSwitch_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckSwitch(const std::string &healthCheckSwitch) {
  healthCheckSwitch_ = healthCheckSwitch;
  setParameter(std::string("HealthCheckSwitch"), healthCheckSwitch);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckConnectTimeout() const {
  return healthCheckConnectTimeout_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout) {
  healthCheckConnectTimeout_ = healthCheckConnectTimeout;
  setParameter(std::string("HealthCheckConnectTimeout"), std::to_string(healthCheckConnectTimeout));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getSlaveServerGroupId() const {
  return slaveServerGroupId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setSlaveServerGroupId(const std::string &slaveServerGroupId) {
  slaveServerGroupId_ = slaveServerGroupId;
  setParameter(std::string("SlaveServerGroupId"), slaveServerGroupId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getQuicVersion() const {
  return quicVersion_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setQuicVersion(const std::string &quicVersion) {
  quicVersion_ = quicVersion;
  setParameter(std::string("QuicVersion"), quicVersion);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getDescription() const {
  return description_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int SetLoadBalancerUDPListenerAttributeRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getScheduler() const {
  return scheduler_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

int SetLoadBalancerUDPListenerAttributeRequest::getMaxConnection() const {
  return maxConnection_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setMaxConnection(int maxConnection) {
  maxConnection_ = maxConnection;
  setParameter(std::string("MaxConnection"), std::to_string(maxConnection));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getRegionId() const {
  return regionId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getMasterServerGroupId() const {
  return masterServerGroupId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setMasterServerGroupId(const std::string &masterServerGroupId) {
  masterServerGroupId_ = masterServerGroupId;
  setParameter(std::string("MasterServerGroupId"), masterServerGroupId);
}

int SetLoadBalancerUDPListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int SetLoadBalancerUDPListenerAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int SetLoadBalancerUDPListenerAttributeRequest::getConnectionDrainTimeout() const {
  return connectionDrainTimeout_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setConnectionDrainTimeout(int connectionDrainTimeout) {
  connectionDrainTimeout_ = connectionDrainTimeout;
  setParameter(std::string("ConnectionDrainTimeout"), std::to_string(connectionDrainTimeout));
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getVServerGroup() const {
  return vServerGroup_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setVServerGroup(const std::string &vServerGroup) {
  vServerGroup_ = vServerGroup;
  setParameter(std::string("VServerGroup"), vServerGroup);
}


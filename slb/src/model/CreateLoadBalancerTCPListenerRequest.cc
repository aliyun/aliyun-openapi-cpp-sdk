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

#include <alibabacloud/slb/model/CreateLoadBalancerTCPListenerRequest.h>

using AlibabaCloud::Slb::Model::CreateLoadBalancerTCPListenerRequest;

CreateLoadBalancerTCPListenerRequest::CreateLoadBalancerTCPListenerRequest()
    : RpcServiceRequest("slb", "2014-05-15", "CreateLoadBalancerTCPListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerTCPListenerRequest::~CreateLoadBalancerTCPListenerRequest() {}

long CreateLoadBalancerTCPListenerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLoadBalancerTCPListenerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string CreateLoadBalancerTCPListenerRequest::getAclStatus() const {
  return aclStatus_;
}

void CreateLoadBalancerTCPListenerRequest::setAclStatus(const std::string &aclStatus) {
  aclStatus_ = aclStatus;
  setParameter(std::string("AclStatus"), aclStatus);
}

bool CreateLoadBalancerTCPListenerRequest::getFullNatEnabled() const {
  return fullNatEnabled_;
}

void CreateLoadBalancerTCPListenerRequest::setFullNatEnabled(bool fullNatEnabled) {
  fullNatEnabled_ = fullNatEnabled;
  setParameter(std::string("FullNatEnabled"), fullNatEnabled ? "true" : "false");
}

bool CreateLoadBalancerTCPListenerRequest::getHealthCheckTcpFastCloseEnabled() const {
  return healthCheckTcpFastCloseEnabled_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckTcpFastCloseEnabled(bool healthCheckTcpFastCloseEnabled) {
  healthCheckTcpFastCloseEnabled_ = healthCheckTcpFastCloseEnabled;
  setParameter(std::string("HealthCheckTcpFastCloseEnabled"), healthCheckTcpFastCloseEnabled ? "true" : "false");
}

std::string CreateLoadBalancerTCPListenerRequest::getAclType() const {
  return aclType_;
}

void CreateLoadBalancerTCPListenerRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

int CreateLoadBalancerTCPListenerRequest::getEstablishedTimeout() const {
  return establishedTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setEstablishedTimeout(int establishedTimeout) {
  establishedTimeout_ = establishedTimeout;
  setParameter(std::string("EstablishedTimeout"), std::to_string(establishedTimeout));
}

std::string CreateLoadBalancerTCPListenerRequest::getFailoverStrategy() const {
  return failoverStrategy_;
}

void CreateLoadBalancerTCPListenerRequest::setFailoverStrategy(const std::string &failoverStrategy) {
  failoverStrategy_ = failoverStrategy;
  setParameter(std::string("FailoverStrategy"), failoverStrategy);
}

int CreateLoadBalancerTCPListenerRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

std::string CreateLoadBalancerTCPListenerRequest::getVpcIds() const {
  return vpcIds_;
}

void CreateLoadBalancerTCPListenerRequest::setVpcIds(const std::string &vpcIds) {
  vpcIds_ = vpcIds;
  setParameter(std::string("VpcIds"), vpcIds);
}

std::vector<CreateLoadBalancerTCPListenerRequest::Tag> CreateLoadBalancerTCPListenerRequest::getTag() const {
  return tag_;
}

void CreateLoadBalancerTCPListenerRequest::setTag(const std::vector<CreateLoadBalancerTCPListenerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateLoadBalancerTCPListenerRequest::getMasterSlaveModeEnabled() const {
  return masterSlaveModeEnabled_;
}

void CreateLoadBalancerTCPListenerRequest::setMasterSlaveModeEnabled(bool masterSlaveModeEnabled) {
  masterSlaveModeEnabled_ = masterSlaveModeEnabled;
  setParameter(std::string("MasterSlaveModeEnabled"), masterSlaveModeEnabled ? "true" : "false");
}

std::string CreateLoadBalancerTCPListenerRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void CreateLoadBalancerTCPListenerRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string CreateLoadBalancerTCPListenerRequest::getAclId() const {
  return aclId_;
}

void CreateLoadBalancerTCPListenerRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::vector<CreateLoadBalancerTCPListenerRequest::PortRange> CreateLoadBalancerTCPListenerRequest::getPortRange() const {
  return portRange_;
}

void CreateLoadBalancerTCPListenerRequest::setPortRange(const std::vector<CreateLoadBalancerTCPListenerRequest::PortRange> &portRange) {
  portRange_ = portRange;
  for(int dep1 = 0; dep1 != portRange.size(); dep1++) {
  auto portRangeObj = portRange.at(dep1);
  std::string portRangeObjStr = std::string("PortRange") + "." + std::to_string(dep1 + 1);
    setParameter(portRangeObjStr + ".StartPort", std::to_string(portRangeObj.startPort));
    setParameter(portRangeObjStr + ".EndPort", std::to_string(portRangeObj.endPort));
  }
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

long CreateLoadBalancerTCPListenerRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLoadBalancerTCPListenerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLoadBalancerTCPListenerRequest::getTags() const {
  return tags_;
}

void CreateLoadBalancerTCPListenerRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateLoadBalancerTCPListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateLoadBalancerTCPListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string CreateLoadBalancerTCPListenerRequest::getMasterSlaveServerGroupId() const {
  return masterSlaveServerGroupId_;
}

void CreateLoadBalancerTCPListenerRequest::setMasterSlaveServerGroupId(const std::string &masterSlaveServerGroupId) {
  masterSlaveServerGroupId_ = masterSlaveServerGroupId;
  setParameter(std::string("MasterSlaveServerGroupId"), masterSlaveServerGroupId);
}

int CreateLoadBalancerTCPListenerRequest::getBackendServerPort() const {
  return backendServerPort_;
}

void CreateLoadBalancerTCPListenerRequest::setBackendServerPort(int backendServerPort) {
  backendServerPort_ = backendServerPort;
  setParameter(std::string("BackendServerPort"), std::to_string(backendServerPort));
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("healthCheckInterval"), std::to_string(healthCheckInterval));
}

int CreateLoadBalancerTCPListenerRequest::getFailoverThreshold() const {
  return failoverThreshold_;
}

void CreateLoadBalancerTCPListenerRequest::setFailoverThreshold(int failoverThreshold) {
  failoverThreshold_ = failoverThreshold;
  setParameter(std::string("FailoverThreshold"), std::to_string(failoverThreshold));
}

bool CreateLoadBalancerTCPListenerRequest::getProxyProtocolV2Enabled() const {
  return proxyProtocolV2Enabled_;
}

void CreateLoadBalancerTCPListenerRequest::setProxyProtocolV2Enabled(bool proxyProtocolV2Enabled) {
  proxyProtocolV2Enabled_ = proxyProtocolV2Enabled;
  setParameter(std::string("ProxyProtocolV2Enabled"), proxyProtocolV2Enabled ? "true" : "false");
}

std::string CreateLoadBalancerTCPListenerRequest::getConnectionDrain() const {
  return connectionDrain_;
}

void CreateLoadBalancerTCPListenerRequest::setConnectionDrain(const std::string &connectionDrain) {
  connectionDrain_ = connectionDrain;
  setParameter(std::string("ConnectionDrain"), connectionDrain);
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckSwitch() const {
  return healthCheckSwitch_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckSwitch(const std::string &healthCheckSwitch) {
  healthCheckSwitch_ = healthCheckSwitch;
  setParameter(std::string("HealthCheckSwitch"), healthCheckSwitch);
}

std::string CreateLoadBalancerTCPListenerRequest::getAccess_key_id() const {
  return access_key_id_;
}

void CreateLoadBalancerTCPListenerRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckConnectTimeout() const {
  return healthCheckConnectTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout) {
  healthCheckConnectTimeout_ = healthCheckConnectTimeout;
  setParameter(std::string("HealthCheckConnectTimeout"), std::to_string(healthCheckConnectTimeout));
}

std::string CreateLoadBalancerTCPListenerRequest::getSlaveServerGroupId() const {
  return slaveServerGroupId_;
}

void CreateLoadBalancerTCPListenerRequest::setSlaveServerGroupId(const std::string &slaveServerGroupId) {
  slaveServerGroupId_ = slaveServerGroupId;
  setParameter(std::string("SlaveServerGroupId"), slaveServerGroupId);
}

std::string CreateLoadBalancerTCPListenerRequest::getDescription() const {
  return description_;
}

void CreateLoadBalancerTCPListenerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateLoadBalancerTCPListenerRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void CreateLoadBalancerTCPListenerRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerTCPListenerRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerTCPListenerRequest::getScheduler() const {
  return scheduler_;
}

void CreateLoadBalancerTCPListenerRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

int CreateLoadBalancerTCPListenerRequest::getMaxConnection() const {
  return maxConnection_;
}

void CreateLoadBalancerTCPListenerRequest::setMaxConnection(int maxConnection) {
  maxConnection_ = maxConnection;
  setParameter(std::string("MaxConnection"), std::to_string(maxConnection));
}

std::string CreateLoadBalancerTCPListenerRequest::getRegionId() const {
  return regionId_;
}

void CreateLoadBalancerTCPListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLoadBalancerTCPListenerRequest::getMasterServerGroupId() const {
  return masterServerGroupId_;
}

void CreateLoadBalancerTCPListenerRequest::setMasterServerGroupId(const std::string &masterServerGroupId) {
  masterServerGroupId_ = masterServerGroupId;
  setParameter(std::string("MasterServerGroupId"), masterServerGroupId);
}

int CreateLoadBalancerTCPListenerRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateLoadBalancerTCPListenerRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string CreateLoadBalancerTCPListenerRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLoadBalancerTCPListenerRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateLoadBalancerTCPListenerRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateLoadBalancerTCPListenerRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateLoadBalancerTCPListenerRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLoadBalancerTCPListenerRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateLoadBalancerTCPListenerRequest::getConnectionDrainTimeout() const {
  return connectionDrainTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setConnectionDrainTimeout(int connectionDrainTimeout) {
  connectionDrainTimeout_ = connectionDrainTimeout;
  setParameter(std::string("ConnectionDrainTimeout"), std::to_string(connectionDrainTimeout));
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}


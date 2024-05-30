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

#include <alibabacloud/slb/model/CreateLoadBalancerUDPListenerRequest.h>

using AlibabaCloud::Slb::Model::CreateLoadBalancerUDPListenerRequest;

CreateLoadBalancerUDPListenerRequest::CreateLoadBalancerUDPListenerRequest()
    : RpcServiceRequest("slb", "2014-05-15", "CreateLoadBalancerUDPListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerUDPListenerRequest::~CreateLoadBalancerUDPListenerRequest() {}

long CreateLoadBalancerUDPListenerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLoadBalancerUDPListenerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string CreateLoadBalancerUDPListenerRequest::getAclStatus() const {
  return aclStatus_;
}

void CreateLoadBalancerUDPListenerRequest::setAclStatus(const std::string &aclStatus) {
  aclStatus_ = aclStatus;
  setParameter(std::string("AclStatus"), aclStatus);
}

bool CreateLoadBalancerUDPListenerRequest::getFullNatEnabled() const {
  return fullNatEnabled_;
}

void CreateLoadBalancerUDPListenerRequest::setFullNatEnabled(bool fullNatEnabled) {
  fullNatEnabled_ = fullNatEnabled;
  setParameter(std::string("FullNatEnabled"), fullNatEnabled ? "true" : "false");
}

std::string CreateLoadBalancerUDPListenerRequest::getAclType() const {
  return aclType_;
}

void CreateLoadBalancerUDPListenerRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

std::string CreateLoadBalancerUDPListenerRequest::getFailoverStrategy() const {
  return failoverStrategy_;
}

void CreateLoadBalancerUDPListenerRequest::setFailoverStrategy(const std::string &failoverStrategy) {
  failoverStrategy_ = failoverStrategy;
  setParameter(std::string("FailoverStrategy"), failoverStrategy);
}

int CreateLoadBalancerUDPListenerRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void CreateLoadBalancerUDPListenerRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

std::string CreateLoadBalancerUDPListenerRequest::getVpcIds() const {
  return vpcIds_;
}

void CreateLoadBalancerUDPListenerRequest::setVpcIds(const std::string &vpcIds) {
  vpcIds_ = vpcIds;
  setParameter(std::string("VpcIds"), vpcIds);
}

std::vector<CreateLoadBalancerUDPListenerRequest::Tag> CreateLoadBalancerUDPListenerRequest::getTag() const {
  return tag_;
}

void CreateLoadBalancerUDPListenerRequest::setTag(const std::vector<CreateLoadBalancerUDPListenerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateLoadBalancerUDPListenerRequest::getMasterSlaveModeEnabled() const {
  return masterSlaveModeEnabled_;
}

void CreateLoadBalancerUDPListenerRequest::setMasterSlaveModeEnabled(bool masterSlaveModeEnabled) {
  masterSlaveModeEnabled_ = masterSlaveModeEnabled;
  setParameter(std::string("MasterSlaveModeEnabled"), masterSlaveModeEnabled ? "true" : "false");
}

std::string CreateLoadBalancerUDPListenerRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void CreateLoadBalancerUDPListenerRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string CreateLoadBalancerUDPListenerRequest::getAclId() const {
  return aclId_;
}

void CreateLoadBalancerUDPListenerRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::vector<CreateLoadBalancerUDPListenerRequest::PortRange> CreateLoadBalancerUDPListenerRequest::getPortRange() const {
  return portRange_;
}

void CreateLoadBalancerUDPListenerRequest::setPortRange(const std::vector<CreateLoadBalancerUDPListenerRequest::PortRange> &portRange) {
  portRange_ = portRange;
  for(int dep1 = 0; dep1 != portRange.size(); dep1++) {
  auto portRangeObj = portRange.at(dep1);
  std::string portRangeObjStr = std::string("PortRange") + "." + std::to_string(dep1 + 1);
    setParameter(portRangeObjStr + ".StartPort", std::to_string(portRangeObj.startPort));
    setParameter(portRangeObjStr + ".EndPort", std::to_string(portRangeObj.endPort));
  }
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

long CreateLoadBalancerUDPListenerRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLoadBalancerUDPListenerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLoadBalancerUDPListenerRequest::getTags() const {
  return tags_;
}

void CreateLoadBalancerUDPListenerRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateLoadBalancerUDPListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateLoadBalancerUDPListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string CreateLoadBalancerUDPListenerRequest::getMasterSlaveServerGroupId() const {
  return masterSlaveServerGroupId_;
}

void CreateLoadBalancerUDPListenerRequest::setMasterSlaveServerGroupId(const std::string &masterSlaveServerGroupId) {
  masterSlaveServerGroupId_ = masterSlaveServerGroupId;
  setParameter(std::string("MasterSlaveServerGroupId"), masterSlaveServerGroupId);
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckReq() const {
  return healthCheckReq_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckReq(const std::string &healthCheckReq) {
  healthCheckReq_ = healthCheckReq;
  setParameter(std::string("healthCheckReq"), healthCheckReq);
}

int CreateLoadBalancerUDPListenerRequest::getBackendServerPort() const {
  return backendServerPort_;
}

void CreateLoadBalancerUDPListenerRequest::setBackendServerPort(int backendServerPort) {
  backendServerPort_ = backendServerPort;
  setParameter(std::string("BackendServerPort"), std::to_string(backendServerPort));
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("healthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckExp() const {
  return healthCheckExp_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckExp(const std::string &healthCheckExp) {
  healthCheckExp_ = healthCheckExp;
  setParameter(std::string("healthCheckExp"), healthCheckExp);
}

int CreateLoadBalancerUDPListenerRequest::getFailoverThreshold() const {
  return failoverThreshold_;
}

void CreateLoadBalancerUDPListenerRequest::setFailoverThreshold(int failoverThreshold) {
  failoverThreshold_ = failoverThreshold;
  setParameter(std::string("FailoverThreshold"), std::to_string(failoverThreshold));
}

bool CreateLoadBalancerUDPListenerRequest::getProxyProtocolV2Enabled() const {
  return proxyProtocolV2Enabled_;
}

void CreateLoadBalancerUDPListenerRequest::setProxyProtocolV2Enabled(bool proxyProtocolV2Enabled) {
  proxyProtocolV2Enabled_ = proxyProtocolV2Enabled;
  setParameter(std::string("ProxyProtocolV2Enabled"), proxyProtocolV2Enabled ? "true" : "false");
}

std::string CreateLoadBalancerUDPListenerRequest::getConnectionDrain() const {
  return connectionDrain_;
}

void CreateLoadBalancerUDPListenerRequest::setConnectionDrain(const std::string &connectionDrain) {
  connectionDrain_ = connectionDrain;
  setParameter(std::string("ConnectionDrain"), connectionDrain);
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckSwitch() const {
  return healthCheckSwitch_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckSwitch(const std::string &healthCheckSwitch) {
  healthCheckSwitch_ = healthCheckSwitch;
  setParameter(std::string("HealthCheckSwitch"), healthCheckSwitch);
}

std::string CreateLoadBalancerUDPListenerRequest::getAccess_key_id() const {
  return access_key_id_;
}

void CreateLoadBalancerUDPListenerRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckConnectTimeout() const {
  return healthCheckConnectTimeout_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout) {
  healthCheckConnectTimeout_ = healthCheckConnectTimeout;
  setParameter(std::string("HealthCheckConnectTimeout"), std::to_string(healthCheckConnectTimeout));
}

std::string CreateLoadBalancerUDPListenerRequest::getSlaveServerGroupId() const {
  return slaveServerGroupId_;
}

void CreateLoadBalancerUDPListenerRequest::setSlaveServerGroupId(const std::string &slaveServerGroupId) {
  slaveServerGroupId_ = slaveServerGroupId;
  setParameter(std::string("SlaveServerGroupId"), slaveServerGroupId);
}

std::string CreateLoadBalancerUDPListenerRequest::getQuicVersion() const {
  return quicVersion_;
}

void CreateLoadBalancerUDPListenerRequest::setQuicVersion(const std::string &quicVersion) {
  quicVersion_ = quicVersion;
  setParameter(std::string("QuicVersion"), quicVersion);
}

std::string CreateLoadBalancerUDPListenerRequest::getDescription() const {
  return description_;
}

void CreateLoadBalancerUDPListenerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateLoadBalancerUDPListenerRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void CreateLoadBalancerUDPListenerRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerUDPListenerRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerUDPListenerRequest::getScheduler() const {
  return scheduler_;
}

void CreateLoadBalancerUDPListenerRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

int CreateLoadBalancerUDPListenerRequest::getMaxConnection() const {
  return maxConnection_;
}

void CreateLoadBalancerUDPListenerRequest::setMaxConnection(int maxConnection) {
  maxConnection_ = maxConnection;
  setParameter(std::string("MaxConnection"), std::to_string(maxConnection));
}

std::string CreateLoadBalancerUDPListenerRequest::getRegionId() const {
  return regionId_;
}

void CreateLoadBalancerUDPListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLoadBalancerUDPListenerRequest::getMasterServerGroupId() const {
  return masterServerGroupId_;
}

void CreateLoadBalancerUDPListenerRequest::setMasterServerGroupId(const std::string &masterServerGroupId) {
  masterServerGroupId_ = masterServerGroupId;
  setParameter(std::string("MasterServerGroupId"), masterServerGroupId);
}

int CreateLoadBalancerUDPListenerRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateLoadBalancerUDPListenerRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string CreateLoadBalancerUDPListenerRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLoadBalancerUDPListenerRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateLoadBalancerUDPListenerRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateLoadBalancerUDPListenerRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateLoadBalancerUDPListenerRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLoadBalancerUDPListenerRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateLoadBalancerUDPListenerRequest::getConnectionDrainTimeout() const {
  return connectionDrainTimeout_;
}

void CreateLoadBalancerUDPListenerRequest::setConnectionDrainTimeout(int connectionDrainTimeout) {
  connectionDrainTimeout_ = connectionDrainTimeout;
  setParameter(std::string("ConnectionDrainTimeout"), std::to_string(connectionDrainTimeout));
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}


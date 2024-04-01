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
    : RpcServiceRequest("slb", "2013-02-21", "CreateLoadBalancerTCPListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerTCPListenerRequest::~CreateLoadBalancerTCPListenerRequest() {}

std::string CreateLoadBalancerTCPListenerRequest::getAccess_key_id() const {
  return access_key_id_;
}

void CreateLoadBalancerTCPListenerRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

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

std::string CreateLoadBalancerTCPListenerRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateLoadBalancerTCPListenerRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateLoadBalancerTCPListenerRequest::getScheduler() const {
  return scheduler_;
}

void CreateLoadBalancerTCPListenerRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheck() const {
  return healthCheck_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

int CreateLoadBalancerTCPListenerRequest::getEstablishedTimeout() const {
  return establishedTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setEstablishedTimeout(int establishedTimeout) {
  establishedTimeout_ = establishedTimeout;
  setParameter(std::string("EstablishedTimeout"), std::to_string(establishedTimeout));
}

int CreateLoadBalancerTCPListenerRequest::getMaxConnection() const {
  return maxConnection_;
}

void CreateLoadBalancerTCPListenerRequest::setMaxConnection(int maxConnection) {
  maxConnection_ = maxConnection;
  setParameter(std::string("MaxConnection"), std::to_string(maxConnection));
}

int CreateLoadBalancerTCPListenerRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

std::string CreateLoadBalancerTCPListenerRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void CreateLoadBalancerTCPListenerRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

int CreateLoadBalancerTCPListenerRequest::getConnectTimeout() const {
  return connectTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setConnectTimeout(int connectTimeout) {
  connectTimeout_ = connectTimeout;
  setParameter(std::string("ConnectTimeout"), std::to_string(connectTimeout));
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

int CreateLoadBalancerTCPListenerRequest::getConnectPort() const {
  return connectPort_;
}

void CreateLoadBalancerTCPListenerRequest::setConnectPort(int connectPort) {
  connectPort_ = connectPort;
  setParameter(std::string("ConnectPort"), std::to_string(connectPort));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

std::string CreateLoadBalancerTCPListenerRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLoadBalancerTCPListenerRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateLoadBalancerTCPListenerRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLoadBalancerTCPListenerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLoadBalancerTCPListenerRequest::getListenerStatus() const {
  return listenerStatus_;
}

void CreateLoadBalancerTCPListenerRequest::setListenerStatus(const std::string &listenerStatus) {
  listenerStatus_ = listenerStatus;
  setParameter(std::string("ListenerStatus"), listenerStatus);
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

int CreateLoadBalancerTCPListenerRequest::getInterval() const {
  return interval_;
}

void CreateLoadBalancerTCPListenerRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}


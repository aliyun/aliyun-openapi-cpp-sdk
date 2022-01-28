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

#include <alibabacloud/ens/model/CreateLoadBalancerTCPListenerRequest.h>

using AlibabaCloud::Ens::Model::CreateLoadBalancerTCPListenerRequest;

CreateLoadBalancerTCPListenerRequest::CreateLoadBalancerTCPListenerRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateLoadBalancerTCPListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerTCPListenerRequest::~CreateLoadBalancerTCPListenerRequest() {}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string CreateLoadBalancerTCPListenerRequest::getProtocol() const {
  return protocol_;
}

void CreateLoadBalancerTCPListenerRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

int CreateLoadBalancerTCPListenerRequest::getEstablishedTimeout() const {
  return establishedTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setEstablishedTimeout(int establishedTimeout) {
  establishedTimeout_ = establishedTimeout;
  setParameter(std::string("EstablishedTimeout"), std::to_string(establishedTimeout));
}

int CreateLoadBalancerTCPListenerRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

std::string CreateLoadBalancerTCPListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateLoadBalancerTCPListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

int CreateLoadBalancerTCPListenerRequest::getBackendServerPort() const {
  return backendServerPort_;
}

void CreateLoadBalancerTCPListenerRequest::setBackendServerPort(int backendServerPort) {
  backendServerPort_ = backendServerPort;
  setParameter(std::string("BackendServerPort"), std::to_string(backendServerPort));
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckConnectTimeout() const {
  return healthCheckConnectTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout) {
  healthCheckConnectTimeout_ = healthCheckConnectTimeout;
  setParameter(std::string("HealthCheckConnectTimeout"), std::to_string(healthCheckConnectTimeout));
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

std::string CreateLoadBalancerTCPListenerRequest::getEipTransmit() const {
  return eipTransmit_;
}

void CreateLoadBalancerTCPListenerRequest::setEipTransmit(const std::string &eipTransmit) {
  eipTransmit_ = eipTransmit;
  setParameter(std::string("EipTransmit"), eipTransmit);
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

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

